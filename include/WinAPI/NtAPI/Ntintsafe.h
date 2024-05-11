#ifndef NTINTSAFE_H
#define NTINTSAFE_H

#include <NtAPI.h>

NTSTATUS RtlByteToChar(
  _In_  BYTE bOperand,
  _Out_ CHAR *pch
);

NTSTATUS RtlByteToInt8(
  _In_  BYTE bOperand,
  _Out_ INT8 *pi8Result
);

NTSTATUS RtlDWordPtrAdd(
  _In_  DWORD_PTR dwAugend,
  _In_  DWORD_PTR dwAddend,
  _Out_ DWORD_PTR *pdwResult
);

NTSTATUS RtlDWordPtrMult(
  _In_  DWORD_PTR dwMultiplicand,
  _In_  DWORD_PTR dwMultiplier,
  _Out_ DWORD_PTR *pdwResult
);

NTSTATUS RtlDWordPtrSub(
  _In_  DWORD_PTR dwMinuend,
  _In_  DWORD_PTR dwSubtrahend,
  _Out_ DWORD_PTR *pdwResult
);

NTSTATUS RtlInt8Add(
  _In_  INT8 i8Augend,
  _In_  INT8 i8Addend,
  _Out_ INT8 *pi8Result
);

NTSTATUS RtlInt8Mult(
  _In_  INT8 i8Multiplicand,
  _In_  INT8 i8Multiplier,
  _Out_ INT8 *pi8Result
);

NTSTATUS RtlInt8Sub(
  _In_  INT8 i8Minuend,
  _In_  INT8 i8Subtrahend,
  _Out_ INT8 *pi8Result
);

NTSTATUS RtlInt8ToUChar(
  _In_  INT8  i8Operand,
  _Out_ UCHAR *pch
);

NTSTATUS RtlInt8ToUInt(
  _In_  INT8 i8Operand,
  _Out_ UINT *puResult
);

NTSTATUS RtlInt8ToUInt8(
  _In_  INT8  i8Operand,
  _Out_ UINT8 *pu8Result
);

NTSTATUS RtlInt8ToUIntPtr(
  _In_  INT8     i8Operand,
  _Out_ UINT_PTR *puResult
);

NTSTATUS RtlInt8ToULong(
  _In_  INT8  i8Operand,
  _Out_ ULONG *pulResult
);

NTSTATUS RtlInt8ToULongLong(
  _In_  INT8      i8Operand,
  _Out_ ULONGLONG *pullResult
);

NTSTATUS RtlInt8ToULongPtr(
  _In_  INT8      i8Operand,
  _Out_ ULONG_PTR *pulResult
);

NTSTATUS RtlInt8ToUShort(
  _In_  INT8   i8Operand,
  _Out_ USHORT *pusResult
);

NTSTATUS RtlIntAdd(
  _In_  INT iAugend,
  _In_  INT iAddend,
  _Out_ INT *piResult
);

NTSTATUS RtlIntMult(
  _In_  INT iMultiplicand,
  _In_  INT iMultiplier,
  _Out_ INT *piResult
);

NTSTATUS RtlIntPtrAdd(
  _In_  INT_PTR iAugend,
  _In_  INT_PTR iAddend,
  _Out_ INT_PTR *piResult
);

NTSTATUS RtlIntPtrMult(
  _In_  INT_PTR iMultiplicand,
  _In_  INT_PTR iMultiplier,
  _Out_ INT_PTR *piResult
);

NTSTATUS RtlIntPtrSub(
  _In_  INT_PTR iMinuend,
  _In_  INT_PTR iSubtrahend,
  _Out_ INT_PTR *piResult
);

NTSTATUS RtlIntPtrToChar(
  _In_  INT_PTR iOperand,
  _Out_ CHAR    *pch
);

NTSTATUS RtlIntPtrToChar(
  _In_  INT_PTR iOperand,
  _Out_ CHAR    *pch
);

NTSTATUS RtlIntPtrToInt8(
  _In_  INT_PTR iOperand,
  _Out_ INT8    *pi8Result
);

