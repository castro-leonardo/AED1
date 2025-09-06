#include <stdio.h>
#include <stdlib.h>

int main(){
    int x = 10;
    int *p;

    p = &x;

    printf("valor de x: %d\n", x);
    printf("endereco de x: %p\n", &x);
    printf("valor de p: %p\n", p);
    printf("valor apontado por p: %d\n", *p);

    // alt

    *p = 20;

    printf("valor de x alt: %d\n", x);
    printf("endereco de x alt: %p\n", &x);
    printf("valor de p alt: %p\n", p);
    printf("valor apontado por p alt: %d\n", *p);

    return 0;
}