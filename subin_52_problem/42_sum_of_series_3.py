

def main():
    # basic_io()
    # Your python code here
    
    test_case = int(input())
    
    while test_case: 
        test_case -= 1
        
        n = int(input())
        
        for i in range(n, -1, -1):
            if i == 1:
                print(f"{i+1}", end=" + ")
            elif i == 0:
                print(f"{i+1}")
            else:
                print(f"2^{i}", end=" + ")

main()
