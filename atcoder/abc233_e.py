import sys
import numpy as np

def main_base(lines):
    N = list(map(int,lines[0].split()))[0]

    ans = 0

    while N>0:
        ans +=N
        N = N//10
    
    print(ans)
    return ans

def main(lines):
    # N = list(map(int,lines[0].split()))[0]
    N = lines[0]
    S = [0]
    ans = ''

    for i in range(len(N)):
        S.append(int(N[i])+S[-1])
    
    S.reverse()

    next = 0
    for s in S:
        n = int(s) + next
        s = str(n)
        if(s!='0'):
            ans += s[-1]
        if(len(s)>1):
            next = int(s[:-1])
        else:
            next = 0
    ans = ans[::-1]
    
    print(ans)

    # while N>0:
    #     ans +=N
    #     N = N//10

    return ans







if __name__ == '__main__':
    lines = []
    for l in sys.stdin:
        lines.append(l.rstrip('\r\n'))

    # l = ''
    # for i in range(500000):
    #     l += str(i%10)
    # lines = [l]
    # main_base([l])

    main(lines)
