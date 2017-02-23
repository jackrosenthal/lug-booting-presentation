#include <efi.h>
#include <efilib.h>

EFI_STATUS
EFIAPI
efi_main (EFI_HANDLE Handle, EFI_SYSTEM_TABLE *Table)
{
    InitializeLib(Handle, Table);
    Print(L"Hello, world!\n");
    return EFI_SUCCESS;
}
