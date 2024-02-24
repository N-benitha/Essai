#!/usr/bin/python3
import random
import math
number = random.randint(-10000, 10000)

last = abs(number) % 10

if last > 5:
    print(f"Last digit of {number:d} is {last:d} and is greater than 5")

elif last == 0:
    print(f"Last digit of {number:d} is {last:d}")

else:
    print(f"Last digit of {number:d} is {last:d} and is less than 6 and not 0")
