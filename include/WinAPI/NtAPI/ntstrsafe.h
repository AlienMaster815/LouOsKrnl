#ifndef NTSTRSAFE_H
#define NTSTRSAFE_H

#include <NtAPI.h>

NTSTRSAFEDDI RtlStringCbCatA(
  _In_ _Out_ NTSTRSAFE_PSTR  pszDest,
  _In_      size_t          cbDest,
  _In_      NTSTRSAFE_PCSTR pszSrc
);

NTSTRSAFEDDI RtlStringCbCatExA(
  _In_ _Out_ NTSTRSAFE_PSTR  pszDest,
  _In_                size_t          cbDest,
  _In_opt_      NTSTRSAFE_PCSTR pszSrc,
  _Out_     NTSTRSAFE_PSTR  *ppszDestEnd,
  _Out_     size_t          *pcbRemaining,
  _In_                DWORD           dwFlags
);


NTSTRSAFEDDI RtlStringCbCatExW(
  _In_ _Out_ NTSTRSAFE_PWSTR  pszDest,
  _In_                size_t           cbDest,
  _In_opt_      NTSTRSAFE_PCWSTR pszSrc,
  _Out_     NTSTRSAFE_PWSTR  *ppszDestEnd,
  _Out_     size_t           *pcbRemaining,
  _In_                DWORD            dwFlags
);

NTSTRSAFEDDI RtlStringCbCatNA(
  _In_ _Out_ NTSTRSAFE_PSTR pszDest,
  _In_      size_t         cbDest,
  _In_      STRSAFE_PCNZCH pszSrc,
            size_t         cbToAppend
);

NTSTRSAFEDDI RtlStringCbCatNExA(
  _In_ _Out_ NTSTRSAFE_PSTR pszDest,
  _In_                size_t         cbDest,
  _In_opt_      STRSAFE_PCNZCH pszSrc,
                      size_t         cbToAppend,
  _Out_     NTSTRSAFE_PSTR *ppszDestEnd,
  _Out_     size_t         *pcbRemaining,
  _In_                DWORD          dwFlags
);

NTSTRSAFEDDI RtlStringCbCatNExW(
  _In_ _Out_ NTSTRSAFE_PWSTR pszDest,
  _In_                size_t          cbDest,
  _In_opt_      STRSAFE_PCNZWCH pszSrc,
                      size_t          cbToAppend,
  _Out_     NTSTRSAFE_PWSTR *ppszDestEnd,
  _Out_     size_t          *pcbRemaining,
  _In_                DWORD           dwFlags
);

NTSTRSAFEDDI RtlStringCbCatNW(
  _In_ _Out_ NTSTRSAFE_PWSTR pszDest,
  _In_      size_t          cbDest,
  _In_      STRSAFE_PCNZWCH pszSrc,
            size_t          cbToAppend
);

NTSTRSAFEDDI RtlStringCbCatW(
  _In_ _Out_ NTSTRSAFE_PWSTR  pszDest,
  _In_      size_t           cbDest,
  _In_      NTSTRSAFE_PCWSTR pszSrc
);

NTSTRSAFEDDI RtlStringCbCopyA(
  _Out_ NTSTRSAFE_PSTR  pszDest,
  _In_  size_t          cbDest,
  _In_  NTSTRSAFE_PCSTR pszSrc
);

NTSTRSAFEDDI RtlStringCbCopyExA(
  _Out_ NTSTRSAFE_PSTR  pszDest,
  _In_            size_t          cbDest,
  _In_opt_  NTSTRSAFE_PCSTR pszSrc,
  _Out_ NTSTRSAFE_PSTR  *ppszDestEnd,
  _Out_ size_t          *pcbRemaining,
  _In_            DWORD           dwFlags
);

NTSTRSAFEDDI RtlStringCbCopyExW(
  _Out_ NTSTRSAFE_PWSTR  pszDest,
  _In_            size_t           cbDest,
  _In_opt_  NTSTRSAFE_PCWSTR pszSrc,
  _Out_ NTSTRSAFE_PWSTR  *ppszDestEnd,
  _Out_ size_t           *pcbRemaining,
  _In_            DWORD            dwFlags
);

