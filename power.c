#include <stdio.h>
#include <math.h>
void main()
{
    int a, b, ans;

    //author:: coderSuresh

    printf("Enter an Integer: ");
    scanf("%d", &a);

    printf("Enter power: ");
    scanf("%d", &b);

    ans = pow(a, b);

    printf("%d on %d's power is %d", b, a, ans);
}