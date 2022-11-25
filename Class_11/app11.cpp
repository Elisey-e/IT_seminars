#include "functions.hpp"


int f(char* a, char* b);


int main ()
{
    FILE* f1 = fopen("files/f1.txt", "r");
    FILE* f2 = fopen("files/f2.txt", "r");
    FILE* f3 = fopen("files/f3.txt", "r");

    int len1 = 0, len2 = 0, len3 = 0;

    char c;
    while (fscanf(f1, "%c", &c) == 1){
        len1++;
    }

    while (fscanf(f2, "%c", &c) == 1){
        len2++;
    }

    while (fscanf(f3, "%c", &c) == 1){
        len3++;
    }

    printf("%d %d %d\n", len1, len2, len3);
    fclose(f1);
    fclose(f2);
    fclose(f3);

    if (len1 > len2 && len2 > len3){
        f("files/f1.txt", "files/f3.txt");
    }

    else if (len2 > len3 && len3 > len1){
        f("files/f2.txt", "files/f1.txt");
    }

    else if (len3 > len1 && len1 > len2){
        f("files/f3.txt", "files/f2.txt");
    }

    else if (len3 > len2 && len2 > len1){
        f("files/f3.txt", "files/f1.txt");
    }

    else if (len1 > len3 && len3 > len2){
        f("files/f1.txt", "files/f2.txt");
    }

    else if (len2 > len1 && len1 > len3){
        f("files/f2.txt", "files/f3.txt");
    }


    return 0;
}


int f(char* a, char* b){
    char c;
    FILE* f1 = fopen(a, "w");
    FILE* f3 = fopen(b, "r");
    while (fscanf(f3, "%c", &c) == 1){
        fprintf(f1, "%c", c);
    }
    fclose(f1);
    fclose(f3);
}