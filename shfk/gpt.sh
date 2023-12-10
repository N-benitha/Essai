#!/bin/bash

while true; do
    # Display the shell prompt
    echo -n "myshell> "

    # Read user input
    read -r command args

    # Handle different commands
    case $command in
        "exit")
            echo "Exiting shell. Goodbye!"
            exit 0
            ;;
        "echo")
            echo "$args"
            ;;
        "list")
            ls "$args"
            ;;
        "date")
            date
            ;;
        *)
            echo "Unknown command: $command"
            ;;
    esac
done

