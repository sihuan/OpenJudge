from oh_my_problem import mkProblem

f = open('./OpenJudge/publicProblemLink2.txt', 'r')
while True:
    lnk = f.readline().rstrip('\n')
    if lnk:
        mkProblem(lnk, '')
    else:
        break
f.close()