import numpy as np
from collections import defaultdict

n = (int)(input())
while(n!=0):
    ranks = []
    years = defaultdict(lambda : np.array([0,0,0]))

    for i in range(n):
        y,_,r = input().split()
        if('G' in r):
            years[y]+=np.array([1,0,0])
        elif('S'in r):
            years[y]+=np.array([0,1,0])
        else:
            years[y]+=np.array([0,0,1])
    gm = [[years[y][0],y] for y in years]
    allm = [[years[y].sum(),y] for y in years]
    gm = sorted(gm,key=lambda x:[x[1],x[0]],reverse=True)
    gm = sorted(gm,key=lambda x:[x[0]])
    gm.reverse()
    allm = sorted(allm,key=lambda x:[x[1],x[0]],reverse=True)
    allm = sorted(allm,key=lambda x:[x[0]])
    allm.reverse()
    # print(gm,allm)

    print(gm[0][1],allm[0][1])
    n = (int)(input())