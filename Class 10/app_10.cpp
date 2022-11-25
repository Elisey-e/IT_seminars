#include "functions.hpp"


int main ()
{
    char s1[100] = "fgh sdfgh ertfd 1234";
    for (char* i = s1; *(i) != '\0'; i++){
        if (*(i) == ' '){
            *(i) = '\n';
        }
    }
    printf("%s\n", s1);
    return 0;

}
