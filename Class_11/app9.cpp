#include "functions.hpp"


int main ()
{
    FILE* fwork = fopen("work9.txt", "w+");

    int field = 3;
    for (int i = 0; i < 20; i++){
        fprintf(fwork, "%*d %*d %*d %*d %*d\n", field, i * i, field, i * i + 1, field, i * i + 2, field, i * i + 3, field, i * i + 4);
    }

    fseek(fwork, 0L, SEEK_SET);

    int num;
    for (int i = 0; i < 20; i++){
        fseek(fwork, 4 + i * (20), SEEK_SET);
        fscanf(fwork, "%d\n", &num);
        printf("%d ", num);
        fseek(fwork, 12 + i * (20), SEEK_SET);
        fscanf(fwork, "%d\n", &num);
        printf("%d\n", num);
    }

    fclose(fwork);
    return 0;
}

