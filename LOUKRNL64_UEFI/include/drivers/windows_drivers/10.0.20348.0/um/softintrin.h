/*++

Copyright (c) 2019 Microsoft Corporation

Module Name:

    softintrin.h

Abstract:

    Portable wrappers for common x64 intrinsics and related types.

Author:

    Darek Mihocka (darekm) 29-Jun-2019

Environment:

    Pure library routines. Any environment.

--*/

#pragma once

#if defined(_M_ARM64EC) || (defined(_M_AMD64) && defined(USE_SOFT_INTRINSICS))

#include <widemath.h>                // 64-bit and 128-bit math helper functions

//
//  Re-map intrinsic names to inline functions that use WideMath.
//

static __forceinline uint64_t __U64(const __m64 V) { uint64_t *T = (uint64_t *)&V; return *T; }

static __forceinline __m64 __MI64(const uint64_t U) { __m64 *T = (__m64 *)&U; return *T; }

static __forceinline uint128_t __S128(const __m128  V) { uint128_t *T = (uint128_t *)&V; return *T; }
static __forceinline uint128_t __U128(const __m128i V) { uint128_t *T = (uint128_t *)&V; return *T; }
static __forceinline uint128_t __D128(const __m128d V) { uint128_t *T = (uint128_t *)&V; return *T; }

static __forceinline uint128_t __IMM8_128(const uint64_t C) { uint128_t T; T.Q[0] = C & 0xff; T.Q[1] = 0; return T; }

static __forceinline __m128  __MM128(const uint128_t U) { __m128  *T = (__m128  *)&U; return *T; }
static __forceinline __m128i __MI128(const uint128_t U) { __m128i *T = (__m128i *)&U; return *T; }
static __forceinline __m128d __MD128(const uint128_t U) { __m128d *T = (__m128d *)&U; return *T; }

static __forceinline uint128_t __MAKEU16_U128(const uint16_t A, const uint16_t B, const uint16_t C, const uint16_t D, const uint16_t E, const uint16_t F, const uint16_t G, const uint16_t H)
{ uint128_t T; T.W[0] = A; T.W[1] = B; T.W[2] = C; T.W[3] = D; T.W[4] = E; T.W[5] = F; T.W[6] = G; T.W[7] = H; return T; }
static __forceinline uint128_t __MAKEU32_U128(const uint32_t A, const uint32_t B, const uint32_t C, const uint32_t D)
{ uint128_t T; T.D[0] = A; T.D[1] = B; T.D[2] = C; T.D[3] = D; return T; }
static __forceinline uint128_t __MAKEU64_U128(const uint64_t A, const uint64_t B)
{ uint128_t T; T.Q[0] = A; T.Q[1] = B; return T; }
static __forceinline uint128_t __MAKEF32_U128(const float A, const float B, const float C, const float D)
{ uint128_t T; T.D[0] = *(uint32_t *)&A; T.D[1] = *(uint32_t *)&B; T.D[2] = *(uint32_t *)&C; T.D[3] = *(uint32_t *)&D ; return T; }

static __forceinline uint128_t __INSERT16_U128(const uint128_t A, const uint16_t B, const int C) { uint128_t T = A; T.W[C & 0b111] = B; return T; }

// Misc. integer intrinsics

#if defined(_M_ARM64EC)

#define __rdtsc                         __noop

#endif

#if !defined(_M_ARM64EC)

#if !defined(__popcnt64)
#define __popcnt64(a)                   POPCNT64((uint64_t)a)
#endif

#if !defined(__popcnt)
#define __popcnt(a)                     POPCNT64((uint32_t)a)
#define __popcnt16(a)                   POPCNT64((uint16_t)a)
#endif

#endif

#define _mm_popcnt_u32(a)               POPCNT64((uint32_t)a)
#define _mm_popcnt_u64(a)               POPCNT64((uint64_t)a)

// ADDSS ADDSD ADDPS ADDPD

