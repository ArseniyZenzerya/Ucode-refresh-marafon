#include "hex_to_nbr.h"


int mx_hex_to_nbr(const char *hex) {
    int num = 0;
    int base = 1;
    int len = 0;

for (int i = 0; hex[i] != '\0'; i++)
    len ++;


    for (int i = 0; i <= len; i++){
       if (hex[len - i] >= '0' && hex[len - i] <= '9') {
			num = num + (hex[len - i] - 48) * base;
			base *= 16;
		}
		if (hex[len - i] >= 'A' && hex[len - i] <= 'F') {
			num = num + (hex[len - i] - 55) * base;
			base *= 16;
		}
		if (hex[len - i] >= 'a' && hex[len - i] <= 'f') {
			num = num + (hex[len - i] - 87) * base;
			base *= 16;
		}
    }
    return num;
}

