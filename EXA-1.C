#include<stdio.h>
main()
{
	int a;
	printf("press m to monday");
	printf("\npress t to tuseday");
	printf("\npress w to wensday");
	printf("\npress t to thuesday");
	printf("\npress f to frieday");
	printf("\npress s to saterday");
	printf("\npress S to Sunday");
	printf("enter your choise:-");
	
	scanf("%d",&a);
	switch(a);
	{
	
	                           
	                           case 'm':
	                           		printf("monday");
	                           		break;
	                           case 't':
	                           		printf("tuseday");
	                           		break;
	                           case 'w':
	                           		printf("wensday");
	                           		break;
	                           case 'T':
	                           		printf("thuesday");
	                           		break;
	                           case 'f':
	                           		printf("frieday");
	                           		break;
	                           case 's':
	                           		printf("saterday");
	                           		break;
	                           case 'S':
	                            	printf("sunday");
	 }                           	break;

	
}
