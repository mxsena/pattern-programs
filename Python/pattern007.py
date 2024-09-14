n = 5
p = 1

for x in range(1, n + 1):
    for y in range(1, n + 1):
        print("{:2d} ".format(p), end="")
        p += 2
    print()