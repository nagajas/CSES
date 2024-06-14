import sys,math
input = sys.stdin.readline
print = sys.stdout.write

mp = set()
def permute(s, l, r):
    if l == r:
        t = ''.join(s)
        if t not in mp:
            mp.add(t)
    else:
        for i in range(l, r+1):
            s[l], s[i] = s[i], s[l]
            permute(s, l+1, r)
            s[l], s[i] = s[i], s[l]

s = input().strip()
n = len(s)

permute(list(s), 0, n-1)
print(str(len(mp))+'\n')

for item in sorted(mp):
    print(item+'\n')
