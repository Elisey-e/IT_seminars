#include "functions.hpp"


struct date
{
    int year;
    int mounth;
};


typedef struct list
{
    struct date sp[3] = {};
} LIST;


int main ()
{
    LIST l;
    printf("Введите даты последовательно\n");
    printf("y1 = ");
    scanf("%d", &l.sp[0].year);
    printf("m1 = ");
    scanf("%d", &l.sp[0].mounth);

    printf("y2 = ");
    scanf("%d", &l.sp[1].year);
    printf("m2 = ");
    scanf("%d", &l.sp[1].mounth);

    printf("Введите исследуемую дату\n");
    printf("y = ");
    scanf("%d", &l.sp[2].year);
    printf("m = ");
    scanf("%d", &l.sp[2].mounth);

    if (l.sp[0].year < l.sp[2].year && l.sp[2].year < l.sp[1].year){
        printf("YES");
    }
    else if (l.sp[0].year <= l.sp[2].year && l.sp[2].year < l.sp[1].year && l.sp[0].mounth <= l.sp[2].mounth){
        printf("YES");
    }
    else if (l.sp[0].year < l.sp[2].year && l.sp[2].year <= l.sp[1].year && l.sp[1].mounth >= l.sp[2].mounth){
        printf("YES");
    }
    else if (l.sp[0].year <= l.sp[2].year && l.sp[2].year <= l.sp[1].year && l.sp[1].mounth >= l.sp[2].mounth && l.sp[0].mounth <= l.sp[2].mounth){
        printf("YES");
    }
    else{
        printf("NO");
    }
}
