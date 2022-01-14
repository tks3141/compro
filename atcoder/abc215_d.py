# import numpy as np

MOD = 10**9+7

def main():
  N,M = list(map(int,input().split()))
  A = list(map(int,input().split()))
  
  l = set()
  for a in A:
    for i in range(2,a):
      l.add(a)
      if(i*i>=a):
        break
      if(a % i == 0):
        l.add(i)
        l.add(int(a/i))

  answer = [1]*(M+1)
  for x in l:
    for i in range(int(M/x)):
      answer[x*i] = 0

  AN = sum(answer)-1
  print(AN)

  print(answer)
  for i in range(M):
    if(answer[i]==1):
      print(i)

main()