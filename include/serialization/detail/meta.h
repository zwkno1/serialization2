﻿#include <array>

#define SERIALIZATION_EXPAND_1(first, ...) #first
#define SERIALIZATION_EXPAND_2(first, ...) #first , SERIALIZATION_EXPAND_1(__VA_ARGS__)
#define SERIALIZATION_EXPAND_3(first, ...) #first , SERIALIZATION_EXPAND_2(__VA_ARGS__)
#define SERIALIZATION_EXPAND_4(first, ...) #first , SERIALIZATION_EXPAND_3(__VA_ARGS__)
#define SERIALIZATION_EXPAND_5(first, ...) #first , SERIALIZATION_EXPAND_4(__VA_ARGS__)
#define SERIALIZATION_EXPAND_6(first, ...) #first , SERIALIZATION_EXPAND_5(__VA_ARGS__)
#define SERIALIZATION_EXPAND_7(first, ...) #first , SERIALIZATION_EXPAND_6(__VA_ARGS__)
#define SERIALIZATION_EXPAND_8(first, ...) #first , SERIALIZATION_EXPAND_7(__VA_ARGS__)
#define SERIALIZATION_EXPAND_9(first, ...) #first , SERIALIZATION_EXPAND_8(__VA_ARGS__)
#define SERIALIZATION_EXPAND_10(first, ...) #first , SERIALIZATION_EXPAND_9(__VA_ARGS__)
#define SERIALIZATION_EXPAND_11(first, ...) #first , SERIALIZATION_EXPAND_10(__VA_ARGS__)
#define SERIALIZATION_EXPAND_12(first, ...) #first , SERIALIZATION_EXPAND_11(__VA_ARGS__)
#define SERIALIZATION_EXPAND_13(first, ...) #first , SERIALIZATION_EXPAND_12(__VA_ARGS__)
#define SERIALIZATION_EXPAND_14(first, ...) #first , SERIALIZATION_EXPAND_13(__VA_ARGS__)
#define SERIALIZATION_EXPAND_15(first, ...) #first , SERIALIZATION_EXPAND_14(__VA_ARGS__)
#define SERIALIZATION_EXPAND_16(first, ...) #first , SERIALIZATION_EXPAND_15(__VA_ARGS__)
#define SERIALIZATION_EXPAND_17(first, ...) #first , SERIALIZATION_EXPAND_16(__VA_ARGS__)
#define SERIALIZATION_EXPAND_18(first, ...) #first , SERIALIZATION_EXPAND_17(__VA_ARGS__)
#define SERIALIZATION_EXPAND_19(first, ...) #first , SERIALIZATION_EXPAND_18(__VA_ARGS__)
#define SERIALIZATION_EXPAND_20(first, ...) #first , SERIALIZATION_EXPAND_19(__VA_ARGS__)
#define SERIALIZATION_EXPAND_21(first, ...) #first , SERIALIZATION_EXPAND_20(__VA_ARGS__)
#define SERIALIZATION_EXPAND_22(first, ...) #first , SERIALIZATION_EXPAND_21(__VA_ARGS__)
#define SERIALIZATION_EXPAND_23(first, ...) #first , SERIALIZATION_EXPAND_22(__VA_ARGS__)
#define SERIALIZATION_EXPAND_24(first, ...) #first , SERIALIZATION_EXPAND_23(__VA_ARGS__)
#define SERIALIZATION_EXPAND_25(first, ...) #first , SERIALIZATION_EXPAND_24(__VA_ARGS__)
#define SERIALIZATION_EXPAND_26(first, ...) #first , SERIALIZATION_EXPAND_25(__VA_ARGS__)
#define SERIALIZATION_EXPAND_27(first, ...) #first , SERIALIZATION_EXPAND_26(__VA_ARGS__)
#define SERIALIZATION_EXPAND_28(first, ...) #first , SERIALIZATION_EXPAND_27(__VA_ARGS__)
#define SERIALIZATION_EXPAND_29(first, ...) #first , SERIALIZATION_EXPAND_28(__VA_ARGS__)
#define SERIALIZATION_EXPAND_30(first, ...) #first , SERIALIZATION_EXPAND_29(__VA_ARGS__)
#define SERIALIZATION_EXPAND_31(first, ...) #first , SERIALIZATION_EXPAND_30(__VA_ARGS__)
#define SERIALIZATION_EXPAND_32(first, ...) #first , SERIALIZATION_EXPAND_31(__VA_ARGS__)
#define SERIALIZATION_EXPAND_33(first, ...) #first , SERIALIZATION_EXPAND_32(__VA_ARGS__)
#define SERIALIZATION_EXPAND_34(first, ...) #first , SERIALIZATION_EXPAND_33(__VA_ARGS__)
#define SERIALIZATION_EXPAND_35(first, ...) #first , SERIALIZATION_EXPAND_34(__VA_ARGS__)
#define SERIALIZATION_EXPAND_36(first, ...) #first , SERIALIZATION_EXPAND_35(__VA_ARGS__)
#define SERIALIZATION_EXPAND_37(first, ...) #first , SERIALIZATION_EXPAND_36(__VA_ARGS__)
#define SERIALIZATION_EXPAND_38(first, ...) #first , SERIALIZATION_EXPAND_37(__VA_ARGS__)
#define SERIALIZATION_EXPAND_39(first, ...) #first , SERIALIZATION_EXPAND_38(__VA_ARGS__)
#define SERIALIZATION_EXPAND_40(first, ...) #first , SERIALIZATION_EXPAND_39(__VA_ARGS__)
#define SERIALIZATION_EXPAND_41(first, ...) #first , SERIALIZATION_EXPAND_40(__VA_ARGS__)
#define SERIALIZATION_EXPAND_42(first, ...) #first , SERIALIZATION_EXPAND_41(__VA_ARGS__)
#define SERIALIZATION_EXPAND_43(first, ...) #first , SERIALIZATION_EXPAND_42(__VA_ARGS__)
#define SERIALIZATION_EXPAND_44(first, ...) #first , SERIALIZATION_EXPAND_43(__VA_ARGS__)
#define SERIALIZATION_EXPAND_45(first, ...) #first , SERIALIZATION_EXPAND_44(__VA_ARGS__)
#define SERIALIZATION_EXPAND_46(first, ...) #first , SERIALIZATION_EXPAND_45(__VA_ARGS__)
#define SERIALIZATION_EXPAND_47(first, ...) #first , SERIALIZATION_EXPAND_46(__VA_ARGS__)
#define SERIALIZATION_EXPAND_48(first, ...) #first , SERIALIZATION_EXPAND_47(__VA_ARGS__)
#define SERIALIZATION_EXPAND_49(first, ...) #first , SERIALIZATION_EXPAND_48(__VA_ARGS__)
#define SERIALIZATION_EXPAND_50(first, ...) #first , SERIALIZATION_EXPAND_49(__VA_ARGS__)
#define SERIALIZATION_EXPAND_51(first, ...) #first , SERIALIZATION_EXPAND_50(__VA_ARGS__)
#define SERIALIZATION_EXPAND_52(first, ...) #first , SERIALIZATION_EXPAND_51(__VA_ARGS__)
#define SERIALIZATION_EXPAND_53(first, ...) #first , SERIALIZATION_EXPAND_52(__VA_ARGS__)
#define SERIALIZATION_EXPAND_54(first, ...) #first , SERIALIZATION_EXPAND_53(__VA_ARGS__)
#define SERIALIZATION_EXPAND_55(first, ...) #first , SERIALIZATION_EXPAND_54(__VA_ARGS__)
#define SERIALIZATION_EXPAND_56(first, ...) #first , SERIALIZATION_EXPAND_55(__VA_ARGS__)
#define SERIALIZATION_EXPAND_57(first, ...) #first , SERIALIZATION_EXPAND_56(__VA_ARGS__)
#define SERIALIZATION_EXPAND_58(first, ...) #first , SERIALIZATION_EXPAND_57(__VA_ARGS__)
#define SERIALIZATION_EXPAND_59(first, ...) #first , SERIALIZATION_EXPAND_58(__VA_ARGS__)
#define SERIALIZATION_EXPAND_60(first, ...) #first , SERIALIZATION_EXPAND_59(__VA_ARGS__)
#define SERIALIZATION_EXPAND_61(first, ...) #first , SERIALIZATION_EXPAND_60(__VA_ARGS__)
#define SERIALIZATION_EXPAND_62(first, ...) #first , SERIALIZATION_EXPAND_61(__VA_ARGS__)
#define SERIALIZATION_EXPAND_63(first, ...) #first , SERIALIZATION_EXPAND_62(__VA_ARGS__)
#define SERIALIZATION_EXPAND_64(first, ...) #first , SERIALIZATION_EXPAND_63(__VA_ARGS__)
#define SERIALIZATION_EXPAND_65(first, ...) #first , SERIALIZATION_EXPAND_64(__VA_ARGS__)
#define SERIALIZATION_EXPAND_66(first, ...) #first , SERIALIZATION_EXPAND_65(__VA_ARGS__)
#define SERIALIZATION_EXPAND_67(first, ...) #first , SERIALIZATION_EXPAND_66(__VA_ARGS__)
#define SERIALIZATION_EXPAND_68(first, ...) #first , SERIALIZATION_EXPAND_67(__VA_ARGS__)
#define SERIALIZATION_EXPAND_69(first, ...) #first , SERIALIZATION_EXPAND_68(__VA_ARGS__)
#define SERIALIZATION_EXPAND_70(first, ...) #first , SERIALIZATION_EXPAND_69(__VA_ARGS__)
#define SERIALIZATION_EXPAND_71(first, ...) #first , SERIALIZATION_EXPAND_70(__VA_ARGS__)
#define SERIALIZATION_EXPAND_72(first, ...) #first , SERIALIZATION_EXPAND_71(__VA_ARGS__)
#define SERIALIZATION_EXPAND_73(first, ...) #first , SERIALIZATION_EXPAND_72(__VA_ARGS__)
#define SERIALIZATION_EXPAND_74(first, ...) #first , SERIALIZATION_EXPAND_73(__VA_ARGS__)
#define SERIALIZATION_EXPAND_75(first, ...) #first , SERIALIZATION_EXPAND_74(__VA_ARGS__)
#define SERIALIZATION_EXPAND_76(first, ...) #first , SERIALIZATION_EXPAND_75(__VA_ARGS__)
#define SERIALIZATION_EXPAND_77(first, ...) #first , SERIALIZATION_EXPAND_76(__VA_ARGS__)
#define SERIALIZATION_EXPAND_78(first, ...) #first , SERIALIZATION_EXPAND_77(__VA_ARGS__)
#define SERIALIZATION_EXPAND_79(first, ...) #first , SERIALIZATION_EXPAND_78(__VA_ARGS__)
#define SERIALIZATION_EXPAND_80(first, ...) #first , SERIALIZATION_EXPAND_79(__VA_ARGS__)
#define SERIALIZATION_EXPAND_81(first, ...) #first , SERIALIZATION_EXPAND_80(__VA_ARGS__)
#define SERIALIZATION_EXPAND_82(first, ...) #first , SERIALIZATION_EXPAND_81(__VA_ARGS__)
#define SERIALIZATION_EXPAND_83(first, ...) #first , SERIALIZATION_EXPAND_82(__VA_ARGS__)
#define SERIALIZATION_EXPAND_84(first, ...) #first , SERIALIZATION_EXPAND_83(__VA_ARGS__)
#define SERIALIZATION_EXPAND_85(first, ...) #first , SERIALIZATION_EXPAND_84(__VA_ARGS__)
#define SERIALIZATION_EXPAND_86(first, ...) #first , SERIALIZATION_EXPAND_85(__VA_ARGS__)
#define SERIALIZATION_EXPAND_87(first, ...) #first , SERIALIZATION_EXPAND_86(__VA_ARGS__)
#define SERIALIZATION_EXPAND_88(first, ...) #first , SERIALIZATION_EXPAND_87(__VA_ARGS__)
#define SERIALIZATION_EXPAND_89(first, ...) #first , SERIALIZATION_EXPAND_88(__VA_ARGS__)
#define SERIALIZATION_EXPAND_90(first, ...) #first , SERIALIZATION_EXPAND_89(__VA_ARGS__)
#define SERIALIZATION_EXPAND_91(first, ...) #first , SERIALIZATION_EXPAND_90(__VA_ARGS__)
#define SERIALIZATION_EXPAND_92(first, ...) #first , SERIALIZATION_EXPAND_91(__VA_ARGS__)
#define SERIALIZATION_EXPAND_93(first, ...) #first , SERIALIZATION_EXPAND_92(__VA_ARGS__)
#define SERIALIZATION_EXPAND_94(first, ...) #first , SERIALIZATION_EXPAND_93(__VA_ARGS__)
#define SERIALIZATION_EXPAND_95(first, ...) #first , SERIALIZATION_EXPAND_94(__VA_ARGS__)
#define SERIALIZATION_EXPAND_96(first, ...) #first , SERIALIZATION_EXPAND_95(__VA_ARGS__)
#define SERIALIZATION_EXPAND_97(first, ...) #first , SERIALIZATION_EXPAND_96(__VA_ARGS__)
#define SERIALIZATION_EXPAND_98(first, ...) #first , SERIALIZATION_EXPAND_97(__VA_ARGS__)
#define SERIALIZATION_EXPAND_99(first, ...) #first , SERIALIZATION_EXPAND_98(__VA_ARGS__)


