/*				TASK1 - B
19-08-20, -kartikey104
7, 8, 9, 10, 16, 43
1. for(a,b,c,d,e,f), ask a*b and b*c, get somehow a,b and c. then d*e and e*f and then d,e,f
2. Now the problem remains how to know the two numbers from their product, if they could be all co-prime then it would have been simpler
*/
#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>
void fun(int *a, int *b)
{
	int t;
	t = &a;
	&a = &b;
	&b = t;
	return;
}
main()
{
	int i,j,count=0;
	int a[6] = {7, 8, 9, 10, 16, 43};
	int ar[6];
	int p[15];
	int q1,q2,q3,q4;
	//q1 = 
	for(i=0;i<6;i++)
	{
		for(j=i+1;j<6;j++)
		{
			p[count++] = a[i] * a[j];
		}
	}

	for(count=0;count<15;count++)
		if(q1==p[count])
		{
			if(count<5)
			{
				ar[0] = 7;
				ar[1] = a[count+1];
			}
			else if(count<9)
			{
				ar[0] = 8;
				ar[1] = a[count-4];
			}
			else if(count<12)
			{
				ar[0] = 9;
				ar[1] = a[count-7];
			}
			else if(count<14)
			{
				ar[0] = 8;
				ar[1] = a[count-9];

			}
			else {
				ar[0] = 16;
				ar[1] = 43;
			}
		}
	
	


}