NTSTATUS RtlIntPtrToLong(
  _In_  INT_PTR iOperand,
  _Out_ LONG    *plResult
);

NTSTATUS RtlIntPtrToLongPtr(
  _In_  INT_PTR  iOperand,
  _Out_ LONG_PTR *plResult
);

NTSTATUS RtlIntPtrToShort(
  _In_  INT_PTR iOperand,
  _Out_ SHORT   *psResult
);

NTSTATUS RtlIntPtrToUChar(
  _In_  INT_PTR iOperand,
  _Out_ UCHAR   *pch
);

NTSTATUS RtlIntPtrToUInt(
  _In_  INT_PTR iOperand,
  _Out_ UINT    *puResult
);

NTSTATUS RtlIntPtrToUInt8(
  _In_  INT_PTR iOperand,
  _Out_ UINT8   *pui8Result
);

NTSTATUS RtlIntPtrToUIntPtr(
  _In_  INT_PTR  iOperand,
  _Out_ UINT_PTR *puResult
);

NTSTATUS RtlIntPtrToULong(
  _In_  INT_PTR iOperand,
  _Out_ ULONG   *pulResult
);

NTSTATUS RtlIntPtrToULongLong(
  _In_  INT_PTR   iOperand,
  _Out_ ULONGLONG *pullResult
);

NTSTATUS RtlIntPtrToULongPtr(
  _In_  INT_PTR   iOperand,
  _Out_ ULONG_PTR *pulResult
);

NTSTATUS RtlIntPtrToUShort(
  _In_  INT_PTR iOperand,
  _Out_ USHORT  *pusResult
);

NTSTATUS RtlIntSub(
  _In_ INT iMinuend,
  _In_ INT iSubtrahend,
       INT *piResult
);

NTSTATUS RtlIntToChar(
  _In_  INT  iOperand,
  _Out_ CHAR *pch
);

NTSTATUS RtlIntToInt8(
  _In_  INT  iOperand,
  _Out_ INT8 *pi8Result
);


NTSTATUS RtlIntToShort(
  _In_  INT   iOperand,
  _Out_ SHORT *psResult
);

NTSTATUS RtlIntToUChar(
  _In_  INT   iOperand,
  _Out_ UCHAR *pch
);

NTSTATUS RtlIntToUInt(
  _In_  INT  iOperand,
  _Out_ UINT *puResult
);

NTSTATUS RtlIntToUInt8(
  _In_  INT   iOperand,
  _Out_ UINT8 *pui8Result
);

NTSTATUS RtlIntToULong(
  _In_  INT   iOperand,
  _Out_ ULONG *pulResult
);

NTSTATUS RtlIntToULongLong(
  _In_  INT       iOperand,
  _Out_ ULONGLONG *pullResult
);

NTSTATUS RtlIntToUShort(
  _In_  INT    iOperand,
  _Out_ USHORT *pusResult
);

NTSTATUS RtlLongAdd(
  _In_  LONG lAugend,
  _In_  LONG lAddend,
  _Out_ LONG *plResult
);

NTSTATUS RtlLongLongAdd(
  _In_  LONGLONG llAugend,
  _In_  LONGLONG llAddend,
  _Out_ LONGLONG *pllResult
);

NTSTATUS RtlLongLongMult(
  _In_  LONGLONG llMultiplicand,
  _In_  LONGLONG llMultiplier,
  _Out_ LONGLONG *pllResult
);

NTSTATUS RtlLongLongSub(
  _In_  LONGLONG llMinuend,
  _In_  LONGLONG llSubtrahend,
  _Out_ LONGLONG *pllResult
);

NTSTATUS RtlLongLongToChar(
  _In_  LONGLONG llOperand,
  _Out_ CHAR     *pch
);

NTSTATUS RtlLongLongToInt(
  _In_  LONGLONG llOperand,
  _Out_ INT      *piResult
);

