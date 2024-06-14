import sys
input = sys.stdin.readline
print = sys.stdout.write

s = input().strip()
n = len(s)
c = [0]*26
for i in s:
    c[ord(i)-65]+=1
odd = 0
odd_char = ''
for i in range(26):
    if c[i]%2==1:
        odd+=1
        odd_char = chr(i+65)
if odd>1:
    print("NO SOLUTION")
else:
    ans = ''
    for i in range(26):
        ans+=chr(i+65)*(c[i]//2)
    print(ans+odd_char+ans[::-1])
