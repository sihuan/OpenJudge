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

ck = input('请宁输入宁的 Cookie: \n')
ck = 'PHPSESSID=' + ck

while True :
    try :
        ttt = ''
        sin = ''
        sout = ''
        url = input('输入一个题目网址: \n')
        siflag = False
        soflag = False
        heder = {
            "Cookie": ck    
        }
        res = requests.get(url=url,headers=heder)
        html = etree.HTML(res.content.decode("utf-8"))
        id = html.xpath('//*[@id="main"]/center[2]/a[2]/@href')[0][21:]
        path = '../ProblemSet/' + id
        print('开始创建 '+id+ '题 :)\n')
        if mkdir(path) == 1:
            print('题目已经存在咯！\n')
            continue
        tt = html.xpath('//div[@id="main"]/descendant::*/text()')
        tt = tt[:len(tt)-31]
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
            elif tt[i] in ['Description','Output']:
                ttt = ttt + '\n## ' + tt[i] + '\n'
                continue
            elif tt[i] == 'Input':
                ttt = ttt + '## ' + tt[i] + '\n'
                continue
            elif tt[i] in ['Sample Input']:
                siflag = True
                ttt = ttt + '\n## ' + tt[i] + '\n```\n'
                continue
            elif tt[i] in ['Sample Output']:
                siflag =False
                soflag = True
                ttt = ttt + '```\n\n## ' + tt[i] + '\n```\n'
                continue
            elif tt[i] in ['HINT']:
                soflag = False
                ttt = ttt + '```\n\n## ' + tt[i] + '\n'
                continue
            elif tt[i] in ['Append Code']:
                ttt = ttt + '\n\n## ' + tt[i] + '\n'
                continue
            elif tt[i] in ['append.c']:
                ttt = ttt + '### ' + tt[i] + '\n```c\n' + 'code' + '\n```\n'
                continue
            elif tt[i] in ['append.cc']:
                ttt = ttt + '### ' + tt[i] + '\n```cpp\n' + 'code' + '\n```\n'
                continue
            if(siflag):
                sin = sin+tt[i]
            if(soflag):
                sout = sout = tt[i]
            ttt = ttt+tt[i]
        problemfile = open(path+'/problem.md','w')
        problemfile.write(ttt)
        problemfile.close()
        prinf('  -完成 题目描述 文件\n')
        inputfile = open(path+'/input','w')
        inputfile.write(sin)
        inputfile.close()
        prinf('  -完成 样例输入 文件\n')
        outputfile = open(path+'/output','w')
        outputfile.write(sout)
        outputfile.close()
        prinf('  -完成 样例输出 文件\n')
        prinf(id + ' OK！\n')

    except :
        break