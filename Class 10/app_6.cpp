#include "functions.hpp"


int main ()
{
    printf("Введите символ\n");
    char c = (char) getchar();
    printf("Введите строку\n");
    char s[100] = "";
    scanf("%s", s);
    char* sim =  strchr(s, c);
    *sim = '*';
    char* sim2 =  strrchr(s, c);
    *sim2 = '*';
    printf("%s\n", s);
    return 0;

}