NTSTATUS RtlLongLongToInt8(
  _In_  LONGLONG llOperand,
  _Out_ INT8     *pi8Result
);

NTSTATUS RtlLongLongToIntPtr(
  _In_  LONGLONG llOperand,
  _Out_ INT_PTR  *piResult
);

NTSTATUS RtlLongLongToLong(
  _In_  LONGLONG llOperand,
  _Out_ LONG     *plResult
);

NTSTATUS RtlLongLongToLongPtr(
  _In_  LONGLONG llOperand,
  _Out_ LONG_PTR *plResult
);

NTSTATUS RtlLongLongToShort(
  _In_  LONGLONG llOperand,
  _Out_ SHORT    *psResult
);

NTSTATUS RtlLongLongToUChar(
  _In_  LONGLONG llOperand,
  _Out_ UCHAR    *pch
);

NTSTATUS RtlLongLongToUInt(
  _In_  LONGLONG llOperand,
  _Out_ UINT     *puResult
);

NTSTATUS RtlLongLongToUInt8(
  _In_  LONGLONG llOperand,
  _Out_ UINT8    *pu8Result
);

NTSTATUS RtlLongLongToULong(
  _In_  LONGLONG llOperand,
  _Out_ ULONG    *pulResult
)
;NTSTATUS RtlLongLongToULongLong(
  _In_  LONGLONG  llOperand,
  _Out_ ULONGLONG *pullResult
);

NTSTATUS RtlLongLongToUShort(
  _In_  LONGLONG llOperand,
  _Out_ USHORT   *pusResult
);

NTSTATUS RtlLongMult(
  _In_  LONG lMultiplicand,
  _In_  LONG lMultiplier,
  _Out_ LONG *plResult
);

NTSTATUS RtlLongPtrAdd(
  LONG_PTR lAugend,
  LONG_PTR lAddend,
  LONG_PTR *plResult
);

NTSTATUS RtlLongPtrMult(
  _In_  LONG_PTR lMultiplicand,
  _In_  LONG_PTR lMultiplier,
  _Out_ LONG_PTR *plResult
);

NTSTATUS RtlLongPtrSub(
  _In_  LONG_PTR lMinuend,
  _In_  LONG_PTR lSubtrahend,
  _Out_ LONG_PTR *plResult
);

NTSTATUS RtlLongPtrToChar(
  _In_  LONG_PTR lOperand,
  _Out_ CHAR     *pch
);

NTSTATUS RtlLongPtrToInt(
  _In_  LONG_PTR lOperand,
  _Out_ INT      *piResult
);

NTSTATUS RtlLongPtrToInt8(
  _In_  LONG_PTR lOperand,
  _Out_ INT8     *pi8Result
);

NTSTATUS RtlLongPtrToIntPtr(
  _In_  LONG_PTR lOperand,
  _Out_ INT_PTR  *piResult
);

NTSTATUS RtlLongPtrToLong(
  _In_  LONG_PTR lOperand,
  _Out_ LONG     *plResult
);

NTSTATUS RtlLongPtrToShort(
  _In_  LONG_PTR lOperand,
  _Out_ SHORT    *psResult
);

NTSTATUS RtlLongPtrToUChar(
  _In_  LONG_PTR lOperand,
  _Out_ UCHAR    *pch
);

NTSTATUS RtlLongPtrToUInt(
  _In_  LONG_PTR lOperand,
  _Out_ UINT     *puResult
);

NTSTATUS RtlLongPtrToUInt8(
  _In_  LONG_PTR lOperand,
  _Out_ UINT8    *pui8Result
);

NTSTATUS RtlLongPtrToUIntPtr(
  _In_  LONG_PTR lOperand,
  _Out_ UINT_PTR *puResult
);
NTSTATUS RtlLongPtrToULong(
  _In_  LONG_PTR lOperand,
  _Out_ ULONG    *pulResult
);

NTSTATUS RtlLongPtrToULongLong(
  _In_  LONG_PTR  lOperand,
  _Out_ ULONGLONG *pullResult
);

