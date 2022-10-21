#include "functions.hpp"


struct Point {
	int x;
	int y;
};

struct Rect {
	struct Point lt;
	struct Point rb;
};

int sqt(int p);

void rect_simm(struct Rect * str);


int main ()
{
    struct Rect r1;
    
    printf("Введите координаты первой точки:\nx1 = ");
    scanf("%d", &r1.lt.x);
    printf("y1 = ");
    scanf("%d", &r1.lt.y);

    printf("Введите координаты второй точки:\nx2 = ");
    scanf("%d", &r1.rb.x);
    printf("y2 = ");
    scanf("%d", &r1.rb.y);

    rect_simm(&r1);
    
    printf("(x1, y1) = %d, %d\n(x2, y2) = %d, %d", r1.lt.x, r1.lt.y, r1.rb.x, r1.rb.y);
}


void rect_simm(struct Rect * str){
    int buff = str->lt.x;
    str->lt.x = -str->rb.x;
    str->rb.x = -buff;
}


int sqt(int p){
    return p * p;
}