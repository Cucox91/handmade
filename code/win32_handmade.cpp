#include <windows.h>

int CALLBACK
WinMain(
    HINSTANCE hInstance,     // This is a running program. The H is for Header.
    HINSTANCE hPrevInstance, // H is handler.
    LPSTR lpCmdLine,         // Pointer to a string. P is pointer L is long.
    int nCmdShow)
{
    MessageBox(0, "This is Handmade Hero", "Handmade Hero",
         MB_OK|MB_ICONINFORMATION);
    return 0;
}