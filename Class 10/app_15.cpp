#include "functions.hpp"


int comp (const char* i, const char* j);


int main ()
{
    char ans[50][4] = {};
    int ans_len = 0;
    char data[50] = "adffdhvasagcdueucsvyrubcdgq";
    while (ans_len < (int) strlen(data)){
        ans[ans_len / 3][0] = data[ans_len];
        ans[ans_len / 3][2] = data[ans_len + 2];
        ans[ans_len / 3][1] = (char) (rand() % 40 + 80);
        while (ans[ans_len / 3][1] == ans[ans_len / 3][0] || ans[ans_len / 3][1] == ans[ans_len / 3][2]){
            ans[ans_len / 3][1] = (char) (rand() % 40 + 80);
        }
        ans[ans_len / 3][3] = '\0';
        ans_len += 3;
    }

    ans_len /= 3;
    

    for (int i = 0; i < ans_len; i++){
        printf("%s\n", ans[i]);
    }

    printf("sorted:\n");

    qsort(ans, ans_len, sizeof(char*) / 2, (int(*) (const void *, const void *)) comp);

    for (int i = 0; i < ans_len; i++){
        printf("%s\n", ans[i]);
    }

    return 0;

}


int comp (const char* i, const char* j)
{
    return strcmp(i, j);
}