#define SERIALIZATION_NARG_IMPL( \
    _1,_2,_3,_4,_5,_6,_7,_8,_9,_10, \
    _11,_12,_13,_14,_15,_16,_17,_18,_19,_20, \
    _21,_22,_23,_24,_25,_26,_27,_28,_29,_30, \
    _31,_32,_33,_34,_35,_36,_37,_38,_39,_40, \
    _41,_42,_43,_44,_45,_46,_47,_48,_49,_50, \
    _51,_52,_53,_54,_55,_56,_57,_58,_59,_60, \
    _61,_62,_63,_64,_65,_66,_67,_68,_69,_70, \
    _71,_72,_73,_74,_75,_76,_77,_78,_79,_80, \
    _81,_82,_83,_84,_85,_86,_87,_88,_89,_90, \
    _91,_92,_93,_94,_95,_96,_97,_98,_99,N,...) N

// reutrn size of(...)
#define SERIALIZATION_NARG(...) \
    SERIALIZATION_NARG_IMPL(__VA_ARGS__, \
    99,98,97,96,95,94,93,92,91,90, \
    89,88,87,86,85,84,83,82,81,80, \
    79,78,77,76,75,74,73,72,71,70, \
    69,68,67,66,65,64,63,62,61,60, \
    59,58,57,56,55,54,53,52,51,50, \
    49,48,47,46,45,44,43,42,41,40, \
    39,38,37,36,35,34,33,32,31,30, \
    29,28,27,26,25,24,23,22,21,20, \
    19,18,17,16,15,14,13,12,11,10, \
     9, 8, 7, 6, 5, 4, 3, 2, 1, 0)


#define SERIALIZATION_CONCAT(A, B) A##_##B

#define SERIALIZATION_MAKE_META_IMPL(N, ...) \
    inline static const std::array<const char*, N> & serialization_meta() \
    { \
	    static std::array<const char*, N> meta = { SERIALIZATION_CONCAT(SERIALIZATION_EXPAND, N)(__VA_ARGS__) }; \
        return meta; \
	} \

#define SERIALIZATION_MAKE_META(...) \
    SERIALIZATION_MAKE_META_IMPL(SERIALIZATION_NARG(__VA_ARGS__), __VA_ARGS__)