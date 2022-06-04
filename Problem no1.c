#include<stdio.h>
int main()
{
    int num , i , sum=0;
    printf("Enter the terms of num: \n"); 
    scanf("%d" ,&num);
    printf("First %d natural numbers are : \n",num);

    for(i=1 ; i <=num ; i++)
	{
        printf("%d ",i) ;
        sum += i ;
    }

    printf("\nTotal sum : %d" , sum);

	return 0;
}
