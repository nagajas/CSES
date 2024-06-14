import sys
from time import time
st = time()
input = sys.stdin.readline

n,m,k = map(int, input().split())
d = sorted(map(int, input().split()))
a = sorted(map(int, input().split()))

j = 0
ans = 0

for i in range(n):
    while j<m and a[j]<d[i]-k:
        j+=1
    if j<m and a[j]<=d[i]+k:
        ans +=1
        j+=1

sys.stdout.write(str(ans)+'\n')
sys.stderr.write("Time: "+str(time()-st)+'\n')