NTSTATUS RtlLongPtrToULongPtr(
  _In_  LONG_PTR  lOperand,
  _Out_ ULONG_PTR *pulResult
);

NTSTATUS RtlLongPtrToUShort(
  _In_  LONG_PTR lOperand,
  _Out_ USHORT   *pusResult
);

NTSTATUS RtlLongSub(
  _In_  LONG lMinuend,
  _In_  LONG lSubtrahend,
  _Out_ LONG *plResult
);

NTSTATUS RtlLongToChar(
  _In_  LONG lOperand,
  _Out_ CHAR *pch
);

NTSTATUS RtlLongToInt(
  _In_  LONG lOperand,
  _Out_ INT  *piResult
);

NTSTATUS RtlLongToInt8(
  _In_  LONG lOperand,
  _Out_ INT8 *pi8Result
);

NTSTATUS RtlLongToIntPtr(
  _In_  LONG    lOperand,
  _Out_ INT_PTR *piResult
);

NTSTATUS RtlLongToShort(
  _In_  LONG  lOperand,
  _Out_ SHORT *psResult
);

NTSTATUS RtlLongToUChar(
  _In_  LONG  lOperand,
  _Out_ UCHAR *pch
);


NTSTATUS RtlLongToUInt(
  _In_  LONG lOperand,
  _Out_ UINT *puResult
);

NTSTATUS RtlLongToUInt8(
  LONG  lOperand,
  UINT8 *pui8Result
);

NTSTATUS RtlLongToUIntPtr(
  _In_  LONG     lOperand,
  _Out_ UINT_PTR *puResult
);

NTSTATUS RtlLongToULong(
  _In_  LONG  lOperand,
  _Out_ ULONG *pulResult
);

NTSTATUS RtlLongToULongLong(
  _In_  LONG      lOperand,
  _Out_ ULONGLONG *pullResult
);

NTSTATUS RtlLongToULongPtr(
  LONG      lOperand,
  ULONG_PTR *pulResult
);

NTSTATUS RtlLongToUShort(
  _In_  LONG   lOperand,
  _Out_ USHORT *pusResult
);

NTSTATUS RtlPtrdiffTAdd(
  _In_  ptrdiff_t Augend,
  _In_  ptrdiff_t Addend,
  _Out_ ptrdiff_t *pResult
);

NTSTATUS RtlPtrdiffTMult(
  _In_  ptrdiff_t Multiplicand,
  _In_  ptrdiff_t Multiplier,
  _Out_ ptrdiff_t *pResult
);

NTSTATUS RtlPtrdiffTSub(
  _In_  ptrdiff_t Minuend,
  _In_  ptrdiff_t Subtrahend,
  _Out_ ptrdiff_t *pResult
);

NTSTATUS RtlShortAdd(
  _In_  SHORT sAugend,
  _In_  SHORT sAddend,
  _Out_ SHORT *psResult
);

NTSTATUS RtlShortMult(
  _In_  SHORT sMultiplicand,
  _In_  SHORT sMultiplier,
  _Out_ SHORT *psResult
);

NTSTATUS RtlShortSub(
  _In_  SHORT sMinuend,
  _In_  SHORT sSubtrahend,
  _Out_ SHORT *psResult
);

NTSTATUS RtlShortToChar(
  _In_  SHORT sOperand,
  _Out_ CHAR  *pch
);

NTSTATUS RtlShortToDWordPtr(
  _In_  SHORT     sOperand,
  _Out_ DWORD_PTR *pdwResult
);

NTSTATUS RtlShortToInt8(
  _In_  SHORT sOperand,
  _Out_ INT8  *pi8Result
);

NTSTATUS RtlShortToUChar(
  _In_  SHORT sOperand,
  _Out_ UCHAR *pch
);

NTSTATUS RtlShortToUInt(
  _In_  SHORT sOperand,
  _Out_ UINT  *puResult
);

NTSTATUS RtlShortToUInt8(
  _In_ SHORT sOperand,
       UINT8 *pui8Result
);

