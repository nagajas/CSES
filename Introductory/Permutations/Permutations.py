from itertools import permutations
import sys
input = sys.stdin.readline
print = sys.stdout.write

n = int(input())

if n==1:
    print("1\n")
    exit()
if n<4:
    print("NO SOLUTION\n")
    exit()

for i in range(2,n+1,2):
    print(str(i) + " ")
for i in range(1,n+1,2):
    print(str(i) + " ")