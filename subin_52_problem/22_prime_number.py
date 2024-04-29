# Reads two integers and prints their sum
def basic_io():
    a, b = map(int, input().split())
    print(a + b)


def seive_of_eratosthenes(limit):

    primes = [True] * (limit + 1)
    primes[0] = primes[1] = False

    sqrt_limit = int(limit**0.5)
    # print("Sq ", sqrt_limit)

    for num in range(2, sqrt_limit + 1):
        # print(num)
        if primes[num]:
            for multiple in range(num * num, limit + 1, num):
                # print(multiple)
                primes[multiple] = False

    return primes


def count_primes(primes):
    counter = []

    seen_primes = 0
    for p in primes:
        if p:
            seen_primes += 1
        counter.append(seen_primes)

    return counter


def main():
    # basic_io()
    # Your python code here
    test_case = int(input())
    primes = seive_of_eratosthenes(100001)
    # print("Primes = ", primes)
    primes_count = count_primes(primes)
    # print("Prime Count = ", primes_count)
    while test_case:
        test_case -= 1

        a, b = map(int, input().split())
        if a == b:
            print(primes_count[a])
        elif a > b:
            print(0)
        else:
            print(primes_count[b] - primes_count[a - 1])


main()
