#!/bin/bash

set -euxo pipefail

IFS=$(echo -en "\n\b")

for res in $(grep -r "; inherits" languages/); do
    FILE=$(echo "$res" | cut  -d ":" -f 1 | xargs)
    LANG=$(echo "$res" | cut  -d ":" -f 3 | xargs)
    TARG=$(echo "$res" | cut  -d ":" -f2- | xargs)
    
    NAME=$(basename "$FILE")

    sed -i "/$TARG/{r languages/$LANG/queries/$NAME
d}" $FILE
done