import numpy as np 


n = []
n.append(".###..#..###.###.#.#.###.###.###.###.###.")
n.append(".#.#.##....#...#.#.#.#...#.....#.#.#.#.#.")
n.append(".#.#..#..###.###.###.###.###...#.###.###.")
n.append(".#.#..#..#.....#...#...#.#.#...#.#.#...#.")
n.append(".###.###.###.###...#.###.###...#.###.###.")
for i in range(5):
    n[i] = list(n[i])
n = np.array(n)

num = []
for i in range(10):
    i = (i)*4
    num.append(n[:,i:i+5])

def getNum(x):
    for i in range(10):
        if(np.all(x==num[i])):
            return i


N = (int)(input())
s = []
for i in range(5):
    s.append(list(input()))
s = np.array(s)

ans = ''
for i in range(N):
    i = (i)*4
    ans = ans + str(getNum(s[:,i:i+5]))

print(ans)