NTSTRSAFEDDI RtlStringCbCopyNA(
  _Out_ NTSTRSAFE_PSTR pszDest,
  _In_  size_t         cbDest,
  _In_  STRSAFE_PCNZCH pszSrc,
        size_t         cbToCopy
);

NTSTRSAFEDDI RtlStringCbCopyNExA(
  _Out_ NTSTRSAFE_PSTR pszDest,
  _In_            size_t         cbDest,
  _In_opt_  STRSAFE_PCNZCH pszSrc,
                  size_t         cbToCopy,
  _Out_ NTSTRSAFE_PSTR *ppszDestEnd,
  _Out_ size_t         *pcbRemaining,
  _In_            DWORD          dwFlags
);

NTSTRSAFEDDI RtlStringCbCopyNExW(
  _Out_ NTSTRSAFE_PWSTR pszDest,
  _In_            size_t          cbDest,
  _In_opt_  STRSAFE_PCNZWCH pszSrc,
                  size_t          cbToCopy,
  _Out_ NTSTRSAFE_PWSTR *ppszDestEnd,
  _Out_ size_t          *pcbRemaining,
  _In_            DWORD           dwFlags
);

NTSTRSAFEDDI RtlStringCbCopyNW(
  _Out_ NTSTRSAFE_PWSTR pszDest,
  _In_  size_t          cbDest,
  _In_  STRSAFE_PCNZWCH pszSrc,
        size_t          cbToCopy
);

NTSTRSAFEDDI RtlStringCbCopyUnicodeString(
  _Out_ NTSTRSAFE_PWSTR  pszDest,
  _In_  size_t           cbDest,
  _In_  PCUNICODE_STRING SourceString
);

NTSTRSAFEDDI RtlStringCbCopyUnicodeStringEx(
  _Out_           NTSTRSAFE_PWSTR  pszDest,
  _In_            size_t           cbDest,
  _In_            PCUNICODE_STRING SourceString,
  _Out_           NTSTRSAFE_PWSTR  *ppszDestEnd,
  _Out_ size_t           *pcbRemaining,
  _In_            DWORD            dwFlags
);

NTSTRSAFEDDI RtlStringCbCopyW(
  _Out_ NTSTRSAFE_PWSTR  pszDest,
  _In_  size_t           cbDest,
  _In_  NTSTRSAFE_PCWSTR pszSrc
);

NTSTRSAFEDDI RtlStringCbLengthA(
  _In_ STRSAFE_PCNZCH psz,
  _In_ size_t         cbMax,
       size_t         *pcbLength
);

NTSTRSAFEDDI RtlStringCbLengthW(
  _In_ STRSAFE_PCNZWCH psz,
  _In_ size_t          cbMax,
       size_t          *pcbLength
);



NTSTRSAFEDDI RtlStringCbPrintfA(
  _Out_ NTSTRSAFE_PSTR  pszDest,
  _In_  size_t          cbDest,
  _In_  NTSTRSAFE_PCSTR pszFormat,
        ...
);

NTSTRSAFEDDI RtlStringCbPrintfExA(
  _Out_ NTSTRSAFE_PSTR  pszDest,
  _In_            size_t          cbDest,
  _Out_ NTSTRSAFE_PSTR  *ppszDestEnd,
  _Out_ size_t          *pcbRemaining,
  _In_            DWORD           dwFlags,
  _In_opt_  NTSTRSAFE_PCSTR pszFormat,
                  ...
);

NTSTRSAFEDDI RtlStringCbPrintfExW(
  _Out_ NTSTRSAFE_PWSTR  pszDest,
  _In_            size_t           cbDest,
  _Out_ NTSTRSAFE_PWSTR  *ppszDestEnd,
  _Out_ size_t           *pcbRemaining,
  _In_            DWORD            dwFlags,
  _In_opt_  NTSTRSAFE_PCWSTR pszFormat,
                  ...
);

