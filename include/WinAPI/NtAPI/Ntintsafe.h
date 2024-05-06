#ifndef NTINTSAFE_H
#define NTINTSAFE_H

/*

NTSTATUS RtlByteToChar(
  [in]  BYTE bOperand,
  [out] CHAR *pch
);

NTSTATUS RtlByteToInt8(
  [in]  BYTE bOperand,
  [out] INT8 *pi8Result
);

NTSTATUS RtlDWordPtrAdd(
  [in]  DWORD_PTR dwAugend,
  [in]  DWORD_PTR dwAddend,
  [out] DWORD_PTR *pdwResult
);

NTSTATUS RtlDWordPtrMult(
  [in]  DWORD_PTR dwMultiplicand,
  [in]  DWORD_PTR dwMultiplier,
  [out] DWORD_PTR *pdwResult
);

NTSTATUS RtlDWordPtrSub(
  [in]  DWORD_PTR dwMinuend,
  [in]  DWORD_PTR dwSubtrahend,
  [out] DWORD_PTR *pdwResult
);

NTSTATUS RtlInt8Add(
  [in]  INT8 i8Augend,
  [in]  INT8 i8Addend,
  [out] INT8 *pi8Result
);

NTSTATUS RtlInt8Mult(
  [in]  INT8 i8Multiplicand,
  [in]  INT8 i8Multiplier,
  [out] INT8 *pi8Result
);

NTSTATUS RtlInt8Sub(
  [in]  INT8 i8Minuend,
  [in]  INT8 i8Subtrahend,
  [out] INT8 *pi8Result
);

NTSTATUS RtlInt8ToUChar(
  [in]  INT8  i8Operand,
  [out] UCHAR *pch
);

NTSTATUS RtlInt8ToUInt(
  [in]  INT8 i8Operand,
  [out] UINT *puResult
);

NTSTATUS RtlInt8ToUInt8(
  [in]  INT8  i8Operand,
  [out] UINT8 *pu8Result
);

NTSTATUS RtlInt8ToUIntPtr(
  [in]  INT8     i8Operand,
  [out] UINT_PTR *puResult
);

NTSTATUS RtlInt8ToULong(
  [in]  INT8  i8Operand,
  [out] ULONG *pulResult
);

NTSTATUS RtlInt8ToULongLong(
  [in]  INT8      i8Operand,
  [out] ULONGLONG *pullResult
);

NTSTATUS RtlInt8ToULongPtr(
  [in]  INT8      i8Operand,
  [out] ULONG_PTR *pulResult
);

NTSTATUS RtlInt8ToUShort(
  [in]  INT8   i8Operand,
  [out] USHORT *pusResult
);

NTSTATUS RtlIntAdd(
  [in]  INT iAugend,
  [in]  INT iAddend,
  [out] INT *piResult
);

NTSTATUS RtlIntMult(
  [in]  INT iMultiplicand,
  [in]  INT iMultiplier,
  [out] INT *piResult
);

NTSTATUS RtlIntPtrAdd(
  [in]  INT_PTR iAugend,
  [in]  INT_PTR iAddend,
  [out] INT_PTR *piResult
);

NTSTATUS RtlIntPtrMult(
  [in]  INT_PTR iMultiplicand,
  [in]  INT_PTR iMultiplier,
  [out] INT_PTR *piResult
);

NTSTATUS RtlIntPtrSub(
  [in]  INT_PTR iMinuend,
  [in]  INT_PTR iSubtrahend,
  [out] INT_PTR *piResult
);

NTSTATUS RtlIntPtrToChar(
  [in]  INT_PTR iOperand,
  [out] CHAR    *pch
);

NTSTATUS RtlIntPtrToChar(
  [in]  INT_PTR iOperand,
  [out] CHAR    *pch
);

NTSTATUS RtlIntPtrToInt8(
  [in]  INT_PTR iOperand,
  [out] INT8    *pi8Result
);

NTSTATUS RtlIntPtrToLong(
  [in]  INT_PTR iOperand,
  [out] LONG    *plResult
);

NTSTATUS RtlIntPtrToLongPtr(
  [in]  INT_PTR  iOperand,
  [out] LONG_PTR *plResult
);

NTSTATUS RtlIntPtrToShort(
  [in]  INT_PTR iOperand,
  [out] SHORT   *psResult
);

NTSTATUS RtlIntPtrToUChar(
  [in]  INT_PTR iOperand,
  [out] UCHAR   *pch
);

NTSTATUS RtlIntPtrToUInt(
  [in]  INT_PTR iOperand,
  [out] UINT    *puResult
);

NTSTATUS RtlIntPtrToUInt8(
  [in]  INT_PTR iOperand,
  [out] UINT8   *pui8Result
);

NTSTATUS RtlIntPtrToUIntPtr(
  [in]  INT_PTR  iOperand,
  [out] UINT_PTR *puResult
);

NTSTATUS RtlIntPtrToULong(
  [in]  INT_PTR iOperand,
  [out] ULONG   *pulResult
);

NTSTATUS RtlIntPtrToULongLong(
  [in]  INT_PTR   iOperand,
  [out] ULONGLONG *pullResult
);

NTSTATUS RtlIntPtrToULongPtr(
  [in]  INT_PTR   iOperand,
  [out] ULONG_PTR *pulResult
);

NTSTATUS RtlIntPtrToUShort(
  [in]  INT_PTR iOperand,
  [out] USHORT  *pusResult
);

NTSTATUS RtlIntSub(
  [in] INT iMinuend,
  [in] INT iSubtrahend,
       INT *piResult
);

NTSTATUS RtlIntToChar(
  [in]  INT  iOperand,
  [out] CHAR *pch
);

NTSTATUS RtlIntToInt8(
  [in]  INT  iOperand,
  [out] INT8 *pi8Result
);


NTSTATUS RtlIntToShort(
  [in]  INT   iOperand,
  [out] SHORT *psResult
);

NTSTATUS RtlIntToUChar(
  [in]  INT   iOperand,
  [out] UCHAR *pch
);

NTSTATUS RtlIntToUInt(
  [in]  INT  iOperand,
  [out] UINT *puResult
);

NTSTATUS RtlIntToUInt8(
  [in]  INT   iOperand,
  [out] UINT8 *pui8Result
);

NTSTATUS RtlIntToULong(
  [in]  INT   iOperand,
  [out] ULONG *pulResult
);

NTSTATUS RtlIntToULongLong(
  [in]  INT       iOperand,
  [out] ULONGLONG *pullResult
);

NTSTATUS RtlIntToUShort(
  [in]  INT    iOperand,
  [out] USHORT *pusResult
);

NTSTATUS RtlLongAdd(
  [in]  LONG lAugend,
  [in]  LONG lAddend,
  [out] LONG *plResult
);

NTSTATUS RtlLongLongAdd(
  [in]  LONGLONG llAugend,
  [in]  LONGLONG llAddend,
  [out] LONGLONG *pllResult
);

NTSTATUS RtlLongLongMult(
  [in]  LONGLONG llMultiplicand,
  [in]  LONGLONG llMultiplier,
  [out] LONGLONG *pllResult
);

NTSTATUS RtlLongLongSub(
  [in]  LONGLONG llMinuend,
  [in]  LONGLONG llSubtrahend,
  [out] LONGLONG *pllResult
);

NTSTATUS RtlLongLongToChar(
  [in]  LONGLONG llOperand,
  [out] CHAR     *pch
);

NTSTATUS RtlLongLongToInt(
  [in]  LONGLONG llOperand,
  [out] INT      *piResult
);

NTSTATUS RtlLongLongToInt8(
  [in]  LONGLONG llOperand,
  [out] INT8     *pi8Result
);

NTSTATUS RtlLongLongToIntPtr(
  [in]  LONGLONG llOperand,
  [out] INT_PTR  *piResult
);

NTSTATUS RtlLongLongToLong(
  [in]  LONGLONG llOperand,
  [out] LONG     *plResult
);

NTSTATUS RtlLongLongToLongPtr(
  [in]  LONGLONG llOperand,
  [out] LONG_PTR *plResult
);

NTSTATUS RtlLongLongToShort(
  [in]  LONGLONG llOperand,
  [out] SHORT    *psResult
);

NTSTATUS RtlLongLongToUChar(
  [in]  LONGLONG llOperand,
  [out] UCHAR    *pch
);

NTSTATUS RtlLongLongToUInt(
  [in]  LONGLONG llOperand,
  [out] UINT     *puResult
);

NTSTATUS RtlLongLongToUInt8(
  [in]  LONGLONG llOperand,
  [out] UINT8    *pu8Result
);

NTSTATUS RtlLongLongToULong(
  [in]  LONGLONG llOperand,
  [out] ULONG    *pulResult
)
;NTSTATUS RtlLongLongToULongLong(
  [in]  LONGLONG  llOperand,
  [out] ULONGLONG *pullResult
);

NTSTATUS RtlLongLongToUShort(
  [in]  LONGLONG llOperand,
  [out] USHORT   *pusResult
);

NTSTATUS RtlLongMult(
  [in]  LONG lMultiplicand,
  [in]  LONG lMultiplier,
  [out] LONG *plResult
);

NTSTATUS RtlLongPtrAdd(
  LONG_PTR lAugend,
  LONG_PTR lAddend,
  LONG_PTR *plResult
);

NTSTATUS RtlLongPtrMult(
  [in]  LONG_PTR lMultiplicand,
  [in]  LONG_PTR lMultiplier,
  [out] LONG_PTR *plResult
);

NTSTATUS RtlLongPtrSub(
  [in]  LONG_PTR lMinuend,
  [in]  LONG_PTR lSubtrahend,
  [out] LONG_PTR *plResult
);

NTSTATUS RtlLongPtrToChar(
  [in]  LONG_PTR lOperand,
  [out] CHAR     *pch
);

NTSTATUS RtlLongPtrToInt(
  [in]  LONG_PTR lOperand,
  [out] INT      *piResult
);

NTSTATUS RtlLongPtrToInt8(
  [in]  LONG_PTR lOperand,
  [out] INT8     *pi8Result
);

NTSTATUS RtlLongPtrToIntPtr(
  [in]  LONG_PTR lOperand,
  [out] INT_PTR  *piResult
);

NTSTATUS RtlLongPtrToLong(
  [in]  LONG_PTR lOperand,
  [out] LONG     *plResult
);

NTSTATUS RtlLongPtrToShort(
  [in]  LONG_PTR lOperand,
  [out] SHORT    *psResult
);

NTSTATUS RtlLongPtrToUChar(
  [in]  LONG_PTR lOperand,
  [out] UCHAR    *pch
);

NTSTATUS RtlLongPtrToUInt(
  [in]  LONG_PTR lOperand,
  [out] UINT     *puResult
);

NTSTATUS RtlLongPtrToUInt8(
  [in]  LONG_PTR lOperand,
  [out] UINT8    *pui8Result
);

NTSTATUS RtlLongPtrToUIntPtr(
  [in]  LONG_PTR lOperand,
  [out] UINT_PTR *puResult
);
NTSTATUS RtlLongPtrToULong(
  [in]  LONG_PTR lOperand,
  [out] ULONG    *pulResult
);

NTSTATUS RtlLongPtrToULongLong(
  [in]  LONG_PTR  lOperand,
  [out] ULONGLONG *pullResult
);

NTSTATUS RtlLongPtrToULongPtr(
  [in]  LONG_PTR  lOperand,
  [out] ULONG_PTR *pulResult
);

NTSTATUS RtlLongPtrToUShort(
  [in]  LONG_PTR lOperand,
  [out] USHORT   *pusResult
);

NTSTATUS RtlLongSub(
  [in]  LONG lMinuend,
  [in]  LONG lSubtrahend,
  [out] LONG *plResult
);

NTSTATUS RtlLongToChar(
  [in]  LONG lOperand,
  [out] CHAR *pch
);

NTSTATUS RtlLongToInt(
  [in]  LONG lOperand,
  [out] INT  *piResult
);

NTSTATUS RtlLongToInt8(
  [in]  LONG lOperand,
  [out] INT8 *pi8Result
);

NTSTATUS RtlLongToIntPtr(
  [in]  LONG    lOperand,
  [out] INT_PTR *piResult
);

NTSTATUS RtlLongToShort(
  [in]  LONG  lOperand,
  [out] SHORT *psResult
);

NTSTATUS RtlLongToUChar(
  [in]  LONG  lOperand,
  [out] UCHAR *pch
);


NTSTATUS RtlLongToUInt(
  [in]  LONG lOperand,
  [out] UINT *puResult
);

NTSTATUS RtlLongToUInt8(
  LONG  lOperand,
  UINT8 *pui8Result
);

NTSTATUS RtlLongToUIntPtr(
  [in]  LONG     lOperand,
  [out] UINT_PTR *puResult
);

NTSTATUS RtlLongToULong(
  [in]  LONG  lOperand,
  [out] ULONG *pulResult
);

NTSTATUS RtlLongToULongLong(
  [in]  LONG      lOperand,
  [out] ULONGLONG *pullResult
);

NTSTATUS RtlLongToULongPtr(
  LONG      lOperand,
  ULONG_PTR *pulResult
);

NTSTATUS RtlLongToUShort(
  [in]  LONG   lOperand,
  [out] USHORT *pusResult
);

NTSTATUS RtlPtrdiffTAdd(
  [in]  ptrdiff_t Augend,
  [in]  ptrdiff_t Addend,
  [out] ptrdiff_t *pResult
);

NTSTATUS RtlPtrdiffTMult(
  [in]  ptrdiff_t Multiplicand,
  [in]  ptrdiff_t Multiplier,
  [out] ptrdiff_t *pResult
);

NTSTATUS RtlPtrdiffTSub(
  [in]  ptrdiff_t Minuend,
  [in]  ptrdiff_t Subtrahend,
  [out] ptrdiff_t *pResult
);

NTSTATUS RtlShortAdd(
  [in]  SHORT sAugend,
  [in]  SHORT sAddend,
  [out] SHORT *psResult
);

NTSTATUS RtlShortMult(
  [in]  SHORT sMultiplicand,
  [in]  SHORT sMultiplier,
  [out] SHORT *psResult
);

NTSTATUS RtlShortSub(
  [in]  SHORT sMinuend,
  [in]  SHORT sSubtrahend,
  [out] SHORT *psResult
);

NTSTATUS RtlShortToChar(
  [in]  SHORT sOperand,
  [out] CHAR  *pch
);

NTSTATUS RtlShortToDWordPtr(
  [in]  SHORT     sOperand,
  [out] DWORD_PTR *pdwResult
);

NTSTATUS RtlShortToInt8(
  [in]  SHORT sOperand,
  [out] INT8  *pi8Result
);

NTSTATUS RtlShortToUChar(
  [in]  SHORT sOperand,
  [out] UCHAR *pch
);

NTSTATUS RtlShortToUInt(
  [in]  SHORT sOperand,
  [out] UINT  *puResult
);

NTSTATUS RtlShortToUInt8(
  [in] SHORT sOperand,
       UINT8 *pui8Result
);

NTSTATUS RtlShortToUIntPtr(
  [in]  SHORT    sOperand,
  [out] UINT_PTR *puResult
);

NTSTATUS RtlShortToULong(
  [in]  SHORT sOperand,
  [out] ULONG *pulResult
);

NTSTATUS RtlShortToULongLong(
  [in]  SHORT     sOperand,
  [out] ULONGLONG *pullResult
);

NTSTATUS RtlShortToULongPtr(
  [in]  SHORT     sOperand,
  [out] ULONG_PTR *pulResult
);

NTSTATUS RtlShortToUShort(
  [in]  SHORT  sOperand,
  [out] USHORT *pusResult
);

NTSTATUS RtlSizeTAdd(
  [in]  size_t Augend,
  [in]  size_t Addend,
  [out] size_t *pResult
);

NTSTATUS RtlSizeTMult(
  [in]  size_t Multiplicand,
  [in]  size_t Multiplier,
  [out] size_t *pResult
);

NTSTATUS RtlSizeTSub(
  [in]  size_t Minuend,
  [in]  size_t Subtrahend,
  [out] size_t *pResult
);

NTSTATUS RtlSSIZETAdd(
  [in]  SSIZE_T Augend,
  [in]  SSIZE_T Addend,
  [out] SSIZE_T *pResult
);

NTSTATUS RtlSSIZETMult(
  [in]  SSIZE_T Multiplicand,
  [in]  SSIZE_T Multiplier,
  [out] SSIZE_T *pResult
);

NTSTATUS RtlSSIZETSub(
  [in]  SSIZE_T Minuend,
  [in]  SSIZE_T Subtrahend,
  [out] SSIZE_T *pResult
);

NTSTATUS RtlUInt8Add(
  [in]  UINT8 u8Augend,
  [in]  UINT8 u8Addend,
  [out] UINT8 *pu8Result
);

NTSTATUS RtlUInt8Mult(
  [in]  UINT8 u8Multiplicand,
  [in]  UINT8 u8Multiplier,
  [out] UINT8 *pu8Result
);

NTSTATUS RtlUInt8Sub(
  [in]  UINT8 u8Minuend,
  [in]  UINT8 u8Subtrahend,
  [out] UINT8 *pu8Result
);

NTSTATUS RtlUInt8ToChar(
  [in]  UINT8 u8Operand,
  [out] CHAR  *pch
);

NTSTATUS RtlUInt8ToInt8(
  [in]  UINT8 u8Operand,
  [out] INT8  *pi8Result
);

NTSTATUS RtlUIntAdd(
  [in]  UINT uAugend,
  [in]  UINT uAddend,
  [out] UINT *puResult
);

NTSTATUS RtlUIntMult(
  [in]  UINT uMultiplicand,
  [in]  UINT uMultiplier,
  [out] UINT *puResult
);

NTSTATUS RtlUIntPtrAdd(
  [in]  UINT_PTR uAugend,
  [in]  UINT_PTR uAddend,
  [out] UINT_PTR *puResult
);

NTSTATUS RtlUIntPtrMult(
  [in]  UINT_PTR uMultiplicand,
  [in]  UINT_PTR uMultiplier,
  [out] UINT_PTR *puResult
);

NTSTATUS RtlUIntPtrSub(
  [in]  UINT_PTR uMinuend,
  [in]  UINT_PTR uSubtrahend,
  [out] UINT_PTR *puResult
);

NTSTATUS RtlUIntPtrToChar(
  UINT_PTR uOperand,
  CHAR     *pch
);

NTSTATUS RtlUIntPtrToInt(
  [in]  UINT_PTR uOperand,
  [out] INT      *piResult
);

NTSTATUS RtlUIntPtrToInt16(
  [in]  UINT_PTR uOperand,
  [out] INT16    *pi16Result
);

NTSTATUS RtlUIntPtrToInt8(
  [in]  UINT_PTR uOperand,
  [out] INT8     *pi8Result
);

NTSTATUS RtlUIntPtrToIntPtr(
  [in]  UINT_PTR uOperand,
  [out] INT_PTR  *piResult
);

NTSTATUS RtlUIntPtrToLong(
        UINT_PTR uOperand,
  [out] LONG     *plResult
);

NTSTATUS RtlUIntPtrToLongLong(
  [in]  UINT_PTR uOperand,
  [out] LONGLONG *pllResult
);

NTSTATUS RtlUIntPtrToLongPtr(
  [in]  UINT_PTR uOperand,
  [out] LONG_PTR *plResult
);

NTSTATUS RtlUIntPtrToShort(
  [in]  UINT_PTR uOperand,
  [out] SHORT    *psResult
);

NTSTATUS RtlUIntPtrToUChar(
  [in]  UINT_PTR uOperand,
  [out] UCHAR    *pch
);

NTSTATUS RtlUIntPtrToUInt(
        UINT_PTR uOperand,
  [out] UINT     *puResult
);

NTSTATUS RtlUIntPtrToUInt16(
  [in]  UINT_PTR uOperand,
  [out] UINT16   *pu16Result
);

NTSTATUS RtlUIntPtrToUInt8(
  [in]  UINT_PTR uOperand,
  [out] UINT8    *pu8Result
);

NTSTATUS RtlUIntPtrToULong(
  [in]  UINT_PTR uOperand,
  [out] ULONG    *pulResult
);

NTSTATUS RtlUIntPtrToUShort(
  [in]  UINT_PTR uOperand,
  [out] USHORT   *pusResult
);

NTSTATUS RtlUIntSub(
  [in]  UINT uMinuend,
  [in]  UINT uSubtrahend,
  [out] UINT *puResult
);

NTSTATUS RtlUIntToChar(
  [in]  UINT uOperand,
  [out] CHAR *pch
);

NTSTATUS RtlUIntToInt(
  [in]  UINT uOperand,
  [out] INT  *piResult
);

NTSTATUS RtlUIntToInt8(
  [in]  UINT uOperand,
  [out] INT8 *pi8Result
);

NTSTATUS RtlUIntToIntPtr(
  [in]  UINT    uOperand,
  [out] INT_PTR *piResult
);

NTSTATUS RtlUIntToLong(
  [in]  UINT uOperand,
  [out] LONG *plResult
);

NTSTATUS RtlUIntToLongPtr(
  [in]  UINT     uOperand,
  [out] LONG_PTR *plResult
);

NTSTATUS RtlUIntToShort(
  [in]  UINT  uOperand,
  [out] SHORT *psResult
);

NTSTATUS RtlUIntToUChar(
  [in]  UINT  uOperand,
  [out] UCHAR *pch
);

NTSTATUS RtlUIntToUInt8(
  [in]  UINT  uOperand,
  [out] UINT8 *pui8Result
);

NTSTATUS RtlUIntToUShort(
  [in]  UINT   uOperand,
  [out] USHORT *pusResult
);

NTSTATUS RtlULongAdd(
  [in]  ULONG ulAugend,
  [in]  ULONG ulAddend,
  [out] ULONG *pulResult
);

NTSTATUS RtlULongLongAdd(
  [in] ULONGLONG ullAugend,
  [in] ULONGLONG ullAddend,
       ULONGLONG *pullResult
);

NTSTATUS RtlULongLongMult(
  [in]  ULONGLONG ullMultiplicand,
  [in]  ULONGLONG ullMultiplier,
  [out] ULONGLONG *pullResult
);

NTSTATUS RtlULongLongSub(
  [in]  ULONGLONG ullMinuend,
  [in]  ULONGLONG ullSubtrahend,
  [out] ULONGLONG *pullResult
);

NTSTATUS RtlULongLongToChar(
  [in]  ULONGLONG ullOperand,
  [out] CHAR      *pch
);

NTSTATUS RtlULongLongToInt(
  [in]  ULONGLONG ullOperand,
  [out] INT       *piResult
);

NTSTATUS RtlULongLongToInt8(
  [in]  ULONGLONG ullOperand,
  [out] INT8      *pi8Result
);

NTSTATUS RtlULongLongToLong(
  [in]  ULONGLONG ullOperand,
  [out] LONG      *plResult
);

NTSTATUS RtlULongLongToLongLong(
  [in]  ULONGLONG ullOperand,
  [out] LONGLONG  *pllResult
);

NTSTATUS RtlULongLongToLongPtr(
  [in]  ULONGLONG ullOperand,
  [out] LONG_PTR  *plResult
);

NTSTATUS RtlULongLongToShort(
  [in]  ULONGLONG ullOperand,
  [out] SHORT     *psResult
);

NTSTATUS RtlULongLongToUChar(
  [in]  ULONGLONG ullOperand,
  [out] UCHAR     *pch
);

NTSTATUS RtlULongLongToUInt(
  [in]  ULONGLONG ullOperand,
  [out] UINT      *puResult
);

NTSTATUS RtlULongLongToUInt8(
  [in]  ULONGLONG ullOperand,
  [out] UINT8     *pu8Result
);

NTSTATUS RtlULongLongToUIntPtr(
  [in]  ULONGLONG ullOperand,
  [out] UINT_PTR  *puResult
);

NTSTATUS RtlULongLongToULong(
  [in] ULONGLONG ullOperand,
       ULONG     *pulResult
);

NTSTATUS RtlULongLongToULongPtr(
  [in] ULONGLONG ullOperand,
       ULONG_PTR *pulResult
);

NTSTATUS RtlULongLongToUShort(
  [in]  ULONGLONG ullOperand,
  [out] USHORT    *pusResult
);

NTSTATUS RtlULongMult(
  [in]  ULONG ulMultiplicand,
  [in]  ULONG ulMultiplier,
  [out] ULONG *pulResult
);

NTSTATUS RtlULongPtrAdd(
  [in]  ULONG_PTR ulAugend,
  [in]  ULONG_PTR ulAddend,
  [out] ULONG_PTR *pulResult
);

NTSTATUS RtlULongPtrMult(
  ULONG_PTR ulMultiplicand,
  ULONG_PTR ulMultiplier,
  ULONG_PTR *pulResult
);

NTSTATUS RtlULongPtrSub(
  [in]  ULONG_PTR ulMinuend,
  [in]  ULONG_PTR ulSubtrahend,
  [out] ULONG_PTR *pulResult
);

NTSTATUS RtlULongPtrToChar(
  [in]  ULONG_PTR ulOperand,
  [out] CHAR      *pch
);

NTSTATUS RtlULongPtrToInt(
  [in]  ULONG_PTR ulOperand,
  [out] INT       *piResult
);

NTSTATUS RtlULongPtrToInt8(
  [in]  ULONG_PTR ulOperand,
  [out] INT8      *pi8Result
);

NTSTATUS RtlULongPtrToIntPtr(
  [in]  ULONG_PTR ulOperand,
  [out] INT_PTR   *piResult
);

NTSTATUS RtlULongPtrToLong(
  [in]  ULONG_PTR ulOperand,
  [out] LONG      *plResult
);

NTSTATUS RtlULongPtrToLongLong(
  [in]  ULONG_PTR ulOperand,
  [out] LONGLONG  *pllResult
);

NTSTATUS RtlULongPtrToLongPtr(
  [in]  ULONG_PTR ulOperand,
  [out] LONG_PTR  *plResult
);

NTSTATUS RtlULongPtrToShort(
  [in]  ULONG_PTR ulOperand,
  [out] SHORT     *psResult
);

NTSTATUS RtlULongPtrToShort(
  [in]  ULONG_PTR ulOperand,
  [out] SHORT     *psResult
);

NTSTATUS RtlULongPtrToUInt(
  [in]  ULONG_PTR ulOperand,
  [out] UINT      *puResult
);

NTSTATUS RtlULongPtrToUInt8(
  [in]  ULONG_PTR ulOperand,
  [out] UINT8     *pui8Result
);

NTSTATUS RtlULongPtrToUIntPtr(
  [in]  ULONG_PTR ulOperand,
  [out] UINT_PTR  *puResult
);

NTSTATUS RtlULongPtrToULong(
  [in]  ULONG_PTR ulOperand,
  [out] ULONG     *pulResult
);

NTSTATUS RtlULongPtrToUShort(
  [in]  ULONG_PTR ulOperand,
  [out] USHORT    *pusResult
);

NTSTATUS RtlULongSub(
  [in]  ULONG ulMinuend,
  [in]  ULONG ulSubtrahend,
  [out] ULONG *pulResult
);

NTSTATUS RtlULongToChar(
  [in]  ULONG ulOperand,
  [out] CHAR  *pch
);

NTSTATUS RtlULongToInt(
  [in]  ULONG ulOperand,
  [out] INT   *piResult
);

NTSTATUS RtlULongToInt8(
  [in]  ULONG ulOperand,
  [out] INT8  *pi8Result
);

NTSTATUS RtlULongToIntPtr(
  [in]  ULONG   ulOperand,
  [out] INT_PTR *piResult
);

NTSTATUS RtlULongToLong(
  [in]  ULONG ulOperand,
  [out] LONG  *plResult
);

NTSTATUS RtlULongToLongPtr(
  [in]  ULONG    ulOperand,
  [out] LONG_PTR *plResult
);

NTSTATUS RtlULongToShort(
  [in]  ULONG ulOperand,
  [out] SHORT *psResult
);

NTSTATUS RtlULongToUChar(
  [in]  ULONG ulOperand,
  [out] UCHAR *pch
);

NTSTATUS RtlULongToUInt(
  [in]  ULONG ulOperand,
  [out] UINT  *puResult
);

NTSTATUS RtlULongToUInt8(
  [in]  ULONG ulOperand,
  [out] UINT8 *pui8Result
);

NTSTATUS RtlULongToUIntPtr(
  [in]  ULONG    ulOperand,
  [out] UINT_PTR *puiResult
);

NTSTATUS RtlULongToUShort(
  [in]  ULONG  ulOperand,
  [out] USHORT *pusResult
);

NTSTATUS RtlUShortAdd(
  [in]  USHORT usAugend,
  [in]  USHORT usAddend,
  [out] USHORT *pusResult
);

NTSTATUS RtlUShortAdd(
  [in]  USHORT usAugend,
  [in]  USHORT usAddend,
  [out] USHORT *pusResult
);

NTSTATUS RtlUShortMult(
  [in]  USHORT usMultiplicand,
  [in]  USHORT usMultiplier,
  [out] USHORT *pusResult
);

NTSTATUS RtlUShortSub(
  [in]  USHORT usMinuend,
  [in]  USHORT usSubtrahend,
  [out] USHORT *pusResult
);

NTSTATUS RtlUShortToChar(
  [in]  USHORT usOperand,
  [out] CHAR   *pch
);

NTSTATUS RtlUShortToInt8(
  [in]  USHORT usOperand,
  [out] INT8   *pi8Result
);

NTSTATUS RtlUShortToShort(
  [in]  USHORT usOperand,
  [out] SHORT  *psResult
);

NTSTATUS RtlUShortToUChar(
  [in]  USHORT usOperand,
  [out] UCHAR  *pch
);

NTSTATUS RtlUShortToUInt8(
  [in]  USHORT usOperand,
  [out] UINT8  *pui8Result
);

*/

#endif