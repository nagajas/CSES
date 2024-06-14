import sys
input = sys.stdin.readline

s = input().strip()
max_count = 0
count = 1

for i in range(1, len(s)):
    if s[i] == s[i-1]:
        count += 1
    else:
        max_count = max(max_count, count)
        count = 1

max_count = max(max_count, count)
sys.stdout.write(str(max_count)+'\n')