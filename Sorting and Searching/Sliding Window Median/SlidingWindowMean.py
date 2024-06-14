import sys
from sortedcontainers import SortedList

input = sys.stdin.readline
print = sys.stdout.write

n,k = map(int,input().split())
a = list(map(int,input().split()))

S = SortedList()
for i in range(k):
    S.add(a[i])
    
for i in range(k,n):
    print(str(S[(k-1)//2]) + " ")
    S.remove(a[i-k])
    S.add(a[i])

print(str(S[(k-1)//2]) + " ")
print("\n")