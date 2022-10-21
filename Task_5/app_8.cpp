#include "functions.hpp"


int main ()
{
    int num = 0;
    printf("Введите число членов массива\n");
    scanf("%d", &num);

    int el;
    int ans[10002] = {};
    int r_ans = 0;
    int set[10002] = {};
    printf("Введите элементы массива\n");
    for (int i = 0; i < num; i++){
        scanf("%d", &el);
        if (set[el] == 0){
            ans[r_ans] = el;
            set[el] = 1;
            r_ans++;
        }
    }
    for (int i = 0; i < r_ans; i++){
        printf("%d ", ans[i]);
    }
}