NTSTRSAFEDDI RtlStringCbPrintfW(
  _Out_ NTSTRSAFE_PWSTR  pszDest,
  _In_  size_t           cbDest,
  _In_  NTSTRSAFE_PCWSTR pszFormat,
        ...
);

NTSTRSAFEDDI RtlStringCbVPrintfA(
  _Out_ NTSTRSAFE_PSTR  pszDest,
  _In_  size_t          cbDest,
  _In_  NTSTRSAFE_PCSTR pszFormat,
  _In_  va_list         argList
);

NTSTRSAFEDDI RtlStringCbVPrintfExA(
  _Out_ NTSTRSAFE_PSTR  pszDest,
  _In_            size_t          cbDest,
  _Out_ NTSTRSAFE_PSTR  *ppszDestEnd,
  _Out_ size_t          *pcbRemaining,
  _In_            DWORD           dwFlags,
  _In_opt_  NTSTRSAFE_PCSTR pszFormat,
  _In_            va_list         argList
);

NTSTRSAFEDDI RtlStringCbVPrintfExW(
  _Out_ NTSTRSAFE_PWSTR  pszDest,
  _In_            size_t           cbDest,
  _Out_ NTSTRSAFE_PWSTR  *ppszDestEnd,
  _Out_ size_t           *pcbRemaining,
  _In_            DWORD            dwFlags,
  _In_opt_  NTSTRSAFE_PCWSTR pszFormat,
  _In_            va_list          argList
);

NTSTRSAFEDDI RtlStringCbVPrintfW(
  _Out_ NTSTRSAFE_PWSTR  pszDest,
  _In_  size_t           cbDest,
  _In_  NTSTRSAFE_PCWSTR pszFormat,
  _In_  va_list          argList
);

NTSTRSAFEDDI RtlStringCchCatA(
  _In_ _Out_ NTSTRSAFE_PSTR  pszDest,
  _In_      size_t          cchDest,
  _In_      NTSTRSAFE_PCSTR pszSrc
);

NTSTRSAFEDDI RtlStringCchCatExA(
  _In_ _Out_ NTSTRSAFE_PSTR  pszDest,
  _In_                size_t          cchDest,
  _In_                NTSTRSAFE_PCSTR pszSrc,
  _Out_     NTSTRSAFE_PSTR  *ppszDestEnd,
  _Out_     size_t          *pcchRemaining,
  _In_                DWORD           dwFlags
);

NTSTRSAFEDDI RtlStringCchCatExW(
  _In_ _Out_ NTSTRSAFE_PWSTR  pszDest,
  _In_                size_t           cchDest,
  _In_                NTSTRSAFE_PCWSTR pszSrc,
  _Out_     NTSTRSAFE_PWSTR  *ppszDestEnd,
  _Out_     size_t           *pcchRemaining,
  _In_                DWORD            dwFlags
);

NTSTRSAFEDDI RtlStringCchCatNA(
  _In_ _Out_ NTSTRSAFE_PSTR pszDest,
  _In_      size_t         cchDest,
  _In_      STRSAFE_PCNZCH pszSrc,
            size_t         cchToAppend
);

NTSTRSAFEDDI RtlStringCchCatNExA(
  _In_ _Out_ NTSTRSAFE_PSTR pszDest,
  _In_                size_t         cchDest,
  _In_opt_      STRSAFE_PCNZCH pszSrc,
                      size_t         cchToAppend,
  _Out_     NTSTRSAFE_PSTR *ppszDestEnd,
  _Out_     size_t         *pcchRemaining,
  _In_                DWORD          dwFlags
);

NTSTRSAFEDDI RtlStringCchCatNExW(
  _In_ _Out_ NTSTRSAFE_PWSTR pszDest,
  _In_                size_t          cchDest,
  _In_opt_      STRSAFE_PCNZWCH pszSrc,
                      size_t          cchToAppend,
  _Out_     NTSTRSAFE_PWSTR *ppszDestEnd,
  _Out_     size_t          *pcchRemaining,
  _In_                DWORD           dwFlags
);

NTSTRSAFEDDI RtlStringCchCatNW(
  _In_ _Out_ NTSTRSAFE_PWSTR pszDest,
  _In_      size_t          cchDest,
  _In_      STRSAFE_PCNZWCH pszSrc,
            size_t          cchToAppend
);

