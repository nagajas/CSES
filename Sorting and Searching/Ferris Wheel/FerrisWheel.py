import sys
input = sys.stdin.readline

n,x  = map(int, input().split())
a = sorted(map(int, input().split()))

l,r = 0,n-1
count = 0
while r>=l:
    if a[l]+a[r]<=x:
        l+=1
    r-=1
    count+=1
    
sys.stdout.write(str(count)+'\n')
