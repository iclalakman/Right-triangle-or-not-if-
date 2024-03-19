#include <stdio.h>
int main() {
    int a,b,c,d;

    printf("Enter sides of the triangle: ");
    scanf("%d %d %d",&a,&b,&c);

    if (c*c==a*a+b*b)
        printf("This is a right triangle");
    else
        printf("This is not right triangle");

    return 0;
}
