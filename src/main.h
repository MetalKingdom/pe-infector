#pragma once
#ifndef MAIN_H
#define MAIN_H

PIMAGE_DOS_HEADER GetDosHeader(PUCHAR);
PIMAGE_NT_HEADERS GetPeHeader(PUCHAR);
PIMAGE_FILE_HEADER GetFileHeader(PUCHAR);
PIMAGE_OPTIONAL_HEADER GetOptionalHeader(PUCHAR);
PIMAGE_SECTION_HEADER GetFirstSectionHeader(PUCHAR);
PIMAGE_SECTION_HEADER GetLastSectionHeader(PUCHAR);
BOOL VerifyDOS(PIMAGE_DOS_HEADER pidh);
BOOL VerifyPE(PIMAGE_NT_HEADERS pinh);

#endif