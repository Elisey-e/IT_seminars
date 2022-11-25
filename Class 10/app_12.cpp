#include "functions.hpp"


int main ()
{
    char s1[100] = "aabbbccccddedvf";
    printf("%s\n", s1);
    int i = 1;
    char last_symb = s1[0];
    int write = 1;
    while (s1[i] != '\0'){
        if (s1[i] == last_symb){
            i++;
        }
        else{
            s1[write] = s1[i];
            last_symb = s1[i];
            write++;
            i++;
        }
    }
    s1[write] = '\0';
    printf("%s\n", s1);


    return 0;

}