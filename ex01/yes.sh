#!/bin/bash

while true
do
  xxd -p <<< "yes" | tr -d '\n' | xxd -p -r
done