NTSTRSAFEDDI RtlStringCchCatW(
  _In_ _Out_ NTSTRSAFE_PWSTR  pszDest,
  _In_      size_t           cchDest,
  _In_      NTSTRSAFE_PCWSTR pszSrc
);

NTSTRSAFEDDI RtlStringCchCopyA(
  _Out_ NTSTRSAFE_PSTR  pszDest,
  _In_  size_t          cchDest,
  _In_  NTSTRSAFE_PCSTR pszSrc
);

NTSTRSAFEDDI RtlStringCchCopyExA(
  _Out_ NTSTRSAFE_PSTR  pszDest,
  _In_            size_t          cchDest,
  _In_opt_  NTSTRSAFE_PCSTR pszSrc,
  _Out_ NTSTRSAFE_PSTR  *ppszDestEnd,
  _Out_ size_t          *pcchRemaining,
  _In_            DWORD           dwFlags
);

NTSTRSAFEDDI RtlStringCchCopyExW(
  _Out_ NTSTRSAFE_PWSTR  pszDest,
  _In_            size_t           cchDest,
  _In_opt_  NTSTRSAFE_PCWSTR pszSrc,
  _Out_ NTSTRSAFE_PWSTR  *ppszDestEnd,
  _Out_ size_t           *pcchRemaining,
  _In_            DWORD            dwFlags
);

NTSTRSAFEDDI RtlStringCchCopyNA(
  _Out_ NTSTRSAFE_PSTR pszDest,
  _In_  size_t         cchDest,
  _In_  STRSAFE_PCNZCH pszSrc,
        size_t         cchToCopy
);

NTSTRSAFEDDI RtlStringCchCopyNExA(
  _Out_ NTSTRSAFE_PSTR pszDest,
  _In_            size_t         cchDest,
  _In_opt_  STRSAFE_PCNZCH pszSrc,
                  size_t         cchToCopy,
  _Out_ NTSTRSAFE_PSTR *ppszDestEnd,
  _Out_ size_t         *pcchRemaining,
  _In_            DWORD          dwFlags
);

NTSTRSAFEDDI RtlStringCchCopyNExW(
  _Out_ NTSTRSAFE_PWSTR pszDest,
  _In_            size_t          cchDest,
  _In_opt_  STRSAFE_PCNZWCH pszSrc,
                  size_t          cchToCopy,
  _Out_ NTSTRSAFE_PWSTR *ppszDestEnd,
  _Out_ size_t          *pcchRemaining,
  _In_            DWORD           dwFlags
);

NTSTRSAFEDDI RtlStringCchCopyNW(
  _Out_ NTSTRSAFE_PWSTR pszDest,
  _In_  size_t          cchDest,
  _In_  STRSAFE_PCNZWCH pszSrc,
        size_t          cchToCopy
);

NTSTRSAFEDDI RtlStringCchCopyUnicodeString(
  _Out_ NTSTRSAFE_PWSTR  pszDest,
  _In_  size_t           cchDest,
  _In_  PCUNICODE_STRING SourceString
);

NTSTRSAFEDDI RtlStringCchCopyUnicodeStringEx(
  _Out_           NTSTRSAFE_PWSTR  pszDest,
  _In_            size_t           cchDest,
  _In_            PCUNICODE_STRING SourceString,
  _Out_           NTSTRSAFE_PWSTR  *ppszDestEnd,
  _Out_ size_t           *pcchRemaining,
  _In_            DWORD            dwFlags
);

NTSTRSAFEDDI RtlStringCchCopyW(
  _Out_ NTSTRSAFE_PWSTR  pszDest,
  _In_  size_t           cchDest,
  _In_  NTSTRSAFE_PCWSTR pszSrc
);

NTSTRSAFEDDI RtlStringCchLengthA(
  _In_ STRSAFE_PCNZCH psz,
  _In_ size_t         cchMax,
       size_t         *pcchLength
);

