#include "functions.hpp"


int main ()
{
    FILE* fwork = fopen("work8.txt", "a+");

    fprintf(fwork, "%d\n", 1234);
    fprintf(fwork, "%s\n", "aboba");
    fprintf(fwork, "%f\n", 3.141592);
    fprintf(fwork, "%c\n", 'z');

    fseek(fwork, 0L, SEEK_SET);

    char buff[100] = "";
    printf("FILE:\n");
    while (fscanf(fwork, "%s", &buff) == 1){
        printf("%s\n", buff);
    }


    fclose(fwork);
    return 0;
}

