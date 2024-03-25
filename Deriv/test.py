
my_array = [1,2,3]

sorted(my_array)
my_array.sort()

def reverse_array(my_array):
    left, right = 0, len(my_array)-1
    while left < right:
        my_array[left], my_array[right] = my_array[right], my_array[left]
        left, right = left+1, right-1
    return my_array

print(reverse_array(my_array))
print(my_array)

# x = 4

# while x :
#     x -= 1 
#     y = get_plot(x)
#     draw_point(x, y)






