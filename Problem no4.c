#include<stdio.h>
int main()
{
    int i  , j , rows , num;
    printf("Enter number of rows : ");
    scanf("%d",&rows);
    for(i = 1 , num = 1 ; i <= rows ; i++ )
	{
        for(j = 1 ; j <= i ; j++ , num++)
        {
        	printf("%d " , num);
		}
		
		printf("\n");
    }
	
	return 0; 
}