NTSTATUS RtlShortToUIntPtr(
  _In_  SHORT    sOperand,
  _Out_ UINT_PTR *puResult
);

NTSTATUS RtlShortToULong(
  _In_  SHORT sOperand,
  _Out_ ULONG *pulResult
);

NTSTATUS RtlShortToULongLong(
  _In_  SHORT     sOperand,
  _Out_ ULONGLONG *pullResult
);

NTSTATUS RtlShortToULongPtr(
  _In_  SHORT     sOperand,
  _Out_ ULONG_PTR *pulResult
);

NTSTATUS RtlShortToUShort(
  _In_  SHORT  sOperand,
  _Out_ USHORT *pusResult
);

NTSTATUS RtlSizeTAdd(
  _In_  size_t Augend,
  _In_  size_t Addend,
  _Out_ size_t *pResult
);

NTSTATUS RtlSizeTMult(
  _In_  size_t Multiplicand,
  _In_  size_t Multiplier,
  _Out_ size_t *pResult
);

NTSTATUS RtlSizeTSub(
  _In_  size_t Minuend,
  _In_  size_t Subtrahend,
  _Out_ size_t *pResult
);

NTSTATUS RtlSSIZETAdd(
  _In_  SSIZE_T Augend,
  _In_  SSIZE_T Addend,
  _Out_ SSIZE_T *pResult
);

NTSTATUS RtlSSIZETMult(
  _In_  SSIZE_T Multiplicand,
  _In_  SSIZE_T Multiplier,
  _Out_ SSIZE_T *pResult
);

NTSTATUS RtlSSIZETSub(
  _In_  SSIZE_T Minuend,
  _In_  SSIZE_T Subtrahend,
  _Out_ SSIZE_T *pResult
);

NTSTATUS RtlUInt8Add(
  _In_  UINT8 u8Augend,
  _In_  UINT8 u8Addend,
  _Out_ UINT8 *pu8Result
);

NTSTATUS RtlUInt8Mult(
  _In_  UINT8 u8Multiplicand,
  _In_  UINT8 u8Multiplier,
  _Out_ UINT8 *pu8Result
);

NTSTATUS RtlUInt8Sub(
  _In_  UINT8 u8Minuend,
  _In_  UINT8 u8Subtrahend,
  _Out_ UINT8 *pu8Result
);

NTSTATUS RtlUInt8ToChar(
  _In_  UINT8 u8Operand,
  _Out_ CHAR  *pch
);

NTSTATUS RtlUInt8ToInt8(
  _In_  UINT8 u8Operand,
  _Out_ INT8  *pi8Result
);

NTSTATUS RtlUIntAdd(
  _In_  UINT uAugend,
  _In_  UINT uAddend,
  _Out_ UINT *puResult
);

NTSTATUS RtlUIntMult(
  _In_  UINT uMultiplicand,
  _In_  UINT uMultiplier,
  _Out_ UINT *puResult
);

NTSTATUS RtlUIntPtrAdd(
  _In_  UINT_PTR uAugend,
  _In_  UINT_PTR uAddend,
  _Out_ UINT_PTR *puResult
);

NTSTATUS RtlUIntPtrMult(
  _In_  UINT_PTR uMultiplicand,
  _In_  UINT_PTR uMultiplier,
  _Out_ UINT_PTR *puResult
);

NTSTATUS RtlUIntPtrSub(
  _In_  UINT_PTR uMinuend,
  _In_  UINT_PTR uSubtrahend,
  _Out_ UINT_PTR *puResult
);

NTSTATUS RtlUIntPtrToChar(
  UINT_PTR uOperand,
  CHAR     *pch
);

NTSTATUS RtlUIntPtrToInt(
  _In_  UINT_PTR uOperand,
  _Out_ INT      *piResult
);

NTSTATUS RtlUIntPtrToInt16(
  _In_  UINT_PTR uOperand,
  _Out_ INT16    *pi16Result
);