#define _mm_add_pd(a,b)                 __MD128(ADDPD128(__D128(a),__D128(b)))
#define _mm_add_sd(a,b)                 __MD128(ADDSD128(__D128(a),__D128(b)))
#define _mm_add_ps(a,b)                 __MM128(ADDPS128(__S128(a),__S128(b)))
#define _mm_add_ss(a,b)                 __MM128(ADDSS128(__S128(a),__S128(b)))

// ADDSUBPD ADDSUBPS
#define _mm_addsub_pd(a,b)              __MD128(ADDSUBPD128(__D128(a),__D128(b)))
#define _mm_addsub_ps(a,b)              __MM128(ADDSUBPS128(__S128(a),__S128(b)))

// BLENDVPS
#define _mm_blendv_ps(a,b,c)            __MM128(BLENDVPS128(__S128(a),__S128(b),__S128(c)))

// CVTDQ2PS
#define _mm_cvtepi32_ps(a)              __MM128(CVTDQ2PS128(__U128(a)))

// CVTPS2DQ
#define _mm_cvtps_epi32(a)              __MI128(CVTPS2DQ128(__S128(a)))

// HADDPD HADDPS
#define _mm_hadd_pd(a,b)                __MD128(HADDPD128(__D128(a),__D128(b)))
#define _mm_hadd_ps(a,b)                __MM128(HADDPS128(__S128(a),__S128(b)))

// HSUBPD HSUBPS
#define _mm_hsub_pd(a,b)                __MD128(HSUBPD128(__D128(a),__D128(b)))
#define _mm_hsub_ps(a,b)                __MM128(HSUBPS128(__S128(a),__S128(b)))

// MOVD
#define _mm_cvtsi128_si32(a)            (__U128(a).D[0])

// MOVDDUP MOVSLDUP
#define _mm_movedup_pd(a)               __MD128(MOVDDUP128(__D128(a)))
#define _mm_moveldup_ps(a)              __MM128(MOVSLDUP128(__S128(a)))

// MOVDQA
#define _mm_load_si128(a)               (*(a))
#define _mm_store_si128(a,b)            (*(a) = (b))

// MOVDQU
#define _mm_loadu_si128(a)              (*(a))
#define _mm_storeu_si128(a,b)           (*(a) = (b))

#define _mm_loadu_ps(a)                 (*((__m128 const*)(a)))
#define _mm_storeu_ps(a,b)              (*((__m128*)(a)) = (b))

// MOVQ
#define _mm_storel_epi64(a,b)           (*(uint64_t *)(a) = __U128(b).Q[0])
#define _mm_loadl_epi64(a)              __MI128(__MAKEU64_U128(*(uint64_t *)(a), 0))

// MOVSHDUP

#define _mm_movehdup_pd(a)              __MM128(MOVSHDUP128(__S128(a)))

// MULPS
#define _mm_mul_ps(a,b)                 __MM128(__MAKEU32_U128(MULSS64(__S128(a).D[0],__S128(b).D[0]),MULSS64(__S128(a).D[1],__S128(b).D[1]),MULSS64(__S128(a).D[2],__S128(b).D[2]),MULSS64(__S128(a).D[3],__S128(b).D[3])))

// PACKSSWB
#define _mm_packs_epi16(a,b)            __MI128(PACKSSWB128(__U128(a),__U128(b),_WIDEMASK_WORD,_BITS_PER_WORD))

// PACKSSDW
#define _mm_packs_epi32(a,b)            __MI128(PACKSSDW128(__U128(a),__U128(b),_WIDEMASK_LONG,_BITS_PER_LONG))

// PACKUSWB
#define _mm_packus_epi16(a,b)           __MI128(PACKUSWB128(__U128(a),__U128(b),_WIDEMASK_WORD,_BITS_PER_WORD))

// PAND

#define _mm_and_si128(a,b)              __MI128(PAND128(__U128(a),__U128(b)))
#define _mm_and_ps(a,b)                 __MM128(PAND128(__S128(a),__S128(b)))
#define _mm_and_pd(a,b)                 __MD128(PAND128(__D128(a),__D128(b)))

