#include<stdio.h>
int main()
{
    int num, i ,odd_num, sum=0;
    printf("Enter the terms of number: \n"); 
    scanf("%d",&num);
    printf("First %d odd numbers are : \n",num);

    for(i=1 ; i <=num ; i++){

        odd_num= 2*i - 1;
        printf("%d ",odd_num);
        sum += odd_num;
    }

    printf("\nTotal sum : %d" , sum);
	
	return 0;
}
