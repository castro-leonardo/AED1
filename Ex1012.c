#include <stdio.h>
#include <stdlib.h>
 
int main() {
 
    int a, b, c, MaiorAB, MaiorABC;
    
    scanf("%i", &a);
    scanf("%i", &b);
    scanf("%i", &c);
    
    MaiorAB = (a+b+abs(a-b))/2;
    
    MaiorABC = (c+MaiorAB+abs(c-MaiorAB))/2;
    
    printf("%i eh o maior\n", MaiorABC);
    
 
    return 0;
}