import cs50


def main():
    n = size()
    x = n - 1
    for i in range(n):
        build(x, i+1)
        x = x - 1


def size():
    while (True):
        x = cs50.get_int("Size:")
        if (x > 0 and x < 9):
            break
        else:
            continue
    return x


def build(spaces, bricks):
    for _ in range(spaces):
        print(" ", end="")
    for _ in range(bricks):
        print("#", end="")
    print("")


main()
