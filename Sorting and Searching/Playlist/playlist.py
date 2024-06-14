n = int(input())
songs = list(map(int, input().split()))

temp = set()
count = 0
max_count = 0

for i in range(n):
    if songs[i] in temp:
        while songs[i] in temp:
            temp.remove(songs[i - count])
            count -= 1
        temp.add(songs[i])
        count += 1
    else:
        count += 1
        temp.add(songs[i])
    max_count = max(max_count, len(temp))

print(max_count)