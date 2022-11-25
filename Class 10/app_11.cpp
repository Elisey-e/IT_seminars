#include "functions.hpp"


int main ()
{
    char s1[100] = "f2gh 4 ertfd 134 1000 3200";
    int i, j = 0;
    int num = 0;
    int ans = 0;
    char buff[100] = "";
    char* buff_ind = buff;
    for (int i = 2; i < strlen(s1); i++){
        if (isdigit(s1[i])){
            buff_ind = buff;
            while (isdigit(*(buff_ind))){
                *(buff_ind) = ' ';
            }
            j = i;
            while (isdigit(s1[i])){
                buff[i - j] = s1[i];
                i++;
            }
            sscanf(buff, "%d", &num);
            printf("%d\n", num);
            ans += num;
        }
        else{

        }
    }
    printf("%d", ans);

    return 0;

}
