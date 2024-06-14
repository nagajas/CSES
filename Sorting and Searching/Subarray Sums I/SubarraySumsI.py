import sys
input = sys.stdin.readline

n,x = map(int, input().split())
a = list(map(int,input().split()))

l,r,curr,cnt = 0,0,a[0],0

while r<n:
    if curr == x:
        cnt +=1 
        curr -= a[l]
        l +=1
    elif curr < x:
        r += 1
        if r < n:
            curr += a[r]
    else:
        curr -= a[l]
        l += 1
        
sys.stdout.write(str(cnt)+'\n')