#include<stdio.h>
 
int fib(int);
 
int  main()
{
	printf("Enter whatever number you feel like entering\n");

	int n, i = 0, c;
 
	scanf("%d",&n);

	printf("Okey here it is:\n");
 
	for ( c = 1 ; c <= n ; c++ )
   {
 
     printf("%d\n", fib(i));
      i++; 
   } 
	return 0;
}

int fib(int n)
{
	if ( n == 0 )
	return 0;
	 else if ( n == 1 )
	return 1;
	else
	return ( fib(n-1) + fib(n-2) );
}
