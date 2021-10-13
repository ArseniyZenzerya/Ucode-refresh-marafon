void mx_printchar(char c);
void mx_print_alphabet();

void mx_print_alphabet(){
    char textB = 'A';
    char textL = 'a';
    for (int i = 0; i < 26; i++)
    {
        switch (i % 2)
        {
        case 1:
            mx_printchar(textL);
            break;
        
        case 0:
            mx_printchar(textB);
            break;
        }
        textB++;
        textL++;
    }
}
