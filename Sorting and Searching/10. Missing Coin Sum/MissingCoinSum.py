def main():
    n = int(input())
    coins = list(map(int, input().split()))
    coins.sort()
    sum = 1
    for coin in coins:
        if coin > sum:
            break
        sum += coin
    print(sum)

if __name__ == "__main__":
    main()