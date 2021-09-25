#include<stdio.h>

int main()
{
    int n, i, store, sum = 0;
    float avg;
    printf("Enter Number of Elements: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        printf("Number =");
        scanf("%d",&store);
        sum = sum + store;
    }
    avg = (float)sum /n;
    printf("The total list sum is %d",sum);
    printf("The average is %.2f",avg);
    return 0;
}
