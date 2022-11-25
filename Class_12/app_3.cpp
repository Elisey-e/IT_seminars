#include "functions.hpp"



int main (int argc, char* argv[])
{
    printf("%s\n\n", argv[1]);
    FILE* fr = fopen(argv[1], "r");
    char st[255] = "";
    while (fscanf(fr, "%s\n", &st) == 1){
        printf("%s\n", st);
    }
    return 0;
}

