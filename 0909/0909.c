#include <stdio.h>
#include <stdlib.h>

int firstnum, secondnum, sum;

int main(){
    printf("Please enter first number: ");
    scanf("%d",&firstnum);
    printf("Please enter your second number: ");
    scanf("%d", &secondnum);
    sum = firstnum + secondnum;
    printf("%d\n", sum);
    return 0;
}

