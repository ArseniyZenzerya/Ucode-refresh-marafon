char *mx_strdup(const char *str);
char *mx_strnew(const int size);
int mx_strlen(const char *s);
char *mx_strcpy(char *dst, const char *src);
#include <stdlib.h>

char *mx_strdup(const char *str){

    char *d = mx_strnew(mx_strlen(str));
    if (d == NULL) 
        return NULL; 

    mx_strcpy (d, str); 
    return d; 

    
}
