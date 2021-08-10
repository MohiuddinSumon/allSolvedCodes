alice = [ int(x) for x in input().split()]
bob = [ int(x) for x in input().split()]

result = [0,0]
for i in range(3):
    if alice[i] > bob[i]:
        result[0] += 1
    elif alice[i] < bob[i]:
        result[1] += 1
print(*result)

