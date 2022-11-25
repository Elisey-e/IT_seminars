#include "functions.hpp"


int main ()
{
    char str[100] = {};
    char c;
    for (int ind = 0; (c = (char) getchar()) != EOF; ind++){
        str[ind] = c;
    }
    printf("str: %s\n", str);
    return 0;
}

