#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Point {
    int x;
    int y;
};
struct Rect {
    struct Point lt; // left top
    struct Point rb; // right bottom
};

void transform (struct Rect * r){
    int len_x = abs(r->rb.x - r->lt.x), len_y = abs(r->rb.y - r->lt.y);
    int coord_x = r->lt.x, coord_y = r->lt.y;
    r->lt.x = r->rb.x;
    r->lt.y = r->rb.y;
    r->rb.x = r->lt.x + len_x;
    r->rb.y = r->lt.y - len_y;
}


int main ()
{
    struct Rect rect = {{-1, 1}, {4, -2}};
    printf("%d %d %d %d\n", rect.lt.x, rect.lt.y, rect.rb.x, rect.rb.y);
    transform(&rect);
    printf("%d %d %d %d\n", rect.lt.x, rect.lt.y, rect.rb.x, rect.rb.y);
    return 0;
}

