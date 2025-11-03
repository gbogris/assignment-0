




#include <stdio.h>
#include <math.h>


  int main()


{
	double n1;
	double n2;
	char x;

   printf("Give me the first opernad: ");
	if ( scanf(" %lf", &n1) !=1  || n1 != (int)n1 )
	{

		printf("Only integer operands are acceptable!\n");

		return 1;
	}

   printf(" Give operator ( +, -, /, *. ^): "); 
	if ( scanf(" %c", &x) !=1 || (x != '+' && x != '-' && x != '*' && x != '/' && x != '^') )
	{
		printf("Invslid opernat: %c. Only [+,-,*,/,^] allowed!\n", x);
		return 1;
	}
   printf("Give me the second opernad: ");
	if (scanf(" %lf", &n2) !=1  || n2 != (int)n2 )
	{
		printf("Only integer operands are acceptable!\n");
		return 1;
	}
 

 if ( x == '+' )

	{
		printf("%f + %f= %f\n", n1, n2, n1+n2);

	}

  else if ( x == '-' )

	{
		printf("%f - %f= %f\n", n1, n2, n1-n2);

	}

  else if ( x == '*' )

	{
		printf(" %f * %f= %f\n", n1, n2, n1*n2);

	}

  else if ( x == '/')

	{
  if( n2 == 0)
	{
		printf("Division with zero is undefined!\n");
	}
  else 
	{
		printf(" %f / %f= %f\n", n1, n2, n1/n2);
	}
	}
  else if ( x == '^' )

	{

  if( n1 == 0 && n2 == 0)

	{
		printf("I do not know the answer!\n");

	}

  else 

	{

	double math = pow(n1,n2);
	printf("%f ^ %f= %f\n", n1, n2, math);

	}

	return 0;

	}

}