NTSTATUS RtlUIntPtrToInt8(
  _In_  UINT_PTR uOperand,
  _Out_ INT8     *pi8Result
);

NTSTATUS RtlUIntPtrToIntPtr(
  _In_  UINT_PTR uOperand,
  _Out_ INT_PTR  *piResult
);

NTSTATUS RtlUIntPtrToLong(
        UINT_PTR uOperand,
  _Out_ LONG     *plResult
);

NTSTATUS RtlUIntPtrToLongLong(
  _In_  UINT_PTR uOperand,
  _Out_ LONGLONG *pllResult
);

NTSTATUS RtlUIntPtrToLongPtr(
  _In_  UINT_PTR uOperand,
  _Out_ LONG_PTR *plResult
);

NTSTATUS RtlUIntPtrToShort(
  _In_  UINT_PTR uOperand,
  _Out_ SHORT    *psResult
);

NTSTATUS RtlUIntPtrToUChar(
  _In_  UINT_PTR uOperand,
  _Out_ UCHAR    *pch
);

NTSTATUS RtlUIntPtrToUInt(
        UINT_PTR uOperand,
  _Out_ UINT     *puResult
);

NTSTATUS RtlUIntPtrToUInt16(
  _In_  UINT_PTR uOperand,
  _Out_ UINT16   *pu16Result
);

NTSTATUS RtlUIntPtrToUInt8(
  _In_  UINT_PTR uOperand,
  _Out_ UINT8    *pu8Result
);

NTSTATUS RtlUIntPtrToULong(
  _In_  UINT_PTR uOperand,
  _Out_ ULONG    *pulResult
);

NTSTATUS RtlUIntPtrToUShort(
  _In_  UINT_PTR uOperand,
  _Out_ USHORT   *pusResult
);

NTSTATUS RtlUIntSub(
  _In_  UINT uMinuend,
  _In_  UINT uSubtrahend,
  _Out_ UINT *puResult
);

NTSTATUS RtlUIntToChar(
  _In_  UINT uOperand,
  _Out_ CHAR *pch
);

NTSTATUS RtlUIntToInt(
  _In_  UINT uOperand,
  _Out_ INT  *piResult
);

NTSTATUS RtlUIntToInt8(
  _In_  UINT uOperand,
  _Out_ INT8 *pi8Result
);

NTSTATUS RtlUIntToIntPtr(
  _In_  UINT    uOperand,
  _Out_ INT_PTR *piResult
);

NTSTATUS RtlUIntToLong(
  _In_  UINT uOperand,
  _Out_ LONG *plResult
);

NTSTATUS RtlUIntToLongPtr(
  _In_  UINT     uOperand,
  _Out_ LONG_PTR *plResult
);

NTSTATUS RtlUIntToShort(
  _In_  UINT  uOperand,
  _Out_ SHORT *psResult
);

NTSTATUS RtlUIntToUChar(
  _In_  UINT  uOperand,
  _Out_ UCHAR *pch
);

NTSTATUS RtlUIntToUInt8(
  _In_  UINT  uOperand,
  _Out_ UINT8 *pui8Result
);

NTSTATUS RtlUIntToUShort(
  _In_  UINT   uOperand,
  _Out_ USHORT *pusResult
);

NTSTATUS RtlULongAdd(
  _In_  ULONG ulAugend,
  _In_  ULONG ulAddend,
  _Out_ ULONG *pulResult
);

NTSTATUS RtlULongLongAdd(
  _In_ ULONGLONG ullAugend,
  _In_ ULONGLONG ullAddend,
       ULONGLONG *pullResult
);

NTSTATUS RtlULongLongMult(
  _In_  ULONGLONG ullMultiplicand,
  _In_  ULONGLONG ullMultiplier,
  _Out_ ULONGLONG *pullResult
);

NTSTATUS RtlULongLongSub(
  _In_  ULONGLONG ullMinuend,
  _In_  ULONGLONG ullSubtrahend,
  _Out_ ULONGLONG *pullResult
);

