import random
import string

def isPalindrome(s: str) -> bool:
    # s = ''.join(filter(str.isalnum, s))
    # print(s)
    # s = "".join([ c.lower() if c.isalnum() else "" for c in s ])
    s = "".join(c.lower() for c in s if c.isalnum())
    # print(s)
    # s = s.lower()
    # print(s)
    start = 0
    end = len(s)-1
    
    while(start < end):
        if s[start] != s[end]:
            return False
        start += 1
        end -= 1
    return True

for i in range(1,11):
    s = "".join(random.choices(string.ascii_uppercase + 
                                string.ascii_lowercase + 
                                string.ascii_letters +
                                string.punctuation + ' ',
                                 k=random.randint(10,20)))
    print(s)
    print(f" Is {s} is palindrome {isPalindrome(s)}")
    


