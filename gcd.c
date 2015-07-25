#include <stdio.h>

int main(int a, int b){
    puts("Enter integers: ");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("The gcd is %d\n",  gcd(a, b));
    return 0;
}

int gcd(int x, int y){
    if (y == 0) {return x;}
    int z = x % y;
    return gcd(y, z);
}
    
