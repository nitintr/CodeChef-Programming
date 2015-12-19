#!/usr/bin/env bash
while true; do
    read t;
    if [ $t -eq 42 ]; then 
        break
    fi
    echo $t
done
