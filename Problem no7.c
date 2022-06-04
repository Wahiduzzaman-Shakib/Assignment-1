#include<stdio.h>
int prime(int n){
	int i;
    if(n == 1) return 0 ;
	for(i=2;i*i<=n;i++)
	{
        if(n%i == 0) return 0 ;	
	}
	return 1;
}
int main(){
    int i ;
    printf("Prime numbers from 1 to 200 are : \n") ;
    for(i = 1 ; i <= 200 ; i++){
        if(prime(i) == 1) printf("%d ", i );
        
    }
}
