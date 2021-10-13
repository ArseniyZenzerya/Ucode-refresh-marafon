int mx_strcmp(const char *s1, const char *s2);

int mx_strcmp(const char *s1, const char *s2) {
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }

    return *(char *)s1 - *(char*)s2;
}
