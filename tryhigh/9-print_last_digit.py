#!/usr/bin/python3
def print_last_digit(number):
    rs = abs(number) % 10
    print(f"{rs:d}", end = "")
    return (rs)
