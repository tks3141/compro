import numpy as np
from collections import defaultdict


n = list(map(int,(input().split(' '))))
while(max(n)!=0):
    # print(n)
    na = np.array(n)
    while(len(na)>1):
        mi = na.argmin()
        m = na[mi]
        # print(mi,m)
        na=na-m
        na[mi]+=m
        na = na[na>=1]
    print(na.max())
        
    n = list(map(int,(input().split(' '))))
