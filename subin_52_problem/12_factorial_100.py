def count_zeros(n):
    count = 0
    while n > 0:
        count += n // 5
        n = n // 5
    return count





n = 100
print(count_zeros(n))
