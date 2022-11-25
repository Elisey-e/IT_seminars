#include "functions.hpp"


int main ()
{
    printf("Введите число\n");
    char s1[100] = "";
    scanf("%s", &s1);
    for (char* i = s1; *(i) != '\0'; i++){
        *(i) = *(i) - '0' + 'a';
    }
    printf("%s\n", s1);
    return 0;

}