NTSTATUS RtlULongLongToChar(
  _In_  ULONGLONG ullOperand,
  _Out_ CHAR      *pch
);

NTSTATUS RtlULongLongToInt(
  _In_  ULONGLONG ullOperand,
  _Out_ INT       *piResult
);

NTSTATUS RtlULongLongToInt8(
  _In_  ULONGLONG ullOperand,
  _Out_ INT8      *pi8Result
);

NTSTATUS RtlULongLongToLong(
  _In_  ULONGLONG ullOperand,
  _Out_ LONG      *plResult
);

NTSTATUS RtlULongLongToLongLong(
  _In_  ULONGLONG ullOperand,
  _Out_ LONGLONG  *pllResult
);

NTSTATUS RtlULongLongToLongPtr(
  _In_  ULONGLONG ullOperand,
  _Out_ LONG_PTR  *plResult
);

NTSTATUS RtlULongLongToShort(
  _In_  ULONGLONG ullOperand,
  _Out_ SHORT     *psResult
);

NTSTATUS RtlULongLongToUChar(
  _In_  ULONGLONG ullOperand,
  _Out_ UCHAR     *pch
);

NTSTATUS RtlULongLongToUInt(
  _In_  ULONGLONG ullOperand,
  _Out_ UINT      *puResult
);

NTSTATUS RtlULongLongToUInt8(
  _In_  ULONGLONG ullOperand,
  _Out_ UINT8     *pu8Result
);

NTSTATUS RtlULongLongToUIntPtr(
  _In_  ULONGLONG ullOperand,
  _Out_ UINT_PTR  *puResult
);

NTSTATUS RtlULongLongToULong(
  _In_ ULONGLONG ullOperand,
       ULONG     *pulResult
);

NTSTATUS RtlULongLongToULongPtr(
  _In_ ULONGLONG ullOperand,
       ULONG_PTR *pulResult
);

NTSTATUS RtlULongLongToUShort(
  _In_  ULONGLONG ullOperand,
  _Out_ USHORT    *pusResult
);

NTSTATUS RtlULongMult(
  _In_  ULONG ulMultiplicand,
  _In_  ULONG ulMultiplier,
  _Out_ ULONG *pulResult
);

NTSTATUS RtlULongPtrAdd(
  _In_  ULONG_PTR ulAugend,
  _In_  ULONG_PTR ulAddend,
  _Out_ ULONG_PTR *pulResult
);

NTSTATUS RtlULongPtrMult(
  ULONG_PTR ulMultiplicand,
  ULONG_PTR ulMultiplier,
  ULONG_PTR *pulResult
);

NTSTATUS RtlULongPtrSub(
  _In_  ULONG_PTR ulMinuend,
  _In_  ULONG_PTR ulSubtrahend,
  _Out_ ULONG_PTR *pulResult
);

NTSTATUS RtlULongPtrToChar(
  _In_  ULONG_PTR ulOperand,
  _Out_ CHAR      *pch
);

NTSTATUS RtlULongPtrToInt(
  _In_  ULONG_PTR ulOperand,
  _Out_ INT       *piResult
);

NTSTATUS RtlULongPtrToInt8(
  _In_  ULONG_PTR ulOperand,
  _Out_ INT8      *pi8Result
);

NTSTATUS RtlULongPtrToIntPtr(
  _In_  ULONG_PTR ulOperand,
  _Out_ INT_PTR   *piResult
);

NTSTATUS RtlULongPtrToLong(
  _In_  ULONG_PTR ulOperand,
  _Out_ LONG      *plResult
);

NTSTATUS RtlULongPtrToLongLong(
  _In_  ULONG_PTR ulOperand,
  _Out_ LONGLONG  *pllResult
);

NTSTATUS RtlULongPtrToLongPtr(
  _In_  ULONG_PTR ulOperand,
  _Out_ LONG_PTR  *plResult
);

NTSTATUS RtlULongPtrToShort(
  _In_  ULONG_PTR ulOperand,
  _Out_ SHORT     *psResult
);

