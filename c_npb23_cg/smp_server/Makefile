# Makefile for benchmark evaluation

##
## ターゲットのアーキテクチャ
##

# C言語汎用(OpenMP)
OPENMP_C = 1

##
## mmpのオプション
##

#
# C言語関連
#
PA = 1
IGNORE_SIDE_EFFECT_OF_IMPORT = 1
RB2LOOP = 1
REORDER_BLOCKS = 1
DEBUG_C_BLOCKING = 1

#
# キャッシュ最適化
#  - 有効にするとmmpが32bit環境では利用できない量のメモリを使用するため、無効
#  - CLASS-SならOKだがCLASS-A以上だと厳しい
#  - ちなみにCLASS-Wは正答が得られない
#  - どうしても必要ならコメントを外して、rmc004など64bit環境でmqを作成
#
#PALIGNDECOMP = 1
#CACHE_CORE2_L1 = 1

#
# 配列のシンボリック解析
#  - 有効にするとmmpが32bit環境では利用できない量のメモリを使用するため、無効
#  - CLASS-SならOKだがCLASS-A以上だと厳しい
#  - ちなみにCLASS-Wは正答が得られない
#  - どうしても必要ならコメントを外して、rmc004など64bit環境でmqを作成
#
#SYM = 1
#ARRAY_SYM = 1
#ADJUST_ARRAY_SYM = 1

#
# その他
#
AUTO_HMDF = 1
NO_FINE = 1
PRIVATE_1PE_VAR_SCALAR_ONLY = 1
LOOP_REPORT = 1

# reductionを行わないときとの比較用
#NO_REDUCTION = 1


# eval直下のMakefileを読み込む
include ../../Makefile
