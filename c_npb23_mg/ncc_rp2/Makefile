# Makefile for benchmark evaluation

##
## ターゲットのアーキテクチャ
##

# RP2 NCC
CACHE_RP2_C = 1

# キャッシュのサイズ
CACHE_RP2 = 1
#CACHE_COREI7_L3 = 1
#CACHE_LINE_SIZE = 64
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
#LAD_CAM = 1
#LAD_SEQ_LOOP = 1
#LAD_CALL_LOOP = 1
#LAD_SM = 1
#LAD_DIST_REM = 1
#NO_DIST_AFTER_DIV = 1
##LAD_SELECT_TLG_BY_CACHE = 1
#LAD_IGNORE_INPUT_DEP = 1
####LAD_SM_STEP = 125
#LAD_SM_WEIGHT = 100

#
# 配列のシンボリック解析
#  - 有効にするとmmpが32bit環境では利用できない量のメモリを使用するため、無効
#  - CLASS-SならOKだがCLASS-A以上だと厳しい
#  - ちなみにCLASS-Wは正答が得られない
#  - どうしても必要ならコメントを外して、rmc004など64bit環境でmqを作成
#
SYM = 1
ARRAY_SYM = 1
ADJUST_ARRAY_SYM = 1
SEQ_FACTOR = 1
ARRAY_IN_OUT = 1
OPT_MP_ADD= -alias-analysis-of-pointer-argument
#
# ノンコヒーレントキャッシュ
#
RESOLVE_WRITE_SHARING = 1
ARRAY_EXPANSION_THREASHOLD = 352

#
# その他
#
AUTO_HMDF = 1
NO_FINE = 1
PRIVATE_1PE_VAR_SCALAR_ONLY = 1
LOOP_REPORT = 1

# reductionを行わないときとの比較用
#NO_REDUCTION = 1

##
## バックエンドのオプション
##
EXECUTIONS = 1
SHC_ALIGNDATA = 1


# eval直下のMakefileを読み込む
include ../../Makefile
