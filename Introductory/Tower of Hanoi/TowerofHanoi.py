import sys
input = sys.stdin.readline
print = sys.stdout.write

def hanoi(n, a, b, c):
    if n == 1:
        print(str(a)+' '+str(c)+'\n')
    else:
        hanoi(n-1, a, c, b)
        print(str(a)+' '+str(c)+'\n')
        hanoi(n-1, b, a, c)

n = int(input())
print(str(2**n-1)+'\n')
hanoi(n, 1, 2, 3)