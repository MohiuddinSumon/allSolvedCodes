# Reads two integers and prints their sum
def basic_io():
    a, b = map(int, input().split())
    print(a + b)

def main():
    test_case = int(input())
    
    for _ in range(test_case):
        total_run , current_run, remaining_ball = map(int, input().split())
        
        needed_total_run = total_run + 1
        completed_ball = 300 - remaining_ball # Oneday match has 300 ball
        
        current_run_rate = round((current_run/completed_ball) * 6 , 2)
        required_run_rate = round(((needed_total_run - current_run)/remaining_ball) * 6 , 2) if needed_total_run > current_run else 0.0
        
        print(f"{current_run_rate:.2f} {required_run_rate:.2f}")
        # print(current_run_rate, required_run_rate)


main()
