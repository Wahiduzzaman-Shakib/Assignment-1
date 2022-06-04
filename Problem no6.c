#include<stdio.h>
int main()
{
    int num , i , even_num, sum=0;
    printf("Enter the trems of number: \n"); 
    scanf("%d" ,&num);
    printf("First %d even numbers are : \n",num);

    for(i=1 ; i <= num ; i++)
	{
		even_num = 2*i;
        printf("%d ",even_num) ;
        sum += even_num ;
    }

    printf("\nTotal sum : %d" , sum);

	return 0;
}
