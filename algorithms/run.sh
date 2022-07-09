# https://www.learnshell.org/en/Passing_Arguments_to_the_Script
#!/bin/bash

function File {

    if [ $1 == "-r" ]; then
        echo "Usage: ./run.sh [OPTION] [FILE]"
    fi

    # if [ -f $1 == "-f" ]; then
    #     echo "File: $1"
    # fi


    # then
    #     echo "File $1 exists."
    # else
    #     echo "File $1 does not exist."
    # fi
    # echo "executing : $1"

    
    # # think you are inside the file
    # # Change Here
    # echo "I am inside the file"
}

# Do not change anything
if [ ! $# -lt 1 ]; then
    File $*
    exit 0
fi

# change here