// PANDN

#define _mm_andnot_si128(a,b)           __MI128(PANDN128(__U128(a),__U128(b)))
#define _mm_andnot_ps(a,b)              __MM128(PANDN128(__S128(a),__S128(b)))
#define _mm_andnot_pd(a,b)              __MD128(PANDN128(__D128(a),__D128(b)))

// PADD[B/W/D/Q]

#define _m_paddb(a,b)                   __MI64(PADD64(__U64(a),__U64(b),_WIDEMASK_BYTE))
#define _m_paddw(a,b)                   __MI64(PADD64(__U64(a),__U64(b),_WIDEMASK_WORD))
#define _m_paddd(a,b)                   __MI64(PADD64(__U64(a),__U64(b),_WIDEMASK_LONG))
#define _m_paddq(a,b)                   __MI64(PADD64(__U64(a),__U64(b),_WIDEMASK_QUAD))

#define _mm_add_epi8(a,b)               __MI128(PADD128(__U128(a),__U128(b),_WIDEMASK_BYTE))
#define _mm_add_epi16(a,b)              __MI128(PADD128(__U128(a),__U128(b),_WIDEMASK_WORD))
#define _mm_add_epi32(a,b)              __MI128(PADD128(__U128(a),__U128(b),_WIDEMASK_LONG))
#define _mm_add_epi64(a,b)              __MI128(PADD128(__U128(a),__U128(b),_WIDEMASK_QUAD))

// PADDS[B/W/D/Q]

#define _mm_adds_epi8(a,b)              __MI128(PADDSI128(__U128(a),__U128(b),_WIDEMASK_BYTE,_BITS_PER_BYTE))
#define _mm_adds_epi16(a,b)             __MI128(PADDSI128(__U128(a),__U128(b),_WIDEMASK_WORD,_BITS_PER_WORD))
#define _mm_adds_epi32(a,b)             __MI128(PADDSI128(__U128(a),__U128(b),_WIDEMASK_LONG,_BITS_PER_LONG))
#define _mm_adds_epi64(a,b)             __MI128(PADDSI128(__U128(a),__U128(b),_WIDEMASK_QUAD,_BITS_PER_QUAD))

// PADDUS[B/W/D/Q]

#define _mm_adds_epu8(a,b)              __MI128(PADDSU128(__U128(a),__U128(b),_WIDEMASK_BYTE,_BITS_PER_BYTE))
#define _mm_adds_epu16(a,b)             __MI128(PADDSU128(__U128(a),__U128(b),_WIDEMASK_WORD,_BITS_PER_WORD))
#define _mm_adds_epu32(a,b)             __MI128(PADDSU128(__U128(a),__U128(b),_WIDEMASK_LONG,_BITS_PER_LONG))
#define _mm_adds_epu64(a,b)             __MI128(PADDSU128(__U128(a),__U128(b),_WIDEMASK_QUAD,_BITS_PER_QUAD))

// PAVG[B/W]

#define _mm_avg_epu8(a,b)               __MI128(PAVG128(__U128(a),__U128(b),_WIDEMASK_BYTE))
#define _mm_avg_epu16(a,b)              __MI128(PAVG128(__U128(a),__U128(b),_WIDEMASK_WORD))

// PCMPEQ[B/W/D]

#define _mm_cmpeq_epi8(a,b)             __MI128(PCMPEQ128(__U128(a),__U128(b),_WIDEMASK_BYTE,_BITS_PER_BYTE))
#define _mm_cmpeq_epi16(a,b)            __MI128(PCMPEQ128(__U128(a),__U128(b),_WIDEMASK_WORD,_BITS_PER_WORD))
#define _mm_cmpeq_epi32(a,b)            __MI128(PCMPEQ128(__U128(a),__U128(b),_WIDEMASK_LONG,_BITS_PER_LONG))

// PCMPGT[B/W/D]

