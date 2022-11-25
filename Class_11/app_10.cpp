#include "functions.hpp"
#include <syscall.h>
#include <unistd.h>

void putdig(int n);

int getdig();

int main(){
    int n = getdig();
    putdig(n);
}

int getdig(){
    char buffer[32];
    int n = 0;
    int len = (int) read(2, buffer, 32);
    int exp = 1;
    for (int i = 0; i < len - 1; i++){
        n += (buffer[len - i - 2] - '0') * exp;
        exp *= 10;
    }
    return n;
}

void putdig(int n){
    char buffer[32];
    int i = 0;
    int nn = n;
    int len = 0;
    while (nn > 0){
        nn /= 10;
        len++;
    }
    while (n > 0){
        buffer[len - i - 1] = (char) ((int) '0' + n % 10);
        n /= 10;
        i++;
    }
    write(1, buffer, i);
    return ;
}