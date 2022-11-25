#include "functions.hpp"


typedef struct word
{
    char data[50] = {};
    int curr = 0;
    int a_count = 0;
} WORD;


int main ()
{
    printf("most sonorical:\n");
    WORD list[50] = {};
    char sonor[7] = "aeiouy";
    char data[50] = "adf fdh vasa gcdue ucs vyru bcd";
    int i_data = 0;
    int i_word = 0;
    int ans_ind = 0;
    int max_sonor = 0;
    while (true){
        list[ans_ind].data[i_word] = data[i_data];

        if (data[i_data] == ' ' || data[i_data] == '\0'){
            if (max_sonor < list[ans_ind].curr){
                max_sonor = list[ans_ind].curr;
            }
            list[ans_ind].data[i_word] = '\0';
            ans_ind++;
            i_data++;
            i_word = 0;
            if (data[i_data - 1] == '\0'){
                break;
            }
            continue;
        }

        if (strchr(sonor, data[i_data])){
            if (data[i_data] == 'a'){
                list[ans_ind].a_count++;
            }
            list[ans_ind].curr++;
            i_data++;
            i_word++;
            continue;
        }

        i_data++;
        i_word++;
    }
    
    for (int i = 0; i < ans_ind; i++){
        if (list[i].curr == max_sonor){
            printf("%s\n", list[i].data);
        }
    }

    printf("\nmax_a:\n");

    for (int i = 0; i < ans_ind; i++){
        if (list[i].a_count >= 2){
            printf("%s\n", list[i].data);
        }
    }

    return 0;

}