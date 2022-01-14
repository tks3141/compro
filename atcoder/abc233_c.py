import numpy as np

N,X = map(int,input().split())
L = []
for i in range(N):
    s = input().split()
    L.append(list(map(int,s[1:])))

# prods = np.array([1],dtype='i8')
# for l in L:
#     ne = []
#     for x in l:
#         ne.append(prods*np.int64(x))
#     prods = np.concatenate(ne)

def dfs(depth,x):
    if(depth==len(L)):
        return 1 if x==X else 0
    
    _s = 0
    l = L[depth]
    for ne in l:
        _s += dfs(depth+1,x*ne)
    return _s

print(dfs(0,1))

