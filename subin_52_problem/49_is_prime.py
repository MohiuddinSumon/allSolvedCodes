import math


# মৌলিক সংখ্যা পরীক্ষা
def is_prime(n):
    if n <= 1:
        return False
    if n == 2:
        return True
    if n % 2 == 0:
        return False
    for i in range(3, int(math.sqrt(n)) + 1, 2):
        if n % i == 0:
            return False
    return True


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


def main():
    # basic_io()
    # Your python code here
    # primes = seive_of_eratosthenes(1000001)
    # prime_set = set()
    # for index, prime in enumerate(primes):
    #     # print()
    #     if prime:
    #         prime_set.add(index)
    # print(prime_set)

    test_case = int(input())
    while test_case:
        test_case -= 1

        n = int(input())

        if is_prime(n):
            print(f"{n} is a prime")
        else:
            print(f"{n} is not a prime")

        # if n % 2 == 0 and n!=2:
        #     print(f"{n} is not a prime")
        # elif n in prime_set:
        #     print(f"{n} is a prime")
        # else:
        #     print(f"{n} is not a prime")


main()