#define _mm_cmpgt_epi8(a,b)             __MI128(PCMPGT128(__U128(a),__U128(b),_WIDEMASK_BYTE,_BITS_PER_BYTE))
#define _mm_cmpgt_epi16(a,b)            __MI128(PCMPGT128(__U128(a),__U128(b),_WIDEMASK_WORD,_BITS_PER_WORD))
#define _mm_cmpgt_epi32(a,b)            __MI128(PCMPGT128(__U128(a),__U128(b),_WIDEMASK_LONG,_BITS_PER_LONG))
#define _mm_cmplt_epi8(a,b)             __MI128(PCMPGT128(__U128(b),__U128(a),_WIDEMASK_BYTE,_BITS_PER_BYTE))
#define _mm_cmplt_epi16(a,b)            __MI128(PCMPGT128(__U128(b),__U128(a),_WIDEMASK_WORD,_BITS_PER_WORD))
#define _mm_cmplt_epi32(a,b)            __MI128(PCMPGT128(__U128(b),__U128(a),_WIDEMASK_LONG,_BITS_PER_LONG))

// PEXTR[B/W/D/Q]

#define _mm_extract_epi8(a,b)          (__U128(a).B[(b) & 0b1111])
#define _mm_extract_epi16(a,b)         (__U128(a).W[(b) & 0b111])
#define _mm_extract_epi32(a,b)         (__U128(a).D[(b) & 0b11])
#define _mm_extract_epi64(a,b)         (__U128(a).Q[(b) & 0b1])

// CRC32

#define _mm_crc32_u8(a,b)               ((unsigned)CRC32(a,b,_CRC32_POLYNOMIAL,_BITS_PER_BYTE))
#define _mm_crc32_u16(a,b)              ((unsigned)CRC32(a,b,_CRC32_POLYNOMIAL,_BITS_PER_WORD))
#define _mm_crc32_u32(a,b)              ((unsigned)CRC32(a,b,_CRC32_POLYNOMIAL,_BITS_PER_LONG))
#define _mm_crc32_u64(a,b)              ((unsigned)CRC32(a,b,_CRC32_POLYNOMIAL,_BITS_PER_QUAD))

// PMADDWD

#define _mm_madd_epi16(a,b)             __MI128(PMADDWD128(__U128(a),__U128(b)))

// PMINUB

#define _mm_min_epu8(a,b)               __MI128(PMINU128(__U128(a),__U128(b),_WIDEMASK_BYTE,_BITS_PER_BYTE))

// PMINSW

#define _mm_min_epi16(a,b)              __MI128(PMINI128(__U128(a),__U128(b),_WIDEMASK_WORD,_BITS_PER_WORD))

// PMAXUB

#define _mm_max_epu8(a,b)               __MI128(PMAXU128(__U128(a),__U128(b),_WIDEMASK_BYTE,_BITS_PER_BYTE))

// PMAXSW

#define _mm_max_epi16(a,b)              __MI128(PMAXI128(__U128(a),__U128(b),_WIDEMASK_WORD,_BITS_PER_WORD))

// PMULH

#define _mm_mulhi_epi16(a,b)            __MI128(PMULHW128(__U128(a),__U128(b)))
#define _mm_mulhi_epu16(a,b)            __MI128(PMULHUW128(__U128(a),__U128(b)))
#define _mm_mullo_epi16(a,b)            __MI128(PMULLW128(__U128(a),__U128(b)))

// POR

#define _mm_or_si128(a,b)               __MI128(POR128(__U128(a),__U128(b)))
#define _mm_or_ps(a,b)                  __MM128(POR128(__S128(a),__S128(b)))
#define _mm_or_pd(a,b)                  __MD128(POR128(__D128(a),__D128(b)))

// PREFETCH[0/1/2/NTA]
#define _mm_prefetch                    __noop

// PSADBW

#define _mm_sad_epu8(a,b)               __MI128(PSADBW128(__U128(a),__U128(b)))