NTSTRSAFEDDI RtlStringCchLengthW(
  _In_ STRSAFE_PCNZWCH psz,
  _In_ size_t          cchMax,
       size_t          *pcchLength
);

NTSTRSAFEDDI RtlStringCchPrintfA(
  _Out_ NTSTRSAFE_PSTR  pszDest,
  _In_  size_t          cchDest,
  _In_  NTSTRSAFE_PCSTR pszFormat,
        ...
);

NTSTRSAFEDDI RtlStringCchPrintfExA(
  _Out_ NTSTRSAFE_PSTR  pszDest,
  _In_            size_t          cchDest,
  _Out_ NTSTRSAFE_PSTR  *ppszDestEnd,
  _Out_ size_t          *pcchRemaining,
  _In_            DWORD           dwFlags,
  _In_            NTSTRSAFE_PCSTR pszFormat,
                  ...
);

NTSTRSAFEDDI RtlStringCchPrintfExW(
  _Out_ NTSTRSAFE_PWSTR  pszDest,
  _In_            size_t           cchDest,
  _Out_ NTSTRSAFE_PWSTR  *ppszDestEnd,
  _Out_ size_t           *pcchRemaining,
  _In_            DWORD            dwFlags,
  _In_            NTSTRSAFE_PCWSTR pszFormat,
                  ...
);

NTSTRSAFEDDI RtlStringCchPrintfW(
  _Out_ NTSTRSAFE_PWSTR  pszDest,
  _In_  size_t           cchDest,
  _In_  NTSTRSAFE_PCWSTR pszFormat,
        ...
);

NTSTRSAFEDDI RtlStringCchVPrintfA(
  _Out_ NTSTRSAFE_PSTR  pszDest,
  _In_  size_t          cchDest,
  _In_  NTSTRSAFE_PCSTR pszFormat,
  _In_  va_list         argList
);

NTSTRSAFEDDI RtlStringCchVPrintfExA(
  _Out_           NTSTRSAFE_PSTR  pszDest,
  _In_            size_t          cchDest,
  _Out_ NTSTRSAFE_PSTR  *ppszDestEnd,
  _Out_ size_t          *pcchRemaining,
  _In_            DWORD           dwFlags,
  _In_opt_  NTSTRSAFE_PCSTR pszFormat,
  _In_            va_list         argList
);

NTSTRSAFEDDI RtlStringCchVPrintfExW(
  _Out_           NTSTRSAFE_PWSTR  pszDest,
  _In_            size_t           cchDest,
  _Out_ NTSTRSAFE_PWSTR  *ppszDestEnd,
  _Out_ size_t           *pcchRemaining,
  _In_            DWORD            dwFlags,
  _In_opt_  NTSTRSAFE_PCWSTR pszFormat,
  _In_            va_list          argList
);

NTSTRSAFEDDI RtlStringCchVPrintfW(
  _Out_ NTSTRSAFE_PWSTR  pszDest,
  _In_  size_t           cchDest,
  _In_  NTSTRSAFE_PCWSTR pszFormat,
  _In_  va_list          argList
);

NTSTRSAFEDDI RtlUnalignedStringCbLengthW(
  _In_            STRSAFE_PCUNZWCH psz,
  _In_            size_t           cbMax,
  _Out_ size_t           *pcbLength
);


NTSTRSAFEDDI RtlUnalignedStringCchLengthW(
  _In_            STRSAFE_PCUNZWCH psz,
  _In_            size_t           cchMax,
  _Out_ size_t           *pcchLength
);

NTSTRSAFEDDI RtlUnicodeStringCat(
  _In_ _Out_ PUNICODE_STRING  DestinationString,
  _In_      PCUNICODE_STRING SourceString
);

NTSTRSAFEDDI RtlUnicodeStringCatEx(
  _In_ _Out_       PUNICODE_STRING  DestinationString,
  _In_            PCUNICODE_STRING SourceString,
  _Out_ PUNICODE_STRING  RemainingString,
  _In_            DWORD            dwFlags
);


NTSTRSAFEDDI RtlUnicodeStringCatString(
  _In_ _Out_ PUNICODE_STRING  DestinationString,
  _In_      NTSTRSAFE_PCWSTR pszSrc
);

