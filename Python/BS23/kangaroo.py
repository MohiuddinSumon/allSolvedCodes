x1, v1, x2, v2 = tuple([int(x) for x in input().split()])

print(x1, x2, v1, v2)
print(f"{(x2-x1), (v1-v2) }")
print(f"{(x2-x1)%(v1-v2) == 0}")

a, b, c, d = map(int, input().split(' '))
if a-c==0:
    print("YES")
    quit()
if d-b==0:
    print("NO")
    quit()
if ((a-c)%(d-b)==0 and (a-c)//(d-b)>=0):
    print("YES")
    quit()
print("NO")



x1, v1, x2, v2 = map(int, input().split())

if x1 > x2:
    if v2 > v1 and (x1-x2) % (v2-v1) == 0:
        print("YES")
    else:
        print("NO")
elif x1 < x2:
    if v1 > v2 and (x2-x1) % (v1-v2) == 0:
        print("YES")
    else:
        print("NO")
else:
    print("YES")




a, b, c, d = map(int, input().split(' '))
if a-c==0:
    print("YES")
    quit()
if d-b==0:
    print("NO")
    quit()
if ((a-c)%(d-b)==0 and (a-c)//(d-b)>=0):
    print("YES")
    quit()
print("NO")