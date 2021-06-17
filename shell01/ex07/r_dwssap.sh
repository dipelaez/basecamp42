#!/bin/bash
cat /etc/passwd | grep -v "^#" | sed -n 'n;p' | sed 's/:.*//' | rev | sort -r | sed -n "1,12 p" | sed -z 's/\n/, /g' | sed 's/, $/./' 
#cat /etc/passwd | grep -v $USER | cut -d ':' -f 1 | rev | sed -n 'n;p' | sort -r | sed -n '6,14p' | sed 's/ /, /' | awk 'NF{print $0 '\n'}' | tr '\n' ',' | sed 's/,/, /g' | sed 's/ ,//' | sed -e 's/$/\./'