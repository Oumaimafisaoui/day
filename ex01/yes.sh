#!/bin/sh

while true
do
 
  read -u 0 -t 1 input <<< "yes"
  
  if [ $? -eq 0 ]
  then
    echo "yes"
    continue
  fi

  sleep 0.1
done