# Pattern Programs n.006 [Python]
# Github Repository: https://github.com/mxsena/pattern-programs
n = 5
k = 1

for x in range(1, n + 1):
    for y in range(1, n + 1):
        print("{:2d} ".format(k), end=" ")
        k += 1
    print()
