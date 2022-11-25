#include "functions.hpp"


int main ()
{
    char st1[32] = "files/f1.txt";
    char st2[32] = "files/f2.txt";
    char sto[32] = "output_13.txt";

    printf("Введите имена файлов\nfile_1:");
    scanf("%s", &st1);
    printf("file_2:\n");
    scanf("%s", &st2);

    FILE* f1 = fopen(st1, "r");
    FILE* f2 = fopen(st2, "r");

    printf("Введите имя выходного файла:\n");
    scanf("%s", &sto);

    FILE* fw = fopen(sto, "w");

    char buff;
    while ((buff = (char) fgetc(f1)) != EOF){
        fputc(buff, fw);
    }
    while ((buff = (char) fgetc(f2)) != EOF){
        fputc(buff, fw);
    }

    fclose(f1);
    fclose(f2);

    return 0;
}
