#include<stdio.h>
 
 int main(){
 
 	int x, sum=0;
 	for (x=1;x<=100;x++)
 	{
	if (x%2==0){
	printf("%d\n",x);
	sum+=x;	
	}
	printf("suma de numeros pares:%d\n",sum);
 }
 	
 	
 	
 	
 	return 0;
 }
