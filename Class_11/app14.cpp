#include "functions.hpp"


int main ()
{
    char st[32] = "work14.txt";
    FILE* fw = fopen(st, "r");

    float curr_num = 0;
    if (fscanf(fw, "%f", &curr_num)){
        float list[100] = {curr_num};
        int i = 1;
        float  max_num, min_num;
        int max_ind = 0, min_ind = 0;
        max_num = curr_num;
        min_num = curr_num;
        while (fscanf(fw, "%g\n", &curr_num) == 1){
            list[i] = curr_num;
            if (max_num < curr_num){
                max_num = curr_num;
                max_ind = i;
            }
            if (min_num > curr_num){
                min_num = curr_num;
                min_ind = i;
            }
            i++;
        }
        curr_num = list[max_ind];
        list[max_ind] = list[min_ind];
        list[min_ind] = curr_num;
        fclose(fw);
        FILE* fk = fopen(st, "w");

        for (int j = 0; j < i; j++){
            fprintf(fk, "%f\n", list[j]);
        }
        
        fclose(fk);
    }
    return 0;
}
