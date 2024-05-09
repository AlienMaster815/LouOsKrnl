#ifndef NTSTRSAFE_H
#define NTSTRSAFE_H

/*

NTSTRSAFEDDI RtlStringCbCatA(
  [in, out] NTSTRSAFE_PSTR  pszDest,
  [in]      size_t          cbDest,
  [in]      NTSTRSAFE_PCSTR pszSrc
);

NTSTRSAFEDDI RtlStringCbCatExA(
  [in, out, optional] NTSTRSAFE_PSTR  pszDest,
  [in]                size_t          cbDest,
  [in, optional]      NTSTRSAFE_PCSTR pszSrc,
  [out, optional]     NTSTRSAFE_PSTR  *ppszDestEnd,
  [out, optional]     size_t          *pcbRemaining,
  [in]                DWORD           dwFlags
);


NTSTRSAFEDDI RtlStringCbCatExW(
  [in, out, optional] NTSTRSAFE_PWSTR  pszDest,
  [in]                size_t           cbDest,
  [in, optional]      NTSTRSAFE_PCWSTR pszSrc,
  [out, optional]     NTSTRSAFE_PWSTR  *ppszDestEnd,
  [out, optional]     size_t           *pcbRemaining,
  [in]                DWORD            dwFlags
);

NTSTRSAFEDDI RtlStringCbCatNA(
  [in, out] NTSTRSAFE_PSTR pszDest,
  [in]      size_t         cbDest,
  [in]      STRSAFE_PCNZCH pszSrc,
            size_t         cbToAppend
);

NTSTRSAFEDDI RtlStringCbCatNExA(
  [in, out, optional] NTSTRSAFE_PSTR pszDest,
  [in]                size_t         cbDest,
  [in, optional]      STRSAFE_PCNZCH pszSrc,
                      size_t         cbToAppend,
  [out, optional]     NTSTRSAFE_PSTR *ppszDestEnd,
  [out, optional]     size_t         *pcbRemaining,
  [in]                DWORD          dwFlags
);

NTSTRSAFEDDI RtlStringCbCatNExW(
  [in, out, optional] NTSTRSAFE_PWSTR pszDest,
  [in]                size_t          cbDest,
  [in, optional]      STRSAFE_PCNZWCH pszSrc,
                      size_t          cbToAppend,
  [out, optional]     NTSTRSAFE_PWSTR *ppszDestEnd,
  [out, optional]     size_t          *pcbRemaining,
  [in]                DWORD           dwFlags
);

NTSTRSAFEDDI RtlStringCbCatNW(
  [in, out] NTSTRSAFE_PWSTR pszDest,
  [in]      size_t          cbDest,
  [in]      STRSAFE_PCNZWCH pszSrc,
            size_t          cbToAppend
);

NTSTRSAFEDDI RtlStringCbCatW(
  [in, out] NTSTRSAFE_PWSTR  pszDest,
  [in]      size_t           cbDest,
  [in]      NTSTRSAFE_PCWSTR pszSrc
);

NTSTRSAFEDDI RtlStringCbCopyA(
  [out] NTSTRSAFE_PSTR  pszDest,
  [in]  size_t          cbDest,
  [in]  NTSTRSAFE_PCSTR pszSrc
);

NTSTRSAFEDDI RtlStringCbCopyExA(
  [out, optional] NTSTRSAFE_PSTR  pszDest,
  [in]            size_t          cbDest,
  [in, optional]  NTSTRSAFE_PCSTR pszSrc,
  [out, optional] NTSTRSAFE_PSTR  *ppszDestEnd,
  [out, optional] size_t          *pcbRemaining,
  [in]            DWORD           dwFlags
);

NTSTRSAFEDDI RtlStringCbCopyExW(
  [out, optional] NTSTRSAFE_PWSTR  pszDest,
  [in]            size_t           cbDest,
  [in, optional]  NTSTRSAFE_PCWSTR pszSrc,
  [out, optional] NTSTRSAFE_PWSTR  *ppszDestEnd,
  [out, optional] size_t           *pcbRemaining,
  [in]            DWORD            dwFlags
);

NTSTRSAFEDDI RtlStringCbCopyNA(
  [out] NTSTRSAFE_PSTR pszDest,
  [in]  size_t         cbDest,
  [in]  STRSAFE_PCNZCH pszSrc,
        size_t         cbToCopy
);

NTSTRSAFEDDI RtlStringCbCopyNExA(
  [out, optional] NTSTRSAFE_PSTR pszDest,
  [in]            size_t         cbDest,
  [in, optional]  STRSAFE_PCNZCH pszSrc,
                  size_t         cbToCopy,
  [out, optional] NTSTRSAFE_PSTR *ppszDestEnd,
  [out, optional] size_t         *pcbRemaining,
  [in]            DWORD          dwFlags
);

NTSTRSAFEDDI RtlStringCbCopyNExW(
  [out, optional] NTSTRSAFE_PWSTR pszDest,
  [in]            size_t          cbDest,
  [in, optional]  STRSAFE_PCNZWCH pszSrc,
                  size_t          cbToCopy,
  [out, optional] NTSTRSAFE_PWSTR *ppszDestEnd,
  [out, optional] size_t          *pcbRemaining,
  [in]            DWORD           dwFlags
);

NTSTRSAFEDDI RtlStringCbCopyNW(
  [out] NTSTRSAFE_PWSTR pszDest,
  [in]  size_t          cbDest,
  [in]  STRSAFE_PCNZWCH pszSrc,
        size_t          cbToCopy
);

NTSTRSAFEDDI RtlStringCbCopyUnicodeString(
  [out] NTSTRSAFE_PWSTR  pszDest,
  [in]  size_t           cbDest,
  [in]  PCUNICODE_STRING SourceString
);

NTSTRSAFEDDI RtlStringCbCopyUnicodeStringEx(
  [out]           NTSTRSAFE_PWSTR  pszDest,
  [in]            size_t           cbDest,
  [in]            PCUNICODE_STRING SourceString,
  [out]           NTSTRSAFE_PWSTR  *ppszDestEnd,
  [out, optional] size_t           *pcbRemaining,
  [in]            DWORD            dwFlags
);

NTSTRSAFEDDI RtlStringCbCopyW(
  [out] NTSTRSAFE_PWSTR  pszDest,
  [in]  size_t           cbDest,
  [in]  NTSTRSAFE_PCWSTR pszSrc
);

NTSTRSAFEDDI RtlStringCbLengthA(
  [in] STRSAFE_PCNZCH psz,
  [in] size_t         cbMax,
       size_t         *pcbLength
);

NTSTRSAFEDDI RtlStringCbLengthW(
  [in] STRSAFE_PCNZWCH psz,
  [in] size_t          cbMax,
       size_t          *pcbLength
);



NTSTRSAFEDDI RtlStringCbPrintfA(
  [out] NTSTRSAFE_PSTR  pszDest,
  [in]  size_t          cbDest,
  [in]  NTSTRSAFE_PCSTR pszFormat,
        ...
);

NTSTRSAFEDDI RtlStringCbPrintfExA(
  [out, optional] NTSTRSAFE_PSTR  pszDest,
  [in]            size_t          cbDest,
  [out, optional] NTSTRSAFE_PSTR  *ppszDestEnd,
  [out, optional] size_t          *pcbRemaining,
  [in]            DWORD           dwFlags,
  [in, optional]  NTSTRSAFE_PCSTR pszFormat,
                  ...
);

NTSTRSAFEDDI RtlStringCbPrintfExW(
  [out, optional] NTSTRSAFE_PWSTR  pszDest,
  [in]            size_t           cbDest,
  [out, optional] NTSTRSAFE_PWSTR  *ppszDestEnd,
  [out, optional] size_t           *pcbRemaining,
  [in]            DWORD            dwFlags,
  [in, optional]  NTSTRSAFE_PCWSTR pszFormat,
                  ...
);

NTSTRSAFEDDI RtlStringCbPrintfW(
  [out] NTSTRSAFE_PWSTR  pszDest,
  [in]  size_t           cbDest,
  [in]  NTSTRSAFE_PCWSTR pszFormat,
        ...
);

NTSTRSAFEDDI RtlStringCbVPrintfA(
  [out] NTSTRSAFE_PSTR  pszDest,
  [in]  size_t          cbDest,
  [in]  NTSTRSAFE_PCSTR pszFormat,
  [in]  va_list         argList
);

NTSTRSAFEDDI RtlStringCbVPrintfExA(
  [out, optional] NTSTRSAFE_PSTR  pszDest,
  [in]            size_t          cbDest,
  [out, optional] NTSTRSAFE_PSTR  *ppszDestEnd,
  [out, optional] size_t          *pcbRemaining,
  [in]            DWORD           dwFlags,
  [in, optional]  NTSTRSAFE_PCSTR pszFormat,
  [in]            va_list         argList
);

NTSTRSAFEDDI RtlStringCbVPrintfExW(
  [out, optional] NTSTRSAFE_PWSTR  pszDest,
  [in]            size_t           cbDest,
  [out, optional] NTSTRSAFE_PWSTR  *ppszDestEnd,
  [out, optional] size_t           *pcbRemaining,
  [in]            DWORD            dwFlags,
  [in, optional]  NTSTRSAFE_PCWSTR pszFormat,
  [in]            va_list          argList
);

NTSTRSAFEDDI RtlStringCbVPrintfW(
  [out] NTSTRSAFE_PWSTR  pszDest,
  [in]  size_t           cbDest,
  [in]  NTSTRSAFE_PCWSTR pszFormat,
  [in]  va_list          argList
);

NTSTRSAFEDDI RtlStringCchCatA(
  [in, out] NTSTRSAFE_PSTR  pszDest,
  [in]      size_t          cchDest,
  [in]      NTSTRSAFE_PCSTR pszSrc
);

NTSTRSAFEDDI RtlStringCchCatExA(
  [in, out, optional] NTSTRSAFE_PSTR  pszDest,
  [in]                size_t          cchDest,
  [in]                NTSTRSAFE_PCSTR pszSrc,
  [out, optional]     NTSTRSAFE_PSTR  *ppszDestEnd,
  [out, optional]     size_t          *pcchRemaining,
  [in]                DWORD           dwFlags
);

NTSTRSAFEDDI RtlStringCchCatExW(
  [in, out, optional] NTSTRSAFE_PWSTR  pszDest,
  [in]                size_t           cchDest,
  [in]                NTSTRSAFE_PCWSTR pszSrc,
  [out, optional]     NTSTRSAFE_PWSTR  *ppszDestEnd,
  [out, optional]     size_t           *pcchRemaining,
  [in]                DWORD            dwFlags
);

NTSTRSAFEDDI RtlStringCchCatNA(
  [in, out] NTSTRSAFE_PSTR pszDest,
  [in]      size_t         cchDest,
  [in]      STRSAFE_PCNZCH pszSrc,
            size_t         cchToAppend
);

NTSTRSAFEDDI RtlStringCchCatNExA(
  [in, out, optional] NTSTRSAFE_PSTR pszDest,
  [in]                size_t         cchDest,
  [in, optional]      STRSAFE_PCNZCH pszSrc,
                      size_t         cchToAppend,
  [out, optional]     NTSTRSAFE_PSTR *ppszDestEnd,
  [out, optional]     size_t         *pcchRemaining,
  [in]                DWORD          dwFlags
);

NTSTRSAFEDDI RtlStringCchCatNExW(
  [in, out, optional] NTSTRSAFE_PWSTR pszDest,
  [in]                size_t          cchDest,
  [in, optional]      STRSAFE_PCNZWCH pszSrc,
                      size_t          cchToAppend,
  [out, optional]     NTSTRSAFE_PWSTR *ppszDestEnd,
  [out, optional]     size_t          *pcchRemaining,
  [in]                DWORD           dwFlags
);

NTSTRSAFEDDI RtlStringCchCatNW(
  [in, out] NTSTRSAFE_PWSTR pszDest,
  [in]      size_t          cchDest,
  [in]      STRSAFE_PCNZWCH pszSrc,
            size_t          cchToAppend
);

NTSTRSAFEDDI RtlStringCchCatW(
  [in, out] NTSTRSAFE_PWSTR  pszDest,
  [in]      size_t           cchDest,
  [in]      NTSTRSAFE_PCWSTR pszSrc
);

NTSTRSAFEDDI RtlStringCchCopyA(
  [out] NTSTRSAFE_PSTR  pszDest,
  [in]  size_t          cchDest,
  [in]  NTSTRSAFE_PCSTR pszSrc
);

NTSTRSAFEDDI RtlStringCchCopyExA(
  [out, optional] NTSTRSAFE_PSTR  pszDest,
  [in]            size_t          cchDest,
  [in, optional]  NTSTRSAFE_PCSTR pszSrc,
  [out, optional] NTSTRSAFE_PSTR  *ppszDestEnd,
  [out, optional] size_t          *pcchRemaining,
  [in]            DWORD           dwFlags
);

NTSTRSAFEDDI RtlStringCchCopyExW(
  [out, optional] NTSTRSAFE_PWSTR  pszDest,
  [in]            size_t           cchDest,
  [in, optional]  NTSTRSAFE_PCWSTR pszSrc,
  [out, optional] NTSTRSAFE_PWSTR  *ppszDestEnd,
  [out, optional] size_t           *pcchRemaining,
  [in]            DWORD            dwFlags
);

NTSTRSAFEDDI RtlStringCchCopyNA(
  [out] NTSTRSAFE_PSTR pszDest,
  [in]  size_t         cchDest,
  [in]  STRSAFE_PCNZCH pszSrc,
        size_t         cchToCopy
);

NTSTRSAFEDDI RtlStringCchCopyNExA(
  [out, optional] NTSTRSAFE_PSTR pszDest,
  [in]            size_t         cchDest,
  [in, optional]  STRSAFE_PCNZCH pszSrc,
                  size_t         cchToCopy,
  [out, optional] NTSTRSAFE_PSTR *ppszDestEnd,
  [out, optional] size_t         *pcchRemaining,
  [in]            DWORD          dwFlags
);

NTSTRSAFEDDI RtlStringCchCopyNExW(
  [out, optional] NTSTRSAFE_PWSTR pszDest,
  [in]            size_t          cchDest,
  [in, optional]  STRSAFE_PCNZWCH pszSrc,
                  size_t          cchToCopy,
  [out, optional] NTSTRSAFE_PWSTR *ppszDestEnd,
  [out, optional] size_t          *pcchRemaining,
  [in]            DWORD           dwFlags
);

NTSTRSAFEDDI RtlStringCchCopyNW(
  [out] NTSTRSAFE_PWSTR pszDest,
  [in]  size_t          cchDest,
  [in]  STRSAFE_PCNZWCH pszSrc,
        size_t          cchToCopy
);

NTSTRSAFEDDI RtlStringCchCopyUnicodeString(
  [out] NTSTRSAFE_PWSTR  pszDest,
  [in]  size_t           cchDest,
  [in]  PCUNICODE_STRING SourceString
);

NTSTRSAFEDDI RtlStringCchCopyUnicodeStringEx(
  [out]           NTSTRSAFE_PWSTR  pszDest,
  [in]            size_t           cchDest,
  [in]            PCUNICODE_STRING SourceString,
  [out]           NTSTRSAFE_PWSTR  *ppszDestEnd,
  [out, optional] size_t           *pcchRemaining,
  [in]            DWORD            dwFlags
);

NTSTRSAFEDDI RtlStringCchCopyW(
  [out] NTSTRSAFE_PWSTR  pszDest,
  [in]  size_t           cchDest,
  [in]  NTSTRSAFE_PCWSTR pszSrc
);

NTSTRSAFEDDI RtlStringCchLengthA(
  [in] STRSAFE_PCNZCH psz,
  [in] size_t         cchMax,
       size_t         *pcchLength
);

NTSTRSAFEDDI RtlStringCchLengthW(
  [in] STRSAFE_PCNZWCH psz,
  [in] size_t          cchMax,
       size_t          *pcchLength
);

NTSTRSAFEDDI RtlStringCchPrintfA(
  [out] NTSTRSAFE_PSTR  pszDest,
  [in]  size_t          cchDest,
  [in]  NTSTRSAFE_PCSTR pszFormat,
        ...
);

NTSTRSAFEDDI RtlStringCchPrintfExA(
  [out, optional] NTSTRSAFE_PSTR  pszDest,
  [in]            size_t          cchDest,
  [out, optional] NTSTRSAFE_PSTR  *ppszDestEnd,
  [out, optional] size_t          *pcchRemaining,
  [in]            DWORD           dwFlags,
  [in]            NTSTRSAFE_PCSTR pszFormat,
                  ...
);

NTSTRSAFEDDI RtlStringCchPrintfExW(
  [out, optional] NTSTRSAFE_PWSTR  pszDest,
  [in]            size_t           cchDest,
  [out, optional] NTSTRSAFE_PWSTR  *ppszDestEnd,
  [out, optional] size_t           *pcchRemaining,
  [in]            DWORD            dwFlags,
  [in]            NTSTRSAFE_PCWSTR pszFormat,
                  ...
);

NTSTRSAFEDDI RtlStringCchPrintfW(
  [out] NTSTRSAFE_PWSTR  pszDest,
  [in]  size_t           cchDest,
  [in]  NTSTRSAFE_PCWSTR pszFormat,
        ...
);

NTSTRSAFEDDI RtlStringCchVPrintfA(
  [out] NTSTRSAFE_PSTR  pszDest,
  [in]  size_t          cchDest,
  [in]  NTSTRSAFE_PCSTR pszFormat,
  [in]  va_list         argList
);

NTSTRSAFEDDI RtlStringCchVPrintfExA(
  [out]           NTSTRSAFE_PSTR  pszDest,
  [in]            size_t          cchDest,
  [out, optional] NTSTRSAFE_PSTR  *ppszDestEnd,
  [out, optional] size_t          *pcchRemaining,
  [in]            DWORD           dwFlags,
  [in, optional]  NTSTRSAFE_PCSTR pszFormat,
  [in]            va_list         argList
);

NTSTRSAFEDDI RtlStringCchVPrintfExW(
  [out]           NTSTRSAFE_PWSTR  pszDest,
  [in]            size_t           cchDest,
  [out, optional] NTSTRSAFE_PWSTR  *ppszDestEnd,
  [out, optional] size_t           *pcchRemaining,
  [in]            DWORD            dwFlags,
  [in, optional]  NTSTRSAFE_PCWSTR pszFormat,
  [in]            va_list          argList
);

NTSTRSAFEDDI RtlStringCchVPrintfW(
  [out] NTSTRSAFE_PWSTR  pszDest,
  [in]  size_t           cchDest,
  [in]  NTSTRSAFE_PCWSTR pszFormat,
  [in]  va_list          argList
);

NTSTRSAFEDDI RtlUnalignedStringCbLengthW(
  [in]            STRSAFE_PCUNZWCH psz,
  [in]            size_t           cbMax,
  [out, optional] size_t           *pcbLength
);


NTSTRSAFEDDI RtlUnalignedStringCchLengthW(
  [in]            STRSAFE_PCUNZWCH psz,
  [in]            size_t           cchMax,
  [out, optional] size_t           *pcchLength
);

NTSTRSAFEDDI RtlUnicodeStringCat(
  [in, out] PUNICODE_STRING  DestinationString,
  [in]      PCUNICODE_STRING SourceString
);

NTSTRSAFEDDI RtlUnicodeStringCatEx(
  [in, out]       PUNICODE_STRING  DestinationString,
  [in]            PCUNICODE_STRING SourceString,
  [out, optional] PUNICODE_STRING  RemainingString,
  [in]            DWORD            dwFlags
);


NTSTRSAFEDDI RtlUnicodeStringCatString(
  [in, out] PUNICODE_STRING  DestinationString,
  [in]      NTSTRSAFE_PCWSTR pszSrc
);

NTSTRSAFEDDI RtlUnicodeStringCatStringEx(
  [in, out]       PUNICODE_STRING  DestinationString,
  [in]            NTSTRSAFE_PCWSTR pszSrc,
  [out, optional] PUNICODE_STRING  RemainingString,
  [in]            DWORD            dwFlags
);


NTSTRSAFEDDI RtlUnicodeStringCbCatN(
  [in, out] PUNICODE_STRING  DestinationString,
  [in]      PCUNICODE_STRING SourceString,
  [in]      size_t           cbToAppend
);


NTSTRSAFEDDI RtlUnicodeStringCbCatNEx(
  [in, out]       PUNICODE_STRING  DestinationString,
  [in]            PCUNICODE_STRING SourceString,
  [in]            size_t           cbToAppend,
  [out, optional] PUNICODE_STRING  RemainingString,
  [in]            DWORD            dwFlags
);


NTSTRSAFEDDI RtlUnicodeStringCbCatStringN(
  [in, out] PUNICODE_STRING  DestinationString,
  [in]      NTSTRSAFE_PCWSTR pszSrc,
  [in]      size_t           cbToAppend
);


NTSTRSAFEDDI RtlUnicodeStringCbCatStringNEx(
  [in, out]       PUNICODE_STRING  DestinationString,
  [in]            NTSTRSAFE_PCWSTR pszSrc,
  [in]            size_t           cbToAppend,
  [out, optional] PUNICODE_STRING  RemainingString,
  [in]            DWORD            dwFlags
);


NTSTRSAFEDDI RtlUnicodeStringCbCopyN(
  [out] PUNICODE_STRING  DestinationString,
  [in]  PCUNICODE_STRING SourceString,
  [in]  size_t           cbToCopy
);

NTSTRSAFEDDI RtlUnicodeStringCbCopyNEx(
  [out]           PUNICODE_STRING  DestinationString,
  [in]            PCUNICODE_STRING SourceString,
  [in]            size_t           cbToCopy,
  [out, optional] PUNICODE_STRING  RemainingString,
  [in]            DWORD            dwFlags
);

NTSTRSAFEDDI RtlUnicodeStringCbCopyStringN(
  [out] PUNICODE_STRING  DestinationString,
  [in]  NTSTRSAFE_PCWSTR pszSrc,
  [in]  size_t           cbToCopy
);

NTSTRSAFEDDI RtlUnicodeStringCbCopyStringNEx(
  [out]           PUNICODE_STRING  DestinationString,
  [in]            NTSTRSAFE_PCWSTR pszSrc,
  [in]            size_t           cbToCopy,
  [out, optional] PUNICODE_STRING  RemainingString,
  [in]            DWORD            dwFlags
);

NTSTRSAFEDDI RtlUnicodeStringCchCatN(
  [in, out] PUNICODE_STRING  DestinationString,
  [in]      PCUNICODE_STRING SourceString,
  [in]      size_t           cchToAppend
);

NTSTRSAFEDDI RtlUnicodeStringCchCatNEx(
  [in, out]       PUNICODE_STRING  DestinationString,
  [in]            PCUNICODE_STRING SourceString,
  [in]            size_t           cchToAppend,
  [out, optional] PUNICODE_STRING  RemainingString,
  [in]            DWORD            dwFlags
);

NTSTRSAFEDDI RtlUnicodeStringCchCatStringN(
  [in, out] PUNICODE_STRING  DestinationString,
  [in]      NTSTRSAFE_PCWSTR pszSrc,
  [in]      size_t           cchToAppend
);


NTSTRSAFEDDI RtlUnicodeStringCchCatStringNEx(
  [in, out]       PUNICODE_STRING  DestinationString,
  [in]            NTSTRSAFE_PCWSTR pszSrc,
  [in]            size_t           cchToAppend,
  [out, optional] PUNICODE_STRING  RemainingString,
  [in]            DWORD            dwFlags
);


NTSTRSAFEDDI RtlUnicodeStringCchCopyN(
  [out] PUNICODE_STRING  DestinationString,
  [in]  PCUNICODE_STRING SourceString,
  [in]  size_t           cchToCopy
);


NTSTRSAFEDDI RtlUnicodeStringCchCopyNEx(
  [out]           PUNICODE_STRING  DestinationString,
  [in]            PCUNICODE_STRING SourceString,
  [in]            size_t           cchToCopy,
  [out, optional] PUNICODE_STRING  RemainingString,
  [in]            DWORD            dwFlags
);


NTSTRSAFEDDI RtlUnicodeStringCchCopyStringN(
  [out] PUNICODE_STRING  DestinationString,
  [in]  NTSTRSAFE_PCWSTR pszSrc,
  [in]  size_t           cchToCopy
);


NTSTRSAFEDDI RtlUnicodeStringCchCopyStringNEx(
  [out]           PUNICODE_STRING  DestinationString,
  [in]            NTSTRSAFE_PCWSTR pszSrc,
  [in]            size_t           cchToCopy,
  [out, optional] PUNICODE_STRING  RemainingString,
  [in]            DWORD            dwFlags
);

NTSTRSAFEDDI RtlUnicodeStringCopy(
  [out] PUNICODE_STRING  DestinationString,
  [in]  PCUNICODE_STRING SourceString
);

NTSTRSAFEDDI RtlUnicodeStringCopyEx(
  [out]           PUNICODE_STRING  DestinationString,
  [in]            PCUNICODE_STRING SourceString,
  [out, optional] PUNICODE_STRING  RemainingString,
  [in]            DWORD            dwFlags
);

NTSTRSAFEDDI RtlUnicodeStringCopyString(
  [out] PUNICODE_STRING  DestinationString,
  [in]  NTSTRSAFE_PCWSTR pszSrc
);

NTSTRSAFEDDI RtlUnicodeStringCopyStringEx(
  [out]           PUNICODE_STRING  DestinationString,
  [in]            NTSTRSAFE_PCWSTR pszSrc,
  [out, optional] PUNICODE_STRING  RemainingString,
  [in]            DWORD            dwFlags
);


NTSTRSAFEDDI RtlUnicodeStringInit(
  [out]          PUNICODE_STRING  DestinationString,
  [in, optional] NTSTRSAFE_PCWSTR pszSrc
);

NTSTRSAFEDDI RtlUnicodeStringInitEx(
  [out]          PUNICODE_STRING  DestinationString,
  [in, optional] NTSTRSAFE_PCWSTR pszSrc,
  [in]           DWORD            dwFlags
);

NTSTRSAFEDDI RtlUnicodeStringPrintf(
  [out] PUNICODE_STRING  DestinationString,
  [in]  NTSTRSAFE_PCWSTR pszFormat,
        ...
);

NTSTRSAFEDDI RtlUnicodeStringPrintfEx(
  [out]           PUNICODE_STRING  DestinationString,
  [out, optional] PUNICODE_STRING  RemainingString,
  [in]            DWORD            dwFlags,
  [in]            NTSTRSAFE_PCWSTR pszFormat,
                  ...
);

NTSTRSAFEDDI RtlUnicodeStringValidate(
  [in] PCUNICODE_STRING SourceString
);

NTSTRSAFEDDI RtlUnicodeStringValidateEx(
  [in] PCUNICODE_STRING SourceString,
  [in] DWORD            dwFlags
);

NTSTRSAFEDDI RtlUnicodeStringVPrintf(
  [out] PUNICODE_STRING  DestinationString,
  [in]  NTSTRSAFE_PCWSTR pszFormat,
  [in]  va_list          argList
);

NTSTRSAFEDDI RtlUnicodeStringVPrintfEx(
  [out]           PUNICODE_STRING  DestinationString,
  [out, optional] PUNICODE_STRING  RemainingString,
  [in]            DWORD            dwFlags,
  [in]            NTSTRSAFE_PCWSTR pszFormat,
  [in]            va_list          argList
);



*/

#endif