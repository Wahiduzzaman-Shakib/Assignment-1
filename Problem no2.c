#include<stdio.h>
int main()
{
    int num, i, sum = 0;
    
    printf("Enter 10 numbers:");
    
	for(i=1; i<=10; i++)
	{
        scanf("%d",&num);
        sum += num;
    } 
    printf("Sum is : %d\n",sum) ;
    float avg = sum/10.0;
    printf("Average is : %.2f\n",avg);
    
    return 0;

}
