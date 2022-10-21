#include "functions.hpp"


struct omega
{
    int x;
    int y;
    int r;
};


int sqt(int p);


int main ()
{
    struct omega o1;
    struct omega o2;
    int x, y;
    printf("Введите координаты первой окружности:\nx1 = ");
    scanf("%d", &o1.x);
    printf("y1 = ");
    scanf("%d", &o1.y);
    printf("r1 = ");
    scanf("%d", &o1.r);

    printf("Введите координаты второй окружности:\nx2 = ");
    scanf("%d", &o2.x);
    printf("y2 = ");
    scanf("%d", &o2.y);
    printf("r2 = ");
    scanf("%d", &o2.r);

    printf("Введите координаты точки:\nx = ");
    scanf("%d", &x);
    printf("y = ");
    scanf("%d", &y);

    int in1 = sqt(o1.x - x) + sqt(o1.y - y) - sqt(o1.r);
    int in2 = sqt(o2.x - x) + sqt(o2.y - y) - sqt(o2.r);

    if (in1 < 0 && in2 < 0){
        printf("intersection");
    }
    else if (in1 < 0){
        printf("in 1");
    }
    else if (in2 < 0){
        printf("in 2");
    }
    else{
        printf("outer");
    }
}


int sqt(int p){
    return p * p;
}