#include<stdio.h>
#include<string.h>

char* not_used = "/bin/sh";

void not_called() {
    printf("Today is:\n");
    system("/bin/date");
}

void vulnerable_function(char* string) {
    char buffer[100];
    strcpy(buffer, string);
}

int main(int argc, char** argv) {
    vulnerable_function(argv[1]);
    return 0;
}
