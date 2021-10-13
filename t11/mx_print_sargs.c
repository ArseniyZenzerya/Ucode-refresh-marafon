void mx_printchar(char c);
int mx_strlen(const char *s);
void mx_printstr(const char *s);
int main (int argc, char **argv);
int mx_strcmp(const char *s1, const char *s2);

int main (int argc, char **argv) {
    
    if (argc < 2)
        return 0;

    for (int i = 0; i < argc - 1; i++) 
    {
        for (int j = i + 1; j < argc; j++) 
        {
            if (mx_strcmp(argv[j], argv[i]) > 0 ) 
            {
                char *temp = argv[j];
                argv[j] = argv[i];
                argv[j] = temp;
            }
        }
    }
        
    for (int i = 1; i < argc; i++)
    {
        mx_printstr(argv[i]);
        mx_printchar('\n');
      
    }
    

    return 0;
}
