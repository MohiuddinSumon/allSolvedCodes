# Reads two integers and prints their sum
def basic_io():
    a, b = map(int, input().split())
    print(a + b)


def find_divisible_numbers(A, B, C):
    # প্রথমত, A এর সাথে C এর মধ্যে যেগুলো বিভাজ্য, তার সংখ্যা বের করব।
    first_divisible = C * ((A + C - 1) // C)

    # B এর মধ্যে সব সংখ্যা পর্যন্ত চেক করব, এবং বিভাজ্য সংখ্যা গুলো রিটার্ন করব।
    divisible_numbers = []
    while first_divisible <= B:
        divisible_numbers.append(first_divisible)
        first_divisible += C

    return divisible_numbers


def main():
    # basic_io()
    # Your python code here
    test_case = int(input())

    while test_case:
        test_case -= 1

        a, b, c = map(int, input().split())

        # বিভাজ্য সংখ্যা গুলো বের করা
        result = find_divisible_numbers(a, b, c)

        # প্রিন্ট করা
        for num in result:
            print(num)
        print()  # প্রতিটি টেস্টকেস এর পরে একটি নতুন লাইন

        # x=1

        # for i in range(a, b+1, x):
        #     if i%c == 0:
        #         x=c
        #         print(i)
        # print()


main()
