# include <stdio.h>

int checkPrime(int number)
{
	int primeFlag = 0;
	for(int iterator = 2; iterator <= number/2; iterator += 1)
	{
		if(number % iterator == 0)
		{
			primeFlag = 0;
			break;
		}
	}
	if(number <= 1)
	{
		primeFlag = 0;
	}
	return primeFlag;
}

