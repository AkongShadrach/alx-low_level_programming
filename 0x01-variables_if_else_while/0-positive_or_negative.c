{#include<stdlib.h>

#include<time.h>

#include<stdio.h>



	/**
	 *
	 * *main->assignarandomnumbertothevariableneachtimeitisexecuted
	 *
	 * *andprintthelastdigitofthenumberstoredinthevariablen
	 *
	 * *Return:Always0(Success)
	 *
	 * */

	intmain(void)

	{

		intn;



		srand(time(0));

		n=rand()-RAND_MAX/2;

		if(n>0)

				printf("%dispositive\n",n);

		if(n==0)

				printf("%diszero\n",n);

		if(n<0)



				printf("%disnegative\n",n);

	}

	return(0);

}

