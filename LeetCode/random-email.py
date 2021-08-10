from datetime import datetime

def generate_email():
    current_time = datetime.now()

    email = f"test_user_{current_time.strftime('%Y%m%d_%H%M%S%f')}@company.com"
    print(email)

print("HELLP {}".format('dsf'))



if __name__ == '__main__':
    generate_email()
