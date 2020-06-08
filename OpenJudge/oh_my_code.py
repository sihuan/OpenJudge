from lxml import etree
import sys
import requests
import os
import re
import time


def mkdir(path):
    folder = os.path.exists(path)
    if not folder:
        os.makedirs(path)
        return 1106
    else:
        return 1


def getCodeUrl(sid, ck, lan):
	heder = {"Cookie": ck}
	urls = []
	if lan == 'c':
		codelan = '&language=0'
	elif lan == 'c++':
		codelan = '&language=1'
	url = 'http://cise.sdust.edu.cn/OJ/status.php?user_id=' + sid + codelan + '&jresult=4'
	# print(url)
	res = requests.get(url=url, headers=heder)
	# time.sleep(0.2)
	html = etree.HTML(res.content.decode("utf-8"))
	# time.sleep(0.2)
	t = html.xpath('//*[@id="main"]//td[7]/a[1]/@href')
	# print(str(t))
	urls.extend(t)
	nexturl = 'http://cise.sdust.edu.cn/OJ/' + html.xpath('//*[@id="main"]/a[3]/@href')[0]
	# print(nexturl)
	# return 0
	while True:
		url = nexturl
		res = requests.get(url=url, headers=heder)
		html = etree.HTML(res.content.decode("utf-8"))
		time.sleep(0.3)
		t = html.xpath('//*[@id="main"]//td[7]/a[1]/@href')
		# print(str(t))
		urls.extend(t)
		nexturl = 'http://cise.sdust.edu.cn/OJ/' + html.xpath('//*[@id="main"]/a[3]/@href')[0]
		# print(nexturl)
		if nexturl == url:
			break
		time.sleep(0.3)
	# print(urls)
	return urls


def mkCode(url, ck, path,lan):
	heder = {"Cookie": ck}
	codeurl = 'http://cise.sdust.edu.cn/OJ/' + url
	# print(codeurl)
	coderes = requests.get(url=codeurl, headers=heder)
	codehtml = etree.HTML(coderes.content.decode("utf-8"))
	code = codehtml.xpath('//div[@id="main"]/descendant::*/text()')[2:]
	code = code[:len(code)-25]
	# print(code)
	for cd in code:
		# print(cd)
		ppro = re.compile(r'Problem: [1-9][0-9]{3}')
		pro = ppro.findall(cd)
		# print(pro)
		pid = pro[len(pro)-1][9:]
		ex = '.code'
		if lan == 'c':
			ex = '.c'
		elif lan == 'c++':
			ex = '.cc'
		filename = path + '/' + pid + ex
		print('更新' + filename)
		codefile = open(filename, 'w')
		codefile.write(cd)
		codefile.close()


def main(arg):
    if len(arg) == 4:
        sid = arg[1]
        name = arg[2]
        ck = 'PHPSESSID=' + arg[3]
    else:
        sid = input('Student ID:')
        name = input('Your username:')
        ck = input('PHPSESSID=')
        ck = 'PHPSESSID=' + ck
    path = name
    mkdir(path)
    for lan in ['c', 'c++']:
        codeUrls = getCodeUrl(sid, ck, lan)
        codeUrls = codeUrls[::-1]
        # return 1
        # print(codeUrls)
        for url in codeUrls:
            mkCode(url, ck, path, lan)

if __name__ == "__main__":
    main(sys.argv)
	