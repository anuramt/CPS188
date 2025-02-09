#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "");
    
    wprintf (L"%s", "Here are some Unicode characters: \n");
    wprintf (L"%lc  %lc\n", 0x2103, 0x2109);
    wprintf (L"%lc  %lc\n\n", 0x1F4A2, 0x1F9E9);
    
    wprintf (L"%s", "Here is an example of an output with a variety of format specifiers/placeholders: \n");
    wprintf (L"%lc  %lc %s %d %lf %c\n", 0x1F9D9, 0xFE36, "Hi!", 10, 3.14, 'A');

    return 0;
}