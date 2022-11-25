#include "functions.hpp"


int main ()
{
    char s1[100] = "adf fdh vysa. gcdue ucs vyru. bcd.";
    bool flag = true;
    int i = 0;
    while (s1[i] != '\0'){
        if (s1[i] == '.'){
            flag = true;
        }
        if (flag && isalpha(s1[i])){
            s1[i] = s1[i] - 'a' + 'A';
            flag = false;
        }
        i++;
    }
    printf("%s\n", s1);


    return 0;

}