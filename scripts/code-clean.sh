#!/bin/sh
<<<<<<< HEAD
=======
# $Id: code-clean.sh,v 1.8 2005/08/11 13:02:08 dries Exp $
>>>>>>> 7df91a28a0b98a4e2c4a737bc64d30156be224d5

find . -name "*~" -type f | xargs rm -f
find . -name ".#*" -type f | xargs rm -f
find . -name "*.rej" -type f | xargs rm -f
find . -name "*.orig" -type f | xargs rm -f
find . -name "DEADJOE" -type f | xargs rm -f
find . -type f | grep -v ".psp" | grep -v ".gif" | grep -v ".jpg" | grep -v ".png" | grep -v ".tgz" | grep -v ".ico" | grep -v "druplicon" | xargs perl -wi -pe 's/\s+$/\n/'
find . -type f | grep -v ".psp" | grep -v ".gif" | grep -v ".jpg" | grep -v ".png" | grep -v ".tgz" | grep -v ".ico" | grep -v "druplicon" | xargs perl -wi -pe 's/\t/  /g'
