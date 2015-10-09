#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
#include "shellcode.h"
 
/* -------------------------------------------------- */
void vuln(char * buf)
{
    char a[16] = { 0 };
    strcpy(a, buf); 
}
 
int main(int argc, char * argv[])
{
    if (argc != 2) 
    { 
        printf("Usage: %s <input>\n", argv[0]); 
        exit(1); 
    }
    vuln(argv[1]);
    printf("%p\n", buf);
 
    return 0;
}          
