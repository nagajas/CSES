import sys
# from time import time
# s = time()
input = sys.stdin.readline

def check(mid, k, arr):
    sum,cnt = 0,0
    for x in arr:
        if x>mid or cnt>=k:
            return False
        if sum+x>mid:
            cnt+=1
            sum = x
        else:
            sum+=x
    # if sum>0:
    #     cnt+=1
    return cnt < k

n,k = map(int, input().split())
arr = list(map(int, input().split()))
l,r = max(arr),sum(arr)

while l<r:
    mid = l+(r-l)//2
    if check(mid, k, arr):
        r = mid
    else:
        l = mid+1
        
sys.stdout.write(str(l)+'\n')
# sys.stderr.write("Time taken: "+str(time()-s)+'s\n')
