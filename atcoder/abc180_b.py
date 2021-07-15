import numpy as np

n = (int)(input())
x = list(map(int,input().split()))
x = np.array(x)

print(np.linalg.norm(x,ord=1))
print(np.linalg.norm(x,ord=2))
print(np.amax(np.fabs(x)))
