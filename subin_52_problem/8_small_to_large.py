# Reads two integers and prints their sum
def basic_io():
    a, b = map(int, input().split())
    print(a + b)

def main():
    # basic_io()
    # Your python code here
    test_case = int(input())
    for i in range(1, test_case+1):
        a, b , c = map(int, input().split())
        
        if a < b and a < c:
            if b < c:
                print(f"Case {i}: {a} {b} {c}")
            else:
                print(f"Case {i}: {a} {c} {b}")
        elif b < a and b < c:
            if a < c:
                print(f"Case {i}: {b} {a} {c}")
            else:
                print(f"Case {i}: {b} {c} {a}")
        elif c < a and c < b:
            if a < b:
                print(f"Case {i}: {c} {a} {b}")
            else:
                print(f"Case {i}: {c} {b} {a}")
        
                
        # l = sorted(list(map(int, input().split())))
        # l.sort()
        # print(f"Case {i}: {l[0]} {l[1]} {l[2]}")
main()
