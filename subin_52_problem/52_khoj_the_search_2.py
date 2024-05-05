# Reads two integers and prints their sum
def basic_io():
    a, b = map(int, input().split())
    print(a + b)


def main():
    # basic_io()
    # Your python code here
    test_case = int(input())

    while test_case:
        test_case -= 1

        haystack, niddle = map(str, input().split())
        count = 0

        for i in range(0, len(haystack) - len(niddle) + 1, 1):
            # print(i,  haystack[i:i+len(niddle)])
            if haystack[i : i + len(niddle)] == niddle:
                count += 1

        print(count)


main()
