#include "functions.hpp"


struct selling
{
    int id;
    int amount;
    float price;
};


typedef struct list
{
    int q = 3;
    struct selling t[3] = {{2007, 1, 1000.0}, {179, 15, 150.0}, {57, 8, 1500.0}};
} LIST;


int main ()
{
    struct list l;
    for (int i = 1; i <= l.q; i++){
        printf("selling#%d {id = %4d; amount = %3d; cost = %5g}\n", i, l.t[i - 1].id, l.t[i - 1].amount, l.t[i - 1].price);
    }

    printf("Вводите id изменяемых товаров; -1 для остановки\n");
    int num;
    scanf("%d", &num);
    while (num != -1){
        for (int i = 0; i < l.q; i++){
            if (l.t[i].id == num){
                printf("Введите новое количество\n");
                scanf("%d", &l.t[i].amount);
                break;
            }
            if (i == l.q - 1){
                printf("Такого товара нет\n");
            }
        }
        printf("Следующий\n");
        scanf("%d", &num);
    }

    for (int i = 1; i <= l.q; i++){
        printf("selling#%d {id = %4d; amount = %3d; cost = %5g}\n", i, l.t[i - 1].id, l.t[i - 1].amount, l.t[i - 1].price);
    }
}