// PSHUFD
#define _mm_shuffle_epi32(a,b)          __MI128(PSHUFD128(__U128(a),__U128(a),b))

// PSHUFHW
#define _mm_shufflehi_epi16(a,b)        __MI128(__MAKEU64_U128(__U128(a).Q[0],PSHUFW64(0,__U128(a).Q[1],b)))

// PSHUFLW
#define _mm_shufflelo_epi16(a,b)        __MI128(__MAKEU64_U128(PSHUFW64(0,__U128(a).Q[0],b),__U128(a).Q[1]))

// PSLL[W/L/Q]

#define _mm_sll_epi16(a,b)              __MI128(PSLL128(__U128(a),__U128(b),_WIDEMASK_WORD,_BITS_PER_WORD))
#define _mm_sll_epi32(a,b)              __MI128(PSLL128(__U128(a),__U128(b),_WIDEMASK_LONG,_BITS_PER_LONG))
#define _mm_sll_epi64(a,b)              __MI128(PSLL128(__U128(a),__U128(b),_WIDEMASK_QUAD,_BITS_PER_QUAD))
#define _mm_slli_epi16(a,b)             __MI128(PSLL128(__U128(a),__IMM8_128(b),_WIDEMASK_WORD,_BITS_PER_WORD))
#define _mm_slli_epi32(a,b)             __MI128(PSLL128(__U128(a),__IMM8_128(b),_WIDEMASK_LONG,_BITS_PER_LONG))
#define _mm_slli_epi64(a,b)             __MI128(PSLL128(__U128(a),__IMM8_128(b),_WIDEMASK_QUAD,_BITS_PER_QUAD))

// PSLLDQ
#define _mm_slli_si128(a,b)             __MI128(PSLLDQ(__U128(a),(b) & 0xff))

// PSRA[W/L/Q]

#define _mm_sra_epi16(a,b)              __MI128(PSRA128(__U128(a),__U128(b),_WIDEMASK_WORD,_BITS_PER_WORD))
#define _mm_sra_epi32(a,b)              __MI128(PSRA128(__U128(a),__U128(b),_WIDEMASK_LONG,_BITS_PER_LONG))
#define _mm_sra_epi64(a,b)              __MI128(PSRA128(__U128(a),__U128(b),_WIDEMASK_QUAD,_BITS_PER_QUAD))
#define _mm_srai_epi16(a,b)             __MI128(PSRA128(__U128(a),__IMM8_128(b),_WIDEMASK_WORD,_BITS_PER_WORD))
#define _mm_srai_epi32(a,b)             __MI128(PSRA128(__U128(a),__IMM8_128(b),_WIDEMASK_LONG,_BITS_PER_LONG))
#define _mm_srai_epi64(a,b)             __MI128(PSRA128(__U128(a),__IMM8_128(b),_WIDEMASK_QUAD,_BITS_PER_QUAD))

// PSRL[W/L/Q]

#define _mm_srl_epi16(a,b)              __MI128(PSRL128(__U128(a),__U128(b),_WIDEMASK_WORD,_BITS_PER_WORD))
#define _mm_srl_epi32(a,b)              __MI128(PSRL128(__U128(a),__U128(b),_WIDEMASK_LONG,_BITS_PER_LONG))
#define _mm_srl_epi64(a,b)              __MI128(PSRL128(__U128(a),__U128(b),_WIDEMASK_QUAD,_BITS_PER_QUAD))
#define _mm_srli_epi16(a,b)             __MI128(PSRL128(__U128(a),__IMM8_128(b),_WIDEMASK_WORD,_BITS_PER_WORD))
#define _mm_srli_epi32(a,b)             __MI128(PSRL128(__U128(a),__IMM8_128(b),_WIDEMASK_LONG,_BITS_PER_LONG))
#define _mm_srli_epi64(a,b)             __MI128(PSRL128(__U128(a),__IMM8_128(b),_WIDEMASK_QUAD,_BITS_PER_QUAD))

