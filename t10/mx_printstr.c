#include "unistd.h"
void mx_printstr(const char *s);
void mx_printchar(char c);

void mx_printstr(const char *s) {

    for (int i = 0; *(s + i) != '\0'; i++)
    {
        mx_printchar(s[i]);
    }
    
}
