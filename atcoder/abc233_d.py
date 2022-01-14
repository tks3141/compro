import sys
import numpy as np

def main(lines):
    N,A,M,K = list(map(int,lines[0].split()))

    i = 0
    m = M
    n = N
    wi = (m,m)
    g = n*K
    while not (wi[0] <= g and g <= wi[1]):
        n+=1
        g = n*K
        wi = (wi[0],wi[1]+A)
    
    print(n-N)







if __name__ == '__main__':
    lines = []
    for l in sys.stdin:
        lines.append(l.rstrip('\r\n'))
    main(lines)
