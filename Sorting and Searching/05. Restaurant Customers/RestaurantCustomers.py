times = []
for _ in range(int(input())):
    times.append((x,y) for x,y in map(int, input().split()))

times.sort(key= lambda x:x[0])
ans = [0 ]