// PSRLDQ
#define _mm_srli_si128(a,b)             __MI128(PSRLDQ(__U128(a), (b) & 0xff))

// PSUB[B/W/D/Q]

#define _mm_sub_epi8(a,b)               __MI128(PSUB128(__U128(a),__U128(b),_WIDEMASK_BYTE))
#define _mm_sub_epi16(a,b)              __MI128(PSUB128(__U128(a),__U128(b),_WIDEMASK_WORD))
#define _mm_sub_epi32(a,b)              __MI128(PSUB128(__U128(a),__U128(b),_WIDEMASK_LONG))
#define _mm_sub_epi64(a,b)              __MI128(PSUB128(__U128(a),__U128(b),_WIDEMASK_QUAD))

// PSUBS[B/W/D/Q]

#define _mm_subs_epi8(a,b)              __MI128(PSUBSI128(__U128(a),__U128(b),_WIDEMASK_BYTE,_BITS_PER_BYTE))
#define _mm_subs_epi16(a,b)             __MI128(PSUBSI128(__U128(a),__U128(b),_WIDEMASK_WORD,_BITS_PER_WORD))
#define _mm_subs_epi32(a,b)             __MI128(PSUBSI128(__U128(a),__U128(b),_WIDEMASK_LONG,_BITS_PER_LONG))
#define _mm_subs_epi64(a,b)             __MI128(PSUBSI128(__U128(a),__U128(b),_WIDEMASK_QUAD,_BITS_PER_QUAD))

// PSUBUS[B/W/D/Q]

#define _mm_subs_epu8(a,b)              __MI128(PSUBSU128(__U128(a),__U128(b),_WIDEMASK_BYTE,_BITS_PER_BYTE))
#define _mm_subs_epu16(a,b)             __MI128(PSUBSU128(__U128(a),__U128(b),_WIDEMASK_WORD,_BITS_PER_WORD))
#define _mm_subs_epu32(a,b)             __MI128(PSUBSU128(__U128(a),__U128(b),_WIDEMASK_LONG,_BITS_PER_LONG))
#define _mm_subs_epu64(a,b)             __MI128(PSUBSU128(__U128(a),__U128(b),_WIDEMASK_QUAD,_BITS_PER_QUAD))

// PUNPCKH

#define _mm_unpackhi_epi8(a,b)          __MI128(PUNPCKHBW128(__U128(a),__U128(b)))
#define _mm_unpackhi_epi16(a,b)         __MI128(PUNPCKHWD128(__U128(a),__U128(b)))
#define _mm_unpackhi_epi32(a,b)         __MI128(PUNPCKHDQ128(__U128(a),__U128(b)))
#define _mm_unpackhi_epi64(a,b)         __MI128(PUNPCKHQ128(__U128(a),__U128(b)))

// PUNPCKL

#define _mm_unpacklo_epi8(a,b)          __MI128(PUNPCKLBW128(__U128(a),__U128(b)))
#define _mm_unpacklo_epi16(a,b)         __MI128(PUNPCKLWD128(__U128(a),__U128(b)))
#define _mm_unpacklo_epi32(a,b)         __MI128(PUNPCKLDQ128(__U128(a),__U128(b)))
#define _mm_unpacklo_epi64(a,b)         __MI128(PUNPCKQ128(__U128(a),__U128(b)))

// PXOR

#define _mm_xor_si128(a,b)              __MI128(PXOR128(__U128(a),__U128(b)))
#define _mm_xor_ps(a,b)                 __MM128(PXOR128(__S128(a),__S128(b)))
#define _mm_xor_pd(a,b)                 __MD128(PXOR128(__D128(a),__D128(b)))
#define _mm_setzero_ps()                __MM128(SETZERO())
#define _mm_setzero_si128()             __MI128(SETZERO())

// Sequence

