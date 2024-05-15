n = int(input())
a = list(map(int, input().split()))
 
curr = 0
sm = max(a)
 
for i in range(n):
    if(curr + a[i] < 0):
        curr = 0
    else:
        curr += a[i]
        sm = max(sm, curr)
    
print(sm)
