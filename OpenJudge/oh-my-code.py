from lxml import etree
import sys
import requests
import os
import re


def mkdir(path):
    folder = os.path.exists(path)
    if not folder:
        os.makedirs(path)
        return 1106
    else:
        return 1


def getCodeUrl(sid, ck):
    heder = {"Cookie": ck}
    urls = []
    url = 'http://cise.sdust.edu.cn/OJ/status.php?user_id=' + sid
    res = requests.get(url=url, headers=heder)
    html = etree.HTML(res.content.decode("utf-8"))
    t = html.xpath('//*[@id="main"]//td[7]/a[1]/@href')
    urls.extend(t)
    while True:
        if len(t) != 20:
            break
        url = 'http://cise.sdust.edu.cn/OJ/' + \
            html.xpath('//*[@id="main"]/a[3]/@href')[0]
        res = requests.get(url=url, headers=heder)
        html = etree.HTML(res.content.decode("utf-8"))
        t = html.xpath('//*[@id="main"]//td[7]/a[1]/@href')
        urls.extend(t)

    return urls


def mkCode(url, ck, path):
    heder = {"Cookie": ck}
    codeurl = 'http://cise.sdust.edu.cn/OJ/' + url
    coderes = requests.get(url=codeurl, headers=heder)
    codehtml = etree.HTML(coderes.content.decode("utf-8"))
    code = codehtml.xpath('//div[@id="main"]/descendant::*/text()')[2:]
    code = code[:len(code)-25]
    for cd in code:
        pres = re.compile(r'Result: .*\n')
        res = pres.findall(cd)
        r = res[len(res)-1][8:]
        # print(r)
        if r == 'Accepted\n':
            ppro = re.compile(r'Problem: [1-9][0-9]{3}')
            pro = ppro.findall(cd)
            pid = pro[len(pro)-1][9:]
            plan = re.compile(r'Language: .*\n')
            lan = plan.findall(cd)
            l = lan[len(lan)-1][10:]
            # print(pid,l)
            ex = '.code'
            if l == 'C\n':
                ex = '.c'
            elif l == 'C++\n':
                ex = '.cc'
            filename = path + '/' + pid + ex
            codefile = open(filename, 'w')
            codefile.write(cd)
            codefile.close()


def main(arg):
    if len(arg) == 4:
        sid = arg[1]
        name = arg[2]
        ck = 'PHPSESSID=' + arg[1]
    else:
        sid = input('Student ID:')
        name = input('Your username:')
        ck = input('PHPSESSID=')
        ck = 'PHPSESSID=' + ck
    path = name
    mkdir(path)
    codeUrls = getCodeUrl(sid, ck)
    # print(codeUrls)
    for url in codeUrls:
        mkCode(url, ck, path)


main(sys.argv)
