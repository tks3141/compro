import numpy as np 
import string
a = '12345'


def main():
    N = int(input())
    A = []
    letters = (string.ascii_lowercase)

    for i in range(N):
        A.append(list(input()))

    ans = ''
    toN = int(N/2)
    for i in range(toN):
        passed = False
        for l in letters:
            if(l in A[i] and l in A[N-i-1]):
                ans += l
                passed = True
                break
        if(not passed):
            print(-1)
            return 
    if(N%2==0):
        pass
    else:
        ans+=A[toN][0]

    if(N%2==0):
        print(ans+ans[::-1])
    else:
        print(ans+ans[::-1][1:])

main()