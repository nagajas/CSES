ans = -1
hash = []

n=int(input())

for _ in range(n):
    s,f = map(int,input().split())
    hash.append((s,f))

hash.sort(key=lambda x:x[0])

s0,f0 = hash[0]
curr=0

for i in range(1,len(hash)):
    s,f = hash[i]
    if s<=f0:
        curr+=1
    else:
        curr=0
    s0=s
    f0 = max(f0,f)
    ans = max(ans,curr)

print(ans)