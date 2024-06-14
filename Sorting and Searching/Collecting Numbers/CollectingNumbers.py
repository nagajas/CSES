def main():
    n = int(input())
    numbers = list(map(int, input().split()))
    pos = [0] * (n)
    for i in range(n):
        pos[numbers[i]-1] = i
    count = 1
    for i in range(1,n):
        if pos[i] < pos[i-1]:
            count += 1
    
    print(count)

if __name__ == "__main__":
    main()