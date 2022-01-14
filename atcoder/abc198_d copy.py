from itertools import zip_longest

def main():
  s1,s2,s3 = input(),input(),input()
  s_uni = (set([*s1,*s2,*s3]))
  if(len(s_uni)>10):
    print("UNSOLVABLE")
    return
  
  candidate_num = list(range(10))
  def check(kumi):
    table = {}
    for c,k in zip(s_uni,kumi):
      table[c]=k

    x = int("".join([str(table[x]) for x in s1]))
    y = int("".join([str(table[x]) for x in s2]))
    z = int("".join([str(table[x]) for x in s3]))
    if(x==0 or y==0 or table[s1[0]]==0 or table[s2[0]]==0 or table[s3[0]]==0):
      return False
    if(x+y==z):
      print(x,y,z,sep='\n')
      return True
    else:
      return False

  def bfs(depth,cand,kumi):
    # print(depth,cand,kumi)
    if(depth==len(s_uni)):
      if(check(kumi)):
        return True
      else:
        return False

    for i in cand:
      k=kumi[:]
      n_c = cand[:]
      n_c.remove(i)
      k.append(i)
      if(bfs(depth+1,n_c,k)):
        return True
    return False
  if(not bfs(0,candidate_num,[])):
    print("UNSOLVABLE")
  return 


main()