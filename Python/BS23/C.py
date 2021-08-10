test_case = int(input())
seats = [int(x) for x in input().split()]
sequence = input()

seat_map = {}
half = []

for i, v in enumerate(seats):
    seat_map[v]=i+1

seats.sort()
k=j=0

for titan in sequence:
    if titan == '0':
        seat = seats[j]
        half.append(seat)
        print(seat_map[seat], end=' ')
        k += 1
        j += 1
    else:
        # seat = half.pop()        
        seat = half[k-1]      
        print(seat_map[seat], end=' ')
        del(half[k-1])
        k=k-1
print()


