import numpy as np

MOD = 10**9+7

def main():
  S = input()
  C = "_chokudai"
  dp = [0]*9
  dp[0]=1
  for s in S:
    for i,c in enumerate(C):
      if c==s:
        dp[i] += dp[i-1]
        dp[i] = dp[i] % MOD
        break
  
  print(int(dp[-1]))





main()