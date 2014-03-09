#!/bin/sh
#rm -f config.cache
autoreconf --force --install
./configure
make