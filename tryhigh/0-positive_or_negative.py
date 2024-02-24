#!/usr/bin/python3
import random as a
number = a.randint(-4,5)
if number > 0:
    print(f"{number} is positive")
elif number == 0:
    print(f"{number} is zero")
else:
    print(f"{number} is negative")
