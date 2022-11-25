#include "functions.hpp"


int main ()
{
    char s1[20] = "123wert65", s2[20] = "wert";
    int l = strcspn(s1, s2);
    *(s1 + l) = '*';
    printf("%s\n", s1);
    return 0;

}
