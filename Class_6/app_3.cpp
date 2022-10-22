#include "functions.hpp"

int f();

int main ()
{
    for (int i = 0; i < 5; i++){
        printf("\nn = %d", f());
    }
}

int f(){
    static int p = 0;
    p++;
    return p;
}