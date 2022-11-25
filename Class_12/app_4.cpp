#include "functions.hpp"



int main (int argc, char* argv[])
{
    if (argc >= 4){
        printf("%d\n", atoi(argv[1]) + atoi(argv[2]) + atoi(argv[3]));
    }
    else{
        printf("err\n");
    }
    return 0;
}

