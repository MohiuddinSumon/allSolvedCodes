# Reads two integers and prints their sum
def basic_io():
    a, b = map(int, input().split())
    print(a + b)

def main():
    test_case = int(input())
    for _ in range(test_case):
        s = input()
        c = input().strip()
        count = 0
        for ch in s:
            if ch == c:
                count += 1
        print(f"Occurrence of \'{c}\' in \'{s}\' = {count}") 
        # if count !=0 else print(f"{c} is not present.")
main()