#define _mm_set_ps(a,b,c,d)             __MM128(__MAKEF32_U128(d,c,b,a))
#define _mm_set1_epi16(a)               __MI128(BROADCAST128((uint16_t)(a), _BITS_PER_WORD))
#define _mm_set_epi16(a,b,c,d,e,f,g,h)  __MI128(__MAKEU16_U128((uint16_t)(h),(uint16_t)(g),(uint16_t)(f),(uint16_t)(e),(uint16_t)(d),(uint16_t)(c),(uint16_t)(b),(uint16_t)(a)))
#define _mm_set_epi32(a,b,c,d)          __MI128(__MAKEU32_U128((uint32_t)(d),(uint32_t)(c),(uint32_t)(b),(uint32_t)(a)))
#define _mm_set_epi64(a,b)              __MI128(__MAKEU64_U128(__U64(b),__U64(a)))
#define _mm_set_epi64x(a,b)             __MI128(__MAKEU64_U128((uint64_t)(b),(uint64_t)(a)))
#define _mm_insert_epi16(a,b,c)         __MI128(__INSERT16_U128(__U128(a),(uint16_t)(b),c))

// None
#define _mm_castsi128_ps(a)             __MM128(__U128(a))
#define _mm_castps_si128(a)             __MI128(__S128(a))

#if 0

//
// TODO: SSE floating point operations and SSE3+
// This lists the remaining opcodes as mnemonic-intrinsic pairs.

