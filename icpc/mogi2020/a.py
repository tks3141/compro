import numpy as np

def func():
    (n,m) = list(map(int,input().split()))
    if(n==0):
        return 1

    a = list(map(int,input().split()))
    b = list(map(int,input().split()))
    # print(b)
    a = np.array(a)
    b = np.array(b)

    res = [a*b[i] for i in range(m)]
    ans = [0]*10

    for xx in res:
        for x in xx:
            s = str(x)
            for i in s:
                ans[int(i)]+=1

    for a in ans:
        print(a,end=' ')
    print()

while(1):
    if(func()):
        break