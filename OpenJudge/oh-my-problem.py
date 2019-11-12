from lxml import etree
import sys
import requests
import os

def mkdir(path):
	folder = os.path.exists(path)
	if not folder:
		os.makedirs(path)
		return 1106
	else:
		return 1

def getCon():
	url = 'http://cise.sdust.edu.cn/OJ/contest.php'
	res = requests.get(url=url)
	html = etree.HTML(res.content.decode("utf-8"))
	con = html.xpath('//center[1]/tr/td[1]/text()')
	return con[1:]
	
def getProNum(con,ck):
	heder = {"Cookie": ck}
	url = 'http://cise.sdust.edu.cn/OJ/contest.php?cid=' + con
	res = requests.get(url=url,headers=heder)
	html = etree.HTML(res.content.decode("utf-8"))
	urls = html.xpath('//center/table/tr/td/a/@href')
	return urls
	
	
def mkProblem(url,ck):
        ttt = ''
        sin = ''
        sout = ''
        url = 'http://cise.sdust.edu.cn/OJ/' + url
        siflag = False
        soflag = False
        heder = {
            "Cookie": ck    
        }
        res = requests.get(url=url,headers=heder)
        html = etree.HTML(res.content.decode("utf-8"))
        tt = html.xpath('//div[@id="main"]/descendant::*/text()')
        try:
            id = html.xpath('//*[@id="main"]/center[2]/a[2]/@href')[0][21:]
        except:
            return 0;
        path = './ProblemSet/' + id
        print("更新" + path)
        mkdir(path)
        tt = tt[:len(tt)-31]
        # print(tt)
        # print('\n')
        for i in range(len(tt)):
            if i == 0:
                continue
            elif i == 1:
                ttt = ttt + '# '+tt[i][11:] + '\n'
                continue
            elif i == 6:
                ttt = ttt + '\n'
                continue
            elif i in [7,8,9,10,11,12,13,14]:
                continue
            elif tt[i] in ['Description','Input','Output']:
                ttt = ttt + '\n\n## ' + tt[i] + '\n'
                continue
            elif tt[i] in ['Sample Input']:
                siflag = True
                ttt = ttt + '\n\n## ' + tt[i] + '\n```\n'
                continue
            elif tt[i] in ['Sample Output']:
                siflag =False
                soflag = True
                ttt = ttt + '\n```\n## ' + tt[i] + '\n```\n'
                continue
            elif tt[i] in ['HINT']:
                soflag = False
                ttt = ttt + '\n```\n\n## ' + tt[i] + '\n'
                continue
            elif tt[i] in ['Append Code'] and i>len(tt)-6:
                ttt = ttt + '\n\n## ' + tt[i] + '\n'
                continue
            elif tt[i] in ['append.c'] and i>len(tt)-4:
                codeurl = 'http://cise.sdust.edu.cn/OJ/append_detail.php?lang=0&pid=' + id
                # print(codeurl)
                coderes = requests.get(url=codeurl)
                codehtml = etree.HTML(coderes.content.decode("utf-8"))
                code =  codehtml.xpath('//div[@id="main"]/descendant::*/text()')[2:]
                code = code[:len(code)-25]
                # print(code)
                # print('\n')
                cd = ''
                for c in code:
                    cd = cd + c
                ttt = ttt + '### ' + tt[i] + '\n```c' + cd + '```\n'
                continue
            elif tt[i] == ', ':
                continue
            elif tt[i] in ['append.cc'] and i>len(tt)-2:
                codeurl = 'http://cise.sdust.edu.cn/OJ/append_detail.php?lang=1&pid=' + id
                # print(codeurl)
                coderes = requests.get(url=codeurl)
                codehtml = etree.HTML(coderes.content.decode("utf-8"))
                code =  codehtml.xpath('//div[@id="main"]/descendant::*/text()')[2:]
                code = code[:len(code)-25]
                # print(code)
                # print('\n')
                cd = ''
                for c in code:
                    cd = cd + c
                ttt = ttt + '### ' + tt[i] + '\n```cpp' + cd + '```\n'
                continue
            if(siflag):
                sin = sin+tt[i]
            if(soflag):
                sout = sout = tt[i]
            ttt = ttt+tt[i]
        problemfile = open(path+'/problem.md','w')
        problemfile.write(ttt)
        problemfile.close()
        inputfile = open(path+'/input','w')
        inputfile.write(sin)
        inputfile.close()
        outputfile = open(path+'/output','w')
        outputfile.write(sout)
        outputfile.close()
	

def main(arg):
	if (len(arg)==2):
		ck = 'PHPSESSID=' + arg[1]
	else:
		ck = input('PHPSESSID=')
		ck = 'PHPSESSID=' + ck
	allCon = getCon()
	# print(allCon)
	for con in allCon:
		prourls = getProNum(con,ck)
		# print(str(prourls))
		for url in prourls:
			mkProblem(url,ck)

main(sys.argv)
