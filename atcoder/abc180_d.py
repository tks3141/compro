(x,y,a,b) = list(map(int,input().split()))
n1=0
now = x
while(b>(a-1)*now and now*a<y):
    n1+=1
    now *= a
res = y - now
n2 = min(res//b,(res-1)//b)

print(n1+n2)
