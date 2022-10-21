#include "functions.hpp"



int main ()
{
    struct complexed num1;
    struct complexed num2;
    int op;

    printf("Введите первое число\na = ");
    scanf("%g", &num1.a);
    printf("b = ");
    scanf("%g", &num1.b);

    printf("Введите второе число\na = ");
    scanf("%g", &num2.a);
    printf("b = ");
    scanf("%g", &num2.b);

    printf("Введите номер операции:\n");
    scanf("%d", &op);
    
    if (op == 1){
        float ans_a, ans_b;
        summator(&num1, &num2, &ans_a, &ans_b);
        printf("%g+%gi", ans_a, ans_b);
    }
    else if (op == 2){
        float ans_a, ans_b;
        differenciator(&num1, &num2, &ans_a, &ans_b);
        printf("%g+%gi", ans_a, ans_b);
    }
    else if (op == 3){
        struct complexed ans = commutator(&num1, &num2);
        printf("%g+%gi", ans.a, ans.b);
    }
    else if (op == 4){
        struct complexed ans = anti_commutator(&num1, &num2);
        printf("%g+%gi", ans.a, ans.b);
    }
}
