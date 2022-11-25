#include "functions.hpp"


typedef struct str{
    char s[70];\
    int a;
    char t;
} STR;



int main ()
{   
    STR list[2] = {};
    for (int i = 0; i < 2; i++){
        scanf("%s\n%d\n%c", &list[i].s, &list[i].a, &list[i].t);
    }
    printf("res:\n");
    for (int i = 0; i < 2; i++){
        printf("{%s; %d; %c}\n", list[i].s, list[i].a, list[i].t);
    }
    return 0;
}