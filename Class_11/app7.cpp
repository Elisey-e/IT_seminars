#include "functions.hpp"


int main ()
{
    FILE* fwork = fopen("work7.txt", "w+");
    for (int i = 0; i < 10; i++){
        fprintf(fwork, "%d\n", i * i);
    }

    int num = 0;
    fseek(fwork, 0L, SEEK_SET);
    for (int i = 0; i < 10; i++){
        fscanf(fwork, "%d\n", &num);
        printf("%d\n", num);
    }
    
    fseek(fwork, 0L, SEEK_SET);
    printf("without first 3\n");
    for (int i = 0; i < 10; i++){
        fscanf(fwork, "%d\n", &num);
        if (i >= 3){
            printf("%d\n", num);
        }
    }

    fclose(fwork);
    return 0;
}