NTSTRSAFEDDI RtlUnicodeStringCatStringEx(
  _In_ _Out_       PUNICODE_STRING  DestinationString,
  _In_            NTSTRSAFE_PCWSTR pszSrc,
  _Out_ PUNICODE_STRING  RemainingString,
  _In_            DWORD            dwFlags
);


NTSTRSAFEDDI RtlUnicodeStringCbCatN(
  _In_ _Out_ PUNICODE_STRING  DestinationString,
  _In_      PCUNICODE_STRING SourceString,
  _In_      size_t           cbToAppend
);


NTSTRSAFEDDI RtlUnicodeStringCbCatNEx(
  _In_ _Out_       PUNICODE_STRING  DestinationString,
  _In_            PCUNICODE_STRING SourceString,
  _In_            size_t           cbToAppend,
  _Out_ PUNICODE_STRING  RemainingString,
  _In_            DWORD            dwFlags
);


NTSTRSAFEDDI RtlUnicodeStringCbCatStringN(
  _In_ _Out_ PUNICODE_STRING  DestinationString,
  _In_      NTSTRSAFE_PCWSTR pszSrc,
  _In_      size_t           cbToAppend
);


NTSTRSAFEDDI RtlUnicodeStringCbCatStringNEx(
  _In_ _Out_       PUNICODE_STRING  DestinationString,
  _In_            NTSTRSAFE_PCWSTR pszSrc,
  _In_            size_t           cbToAppend,
  _Out_ PUNICODE_STRING  RemainingString,
  _In_            DWORD            dwFlags
);


NTSTRSAFEDDI RtlUnicodeStringCbCopyN(
  _Out_ PUNICODE_STRING  DestinationString,
  _In_  PCUNICODE_STRING SourceString,
  _In_  size_t           cbToCopy
);

NTSTRSAFEDDI RtlUnicodeStringCbCopyNEx(
  _Out_           PUNICODE_STRING  DestinationString,
  _In_            PCUNICODE_STRING SourceString,
  _In_            size_t           cbToCopy,
  _Out_ PUNICODE_STRING  RemainingString,
  _In_            DWORD            dwFlags
);

NTSTRSAFEDDI RtlUnicodeStringCbCopyStringN(
  _Out_ PUNICODE_STRING  DestinationString,
  _In_  NTSTRSAFE_PCWSTR pszSrc,
  _In_  size_t           cbToCopy
);

NTSTRSAFEDDI RtlUnicodeStringCbCopyStringNEx(
  _Out_           PUNICODE_STRING  DestinationString,
  _In_            NTSTRSAFE_PCWSTR pszSrc,
  _In_            size_t           cbToCopy,
  _Out_ PUNICODE_STRING  RemainingString,
  _In_            DWORD            dwFlags
);

NTSTRSAFEDDI RtlUnicodeStringCchCatN(
  _In_ _Out_ PUNICODE_STRING  DestinationString,
  _In_      PCUNICODE_STRING SourceString,
  _In_      size_t           cchToAppend
);

NTSTRSAFEDDI RtlUnicodeStringCchCatNEx(
  _In_ _Out_       PUNICODE_STRING  DestinationString,
  _In_            PCUNICODE_STRING SourceString,
  _In_            size_t           cchToAppend,
  _Out_ PUNICODE_STRING  RemainingString,
  _In_            DWORD            dwFlags
);

NTSTRSAFEDDI RtlUnicodeStringCchCatStringN(
  _In_ _Out_ PUNICODE_STRING  DestinationString,
  _In_      NTSTRSAFE_PCWSTR pszSrc,
  _In_      size_t           cchToAppend
);


NTSTRSAFEDDI RtlUnicodeStringCchCatStringNEx(
  _In_ _Out_       PUNICODE_STRING  DestinationString,
  _In_            NTSTRSAFE_PCWSTR pszSrc,
  _In_            size_t           cchToAppend,
  _Out_ PUNICODE_STRING  RemainingString,
  _In_            DWORD            dwFlags
);


