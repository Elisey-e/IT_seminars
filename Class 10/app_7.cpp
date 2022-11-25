#include "functions.hpp"


int main ()
{
    char s1[20] = "123wert65", s2[20] = "wert";
    char* l = strstr(s1, s2);
    char* i = l;
    int len = strlen(s2);
    s1[l - s1] = '\0';
    strcat(s1, s2);
    while (*(i + 1) != '5'){
        *i = *(i + len);
        i++;
    }
    printf("%s\n", s1);
    return 0;

}
