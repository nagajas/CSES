import sys
input = sys.stdin.readline
print = sys.stdout.write

n = int(input())
for i in range(1<<n):
    res = i^(i>>1)
    res = "{0:b}".format(res)
    res = '0'*(n-len(res))+res
    print(str(res)+'\n')
