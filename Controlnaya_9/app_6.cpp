#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main ()
{
    int a, id, c;
    int N;
    int id_list[1003];
    scanf("%d", &N);
    for (int i = 0; i < 1003; i++){
        id_list[i] = 0;
    }
    for (int i = 0; i < N; i++){
        scanf("%d %d %d", &a, &id, &c);
        id_list[id]++;
    }
    int len_user = N;

    for (int i = 0; i < 1003; i++){
        if (id_list[i] < len_user && id_list[i] != 0){
            len_user = id_list[i];
        }
    }
    printf("%d", len_user);

}
