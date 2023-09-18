#!/bin/bash
wget -P /tmp https://github.com/Collins331/alx-low_level_programming/raw/main/0x18-dynamic_libraries/libwinner.so
export LD_PRELOAD=/tmp/libwinner.so
