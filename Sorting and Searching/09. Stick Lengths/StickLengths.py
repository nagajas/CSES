def main():
    n = int(input())
    sticks = list(map(int, input().split()))
    sticks.sort()
    median = sticks[n // 2]
    cost = 0
    for stick in sticks:
        cost += abs(stick - median)
    print(cost)

if __name__ == "__main__":
    main()