# total = int(input())
# array = [int(x) for x in input().split()]
# array.sort()

# result = []
# for index, value in enumerate(array):
#     print(index, value)
#     print(array)
#     # array.pop(1)

#     temp = [value]
#     array[index]=-1
#     print(array)
    
#     for i, v in enumerate(array[index:], start=index):
#         print(f"I V = {i,v, value, v%value}")
#         if v > value and v%value == 0:
#             temp.append(v)
#             array[i]=0
#             for j, v in enumerate(array[i:], start=i):
#                 print(f"J = {j,v, value, v%value}")
#                 if v > value and v%value == 0:
#                     temp.append(v)
#                     array[j]=0
#                     break
#             break

#     if len(temp) != 3:
#         print(-1)
#         # break
#         pass
#     else:
#         result.append(temp)
#     temp.clear()
# print(result)

    

# n = int(input()) // 3
# s = input()
# c1, c2, c3, c4, c6 = [s.count(_) for _ in '12346']

# if c1 != n or c2 < c4 or c1 != c2 + c3 or c1 != c4 + c6:
#     print(-1)
#     exit()

# print('1 2 4\n' * c4 + '1 3 6\n' * c3 + '1 2 6\n' * (n - c4 - c3))



from collections import Counter
n = int(input())
cnt = Counter(int(x) for x in input().split())
# print(cnt)
if cnt[7] or cnt[5]:
    print(-1)
    exit()
if cnt[1] != cnt[4] + cnt[6] or cnt[3] > cnt[6] or cnt[1] != cnt[2] + cnt[3]:
	print('-1')
	exit()
for i in range(cnt[3]):
	print('1 3 6')
for i in range(cnt[6] - cnt[3]):
	print('1 2 6')
for i in range(cnt[4]):
	print('1 2 4')





for _ in range(int(input())):
    x ,d ,ans= int(input()),9,''
    if x>45:
        print(-1)
        continue
    while x>d:
        ans = str(d)+ans
        x-=d
        d-=1
    print(str(x)+ans)


for _ in range(int(input())):
    n=int(input())
    if n<10:
        print(n)
    elif 10<=n and n<=17:
        print(str(n-9)+str(9))
    elif 18<=n and n<=24:
        print(str(n-17)+str(89))
    elif 25<=n and n<=30:
        print(str(n-24) + str(789))
    elif 31<=n and n<=35:
        print(str(n-30) + str(6789))
    elif 36<=n and n<=39:
        print(str(n-35) + str(56789))
    elif 40<=n and n<=42:
        print(str(n-39) + str(456789))
    elif 43<=n and n<=44:
        print(str(n-42) + str(3456789))
    elif n==45:
        print(123456789)
    else:
        print(-1)
        
