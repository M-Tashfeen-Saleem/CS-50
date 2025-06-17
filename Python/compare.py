from cs50 import get_int

# Prompting the user for two integers x & y
x = get_int("x:")
y = get_int("y:")

if x > y:
    print("x > y")
elif x < y:
    print("x < y")
else:
    print("x = y")
