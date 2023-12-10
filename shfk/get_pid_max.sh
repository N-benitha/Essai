#!/bin/bash

# Read and print the value of pid_max from /proc/sys/kernel/pid_max
pid_max = $(cat /proc/sys/kernel/pid_max)
echo "pid_max: $pid_max"
