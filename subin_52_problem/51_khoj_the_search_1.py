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
        print(haystack.find(niddle))
        
        # print(haystack, niddle)

main()