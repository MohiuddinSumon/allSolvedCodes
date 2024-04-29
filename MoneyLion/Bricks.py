def min_blows_to_break_bricks(bricks, max_big_hammer_uses):
    min_blows = 0
    big_hammer_uses = 0
    big_hammer_indices = []
    small_hammer_indices = []

    sb = sorted(bricks)

    sb = sb[0:len(sb)-max_big_hammer_uses]
    for brick in sb:
        min_blows += brick
    min_blows += max_big_hammer_uses

    for brick in bricks:
        if brick in sb:
            small_hammer_indices.append(bricks.index(brick)+1)
        else :
            big_hammer_indices.append(bricks.index(brick)+1)
    return [min_blows, big_hammer_indices, small_hammer_indices]


# Example usage:
bricks = [3, 1, 4, 2, 5]
max_big_hammer_uses = 2
result = min_blows_to_break_bricks(bricks, max_big_hammer_uses)
print("Minimum blows:", result[0])
print("Indices of bricks smashed by big hammer:", result[1])
print("Indices of bricks smashed by small hammer:", result[2])
