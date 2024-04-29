def count_zeros(n):
    count = 0
    while n > 0:
        count += n // 5
        n = n // 5
    return count


def main():
    test_case = int(input())
    for _ in range(test_case):
        n = int(input())
        print(count_zeros(n))


main()
