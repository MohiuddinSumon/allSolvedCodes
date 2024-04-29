def solve():
    a, b, c = map(int, input().split())
    for i in range(a * b, c + 1, a * b):
        if i % a == 0 and i % b == 0:
            print(i)


def main():
    tc = int(input())
    for _ in range(tc):
        solve()
        print()


if __name__ == "__main__":
    main()