NTSTATUS RtlULongPtrToShort(
  _In_  ULONG_PTR ulOperand,
  _Out_ SHORT     *psResult
);

NTSTATUS RtlULongPtrToUInt(
  _In_  ULONG_PTR ulOperand,
  _Out_ UINT      *puResult
);

NTSTATUS RtlULongPtrToUInt8(
  _In_  ULONG_PTR ulOperand,
  _Out_ UINT8     *pui8Result
);

NTSTATUS RtlULongPtrToUIntPtr(
  _In_  ULONG_PTR ulOperand,
  _Out_ UINT_PTR  *puResult
);

NTSTATUS RtlULongPtrToULong(
  _In_  ULONG_PTR ulOperand,
  _Out_ ULONG     *pulResult
);

NTSTATUS RtlULongPtrToUShort(
  _In_  ULONG_PTR ulOperand,
  _Out_ USHORT    *pusResult
);

NTSTATUS RtlULongSub(
  _In_  ULONG ulMinuend,
  _In_  ULONG ulSubtrahend,
  _Out_ ULONG *pulResult
);

NTSTATUS RtlULongToChar(
  _In_  ULONG ulOperand,
  _Out_ CHAR  *pch
);

NTSTATUS RtlULongToInt(
  _In_  ULONG ulOperand,
  _Out_ INT   *piResult
);

NTSTATUS RtlULongToInt8(
  _In_  ULONG ulOperand,
  _Out_ INT8  *pi8Result
);

NTSTATUS RtlULongToIntPtr(
  _In_  ULONG   ulOperand,
  _Out_ INT_PTR *piResult
);

NTSTATUS RtlULongToLong(
  _In_  ULONG ulOperand,
  _Out_ LONG  *plResult
);

NTSTATUS RtlULongToLongPtr(
  _In_  ULONG    ulOperand,
  _Out_ LONG_PTR *plResult
);

NTSTATUS RtlULongToShort(
  _In_  ULONG ulOperand,
  _Out_ SHORT *psResult
);

NTSTATUS RtlULongToUChar(
  _In_  ULONG ulOperand,
  _Out_ UCHAR *pch
);

NTSTATUS RtlULongToUInt(
  _In_  ULONG ulOperand,
  _Out_ UINT  *puResult
);

NTSTATUS RtlULongToUInt8(
  _In_  ULONG ulOperand,
  _Out_ UINT8 *pui8Result
);

NTSTATUS RtlULongToUIntPtr(
  _In_  ULONG    ulOperand,
  _Out_ UINT_PTR *puiResult
);

NTSTATUS RtlULongToUShort(
  _In_  ULONG  ulOperand,
  _Out_ USHORT *pusResult
);

NTSTATUS RtlUShortAdd(
  _In_  USHORT usAugend,
  _In_  USHORT usAddend,
  _Out_ USHORT *pusResult
);

NTSTATUS RtlUShortAdd(
  _In_  USHORT usAugend,
  _In_  USHORT usAddend,
  _Out_ USHORT *pusResult
);

NTSTATUS RtlUShortMult(
  _In_  USHORT usMultiplicand,
  _In_  USHORT usMultiplier,
  _Out_ USHORT *pusResult
);

NTSTATUS RtlUShortSub(
  _In_  USHORT usMinuend,
  _In_  USHORT usSubtrahend,
  _Out_ USHORT *pusResult
);

NTSTATUS RtlUShortToChar(
  _In_  USHORT usOperand,
  _Out_ CHAR   *pch
);

NTSTATUS RtlUShortToInt8(
  _In_  USHORT usOperand,
  _Out_ INT8   *pi8Result
);

NTSTATUS RtlUShortToShort(
  _In_  USHORT usOperand,
  _Out_ SHORT  *psResult
);

NTSTATUS RtlUShortToUChar(
  _In_  USHORT usOperand,
  _Out_ UCHAR  *pch
);

NTSTATUS RtlUShortToUInt8(
  _In_  USHORT usOperand,
  _Out_ UINT8  *pui8Result
);

#endif