NTSTRSAFEDDI RtlUnicodeStringCchCopyN(
  _Out_ PUNICODE_STRING  DestinationString,
  _In_  PCUNICODE_STRING SourceString,
  _In_  size_t           cchToCopy
);


NTSTRSAFEDDI RtlUnicodeStringCchCopyNEx(
  _Out_           PUNICODE_STRING  DestinationString,
  _In_            PCUNICODE_STRING SourceString,
  _In_            size_t           cchToCopy,
  _Out_ PUNICODE_STRING  RemainingString,
  _In_            DWORD            dwFlags
);


NTSTRSAFEDDI RtlUnicodeStringCchCopyStringN(
  _Out_ PUNICODE_STRING  DestinationString,
  _In_  NTSTRSAFE_PCWSTR pszSrc,
  _In_  size_t           cchToCopy
);


NTSTRSAFEDDI RtlUnicodeStringCchCopyStringNEx(
  _Out_           PUNICODE_STRING  DestinationString,
  _In_            NTSTRSAFE_PCWSTR pszSrc,
  _In_            size_t           cchToCopy,
  _Out_ PUNICODE_STRING  RemainingString,
  _In_            DWORD            dwFlags
);

NTSTRSAFEDDI RtlUnicodeStringCopy(
  _Out_ PUNICODE_STRING  DestinationString,
  _In_  PCUNICODE_STRING SourceString
);

NTSTRSAFEDDI RtlUnicodeStringCopyEx(
  _Out_           PUNICODE_STRING  DestinationString,
  _In_            PCUNICODE_STRING SourceString,
  _Out_ PUNICODE_STRING  RemainingString,
  _In_            DWORD            dwFlags
);

NTSTRSAFEDDI RtlUnicodeStringCopyString(
  _Out_ PUNICODE_STRING  DestinationString,
  _In_  NTSTRSAFE_PCWSTR pszSrc
);

NTSTRSAFEDDI RtlUnicodeStringCopyStringEx(
  _Out_           PUNICODE_STRING  DestinationString,
  _In_            NTSTRSAFE_PCWSTR pszSrc,
  _Out_ PUNICODE_STRING  RemainingString,
  _In_            DWORD            dwFlags
);


NTSTRSAFEDDI RtlUnicodeStringInit(
  _Out_          PUNICODE_STRING  DestinationString,
  _In_opt_ NTSTRSAFE_PCWSTR pszSrc
);

NTSTRSAFEDDI RtlUnicodeStringInitEx(
  _Out_          PUNICODE_STRING  DestinationString,
  _In_opt_ NTSTRSAFE_PCWSTR pszSrc,
  _In_           DWORD            dwFlags
);

NTSTRSAFEDDI RtlUnicodeStringPrintf(
  _Out_ PUNICODE_STRING  DestinationString,
  _In_  NTSTRSAFE_PCWSTR pszFormat,
        ...
);

NTSTRSAFEDDI RtlUnicodeStringPrintfEx(
  _Out_           PUNICODE_STRING  DestinationString,
  _Out_ PUNICODE_STRING  RemainingString,
  _In_            DWORD            dwFlags,
  _In_            NTSTRSAFE_PCWSTR pszFormat,
                  ...
);

NTSTRSAFEDDI RtlUnicodeStringValidate(
  _In_ PCUNICODE_STRING SourceString
);

NTSTRSAFEDDI RtlUnicodeStringValidateEx(
  _In_ PCUNICODE_STRING SourceString,
  _In_ DWORD            dwFlags
);

NTSTRSAFEDDI RtlUnicodeStringVPrintf(
  _Out_ PUNICODE_STRING  DestinationString,
  _In_  NTSTRSAFE_PCWSTR pszFormat,
  _In_  va_list          argList
);

NTSTRSAFEDDI RtlUnicodeStringVPrintfEx(
  _Out_           PUNICODE_STRING  DestinationString,
  _Out_ PUNICODE_STRING  RemainingString,
  _In_            DWORD            dwFlags,
  _In_            NTSTRSAFE_PCWSTR pszFormat,
  _In_            va_list          argList
);



#endif