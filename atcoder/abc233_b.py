x,y = map(int,input().split())
s = input()

print(s[:x-1]+''.join(reversed(s[x-1:y]))+s[y:])
