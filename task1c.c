/*				TASK1 - B
19-08-20, -kartikey104
7, 8, 9, 10, 16, 43
1. for(a,b,c,d,e,f), ask a*b and b*c, get somehow a,b and c. then d*e and e*f and then d,e,f
2. Now the problem remains how to know the two numbers from their product, if they could be all co-prime then it would have been simpler
*/
#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>
main()
{
	int i;
	int a[6];			//for storing numbers
	int q[4];			// for queries
	int t;				//dummy var
	// we get q[0] = a[0]*a[1]
	t = q[0];
	if(t%43==0)
	{
		a[0] = 43;
		a[1] = t/43;
	}
	else if(t%16==0)
	{
		if(t==80)
		{
			a[0] = 8;
			a[1] = 10;
		}
		else
		{
			a[0] = 16;
			a[1] = t/16;
		}
	}
	else if(t%10==0)
	{
		a[0] = 10;
		a[1] = t/10;
	}
	else if(t%9==0)
	{
		a[0] = 9;
		a[1] = t/9;
	}
	else if(t%8==0)
	{
		a[0] = 8;
		a[1] = t/16;
	}
	// q[1] = a[1] * a[2]
	t = q[1];
	if(t%43==0)
	{
		a[1] = 43;
		a[2] = t/43;
		a[0] = q[0]/43;
	}
	else if(t%16==0)
	{
		if(t==80)
		{
			a[0] = 8;
			a[1] = 10;
		}
		else
		{
			a[0] = 16;
			a[1] = t/16;
		}
	}
	else if(t%10==0)
	{
		a[0] = 10;
		a[1] = t/10;
	}
	else if(t%9==0)
	{
		a[0] = 9;
		a[1] = t/9;
	}
	else if(t%8==0)
	{
		a[0] = 8;
		a[1] = t/16;
	}
// Sorry couldn't complete 

	
	


}