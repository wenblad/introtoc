#include <stdio.h>

int main()
{

	while(1) 
	{

		int n, i = 2;

  		printf("Enter a positive number:");
	
		scanf("%d", &n);
	
		for(i = 2; i <= n - 1; i++)
	
		if(n%i==0)
		{
			printf("Nope, %d is not a prime number. Sorry!\n", n);
			break;
		}

		if(i == n)
		printf("Woho, %d is a prime number!\n", n);
	}		
	return 0;
}
