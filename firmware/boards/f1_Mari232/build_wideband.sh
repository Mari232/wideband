#!/bin/bash

# set optimization level to 0 until ADC issue is fixed for GD32
BOARD=f1_Mari232 \
USE_OPT="-O0 -ggdb -fomit-frame-pointer -falign-functions=16 -fsingle-precision-constant" \
	../build_f1_board.sh
