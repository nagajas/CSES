import sys
input = sys.stdin.readline

n,x = map(int, input().split())
a = list(map(int,input().split()))
for i in range(n):
    a[i] = (a[i],i+1)
a.sort()

for i in range(n-2):
    l,r = i+1, n-1
    while l<r:
        curr = a[i][0]+a[l][0]+a[r][0]
        if curr==x:
            sys.stdout.write(str(a[i][1])+' '+str(a[l][1])+' '+str(a[r][1])+'\n')
            sys.exit()
        elif curr<x:
            l += 1
        else:
            r -= 1
sys.stdout.write("IMPOSSIBLE\n")
