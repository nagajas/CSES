import sys
from time import time
s = time()
input = sys.stdin.readline

n,x = map(int, input().split())
a = list(map(int,input().split()))
for i in range(n):
    a[i] = (a[i],i+1)
a.sort()
for i in range(n-3):
    for j in range(i+1,n-2):
        target = x-a[i][0]-a[j][0]
        l,r = j+1, n-1
        while l<r:
            curr = a[l][0]+a[r][0]
            if curr==target :
                sys.stdout.write(str(a[i][1])+' '+str(a[j][1])+' '+str(a[l][1])+' '+str(a[r][1])+'\n')
                sys.stderr.write("Time taken: "+str(time()-s)+"s\n")
                sys.exit()
            elif curr<target:
                l += 1
            else:
                r -= 1

sys.stdout.write("IMPOSSIBLE\n")
sys.stderr.write("Time taken: "+str(time()-s)+"s\n")