(DIVSD, _mm_div_sd)
(DIVPD, _mm_div_pd)
(MAXSD, _mm_max_sd)
(MAXPD, _mm_max_pd)
(MINSD, _mm_min_sd)
(MINPD, _mm_min_pd)
(MULSD, _mm_mul_sd)
(MULPD, _mm_mul_pd)
(SQRTSD, _mm_sqrt_sd)
(SUBSD, _mm_sub_sd)
(SUBPD, _mm_sub_pd)
(CMPEQPD, _mm_cmpeq_pd)
(CMPLTPD, _mm_cmplt_pd)
(CMPLEPD, _mm_cmple_pd)
(CMPORDPD, _mm_cmpord_pd)
(CMPUNORDPD, _mm_cmpunord_pd)
(CMPNEQPD, _mm_cmpneq_pd)
(CMPNLTPD, _mm_cmpnlt_pd)
(CMPNLEPD, _mm_cmpnle_pd)
(CMPEQSD, _mm_cmpeq_sd)
(CMPLTSD, _mm_cmplt_sd)
(CMPLESD, _mm_cmple_sd)
(CMPORDSD, _mm_cmpord_sd)
(CMPUNORDSD, _mm_cmpunord_sd)
(CMPNEQSD, _mm_cmpneq_sd)
(CMPNLTSD, _mm_cmpnlt_sd)
(CMPNLESD, _mm_cmpnle_sd)
(UNPCKHPD, _mm_unpackhi_pd)
(UNPCKLPD, _mm_unpacklo_pd)
(SUBSS, _mm_sub_ss)
(SUBPS, _mm_sub_ps)
(MULSS, _mm_mul_ss)
(DIVSS, _mm_div_ss)
(DIVPS, _mm_div_ps)
(MINSS, _mm_min_ss)
(MINPS, _mm_min_ps)
(MAXSS, _mm_max_ss)
(MAXPS, _mm_max_ps)
(CMPEQSS, _mm_cmpeq_ss)
(CMPEQPS, _mm_cmpeq_ps)
(CMPLESS, _mm_cmple_ss)
(CMPLEPS, _mm_cmple_ps)
(CMPLTSS, _mm_cmplt_ss)
(CMPLTPS, _mm_cmplt_ps)
(CMPNEQSS, _mm_cmpneq_ss)
(CMPNEQPS, _mm_cmpneq_ps)
(CMPORDSS, _mm_cmpord_ss)
(CMPORDPS, _mm_cmpord_ps)
(CMPUNORDSS, _mm_cmpunord_ss)
(CMPUNORDPS, _mm_cmpunord_ps)
// SSE2, 2 arguments convert
(CVTSD2SS, _mm_cvtsd_ss)
(CVTSS2SD, _mm_cvtss_sd)
// SSE, 2 arguments misc
(UNPCKHPS, _mm_unpackhi_ps)
(UNPCKLPS, _mm_unpacklo_ps)
(MOVHLPS, _mm_movehl_ps)
(MOVLHPS, _mm_movelh_ps)
// SSE, 1 argument convert
(CVTDQ2PD, _mm_cvtepi32_pd)
(CVTTPS2DQ, _mm_cvttps_epi32)
(CVTPD2DQ, _mm_cvtpd_epi32)
(CVTTPD2DQ, _mm_cvttpd_epi32)
(CVTPD2PS, _mm_cvtpd_ps)
(CVTPS2PD, _mm_cvtps_pd)
(CVTSS2SI, _mm_cvtss_si32)
(CVTTSS2SI, _mm_cvttss_si32)
(CVTSI2SS, _mm_cvtsi32_ss)
#if _M_X64
(CVTSS2SI_64, _mm_cvtss_si64x)
(CVTTSS2SI_64, _mm_cvttss_si64x)
(CVTSI2SS_64, _mm_cvtsi64x_ss)
#endif // _M_X64
// SSE2, 1 argument convert
(CVTSD2SI, _mm_cvtsd_si32)
(CVTTSD2SI, _mm_cvttsd_si32)
(CVTSI2SD, _mm_cvtsi32_sd)
#if _M_X64
(CVTSD2SI_64, _mm_cvtsd_si64x)
(CVTTSD2SI_64, _mm_cvttsd_si64x)
(CVTSI2SD_64, _mm_cvtsi64x_sd)
#endif // _M_X64
// SSE, 1 argument float arithmetic
(RCPPS, _mm_rcp_ps)
(SQRTPS, _mm_sqrt_ps)
(RSQRTPS, _mm_rsqrt_ps)
(SQRTPD, _mm_sqrt_pd)
(RCPSS, _mm_rcp_ss)
(SQRTSS, _mm_sqrt_ss)
(RSQRTSS, _mm_rsqrt_ss)
// SSE shuffle
(SHUFPS, _mm_shuffle_ps_emulated)
(SHUFPD, _mm_shuffle_pd_emulated)
// SSE3, packed shuffle
(PSHUFB, _mm_shuffle_epi8_emulated)
// SSE4.1 arguments convert
(PMOVSXBW, _mm_cvtepi8_epi16)
(PMOVSXBD, _mm_cvtepi8_epi32)
(PMOVSXBQ, _mm_cvtepi8_epi64)
(PMOVSXWD, _mm_cvtepi16_epi32)
(PMOVSXWQ, _mm_cvtepi16_epi64)
(PMOVSXDQ, _mm_cvtepi32_epi64)
(PMOVZXBW, _mm_cvtepu8_epi16)
(PMOVZXBD, _mm_cvtepu8_epi32)
(PMOVZXBQ, _mm_cvtepu8_epi64)
(PMOVZXWD, _mm_cvtepu16_epi32)
(PMOVZXWQ, _mm_cvtepu16_epi64)
(PMOVZXDQ, _mm_cvtepu32_epi64)
// SSE4.1 Integer Arithmetic
(PMAXSB, _mm_max_epi8)
(PMAXSD, _mm_max_epi32)
(PMINSB, _mm_min_epi8)
(PMINSD, _mm_min_epi32)
(PMAXUD, _mm_max_epu32)
(PMAXUW, _mm_max_epu16)
(PMINUD, _mm_min_epu32)
(PMINUW, _mm_min_epu16)
(PMULLD, _mm_mullo_epi32)
// AES-NI cryptographic extensions
(AESENC, _mm_aesenc_si128)
(AESDEC, _mm_aesdec_si128)
(AESENCLAST, _mm_aesenclast_si128)
(AESDECLAST, _mm_aesdeclast_si128)

#endif

#endif  // defined(_M_ARM64EC) || defined(USE_SOFT_INTRINSICS)
