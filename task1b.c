/*				TASK1 - B
18-08-20, -kartikey104
Find the degree of symmetry of a string
1. So, I am using two counters, one to increase degree and other to half the string.
*/
#include<stdio.h>
#include<string.h>
int fun(int m, char* p)
{
	int i,f=1;
	for(i=0;i<m;i++)
		if(*(p+i) != *(p+m+i))
			{
				f=0;
				break;
			}
	return(f);
}
main()
{
	int n,m,count=0;
	scanf("%d\n",&n);
	char *s;
	s = malloc((n+1)*sizeof(char));
	gets(s);
	s[n+1] = 0;

	// for loop to tell everytime if stirng is symmetric then continue and increase count, else break;
	while(n>1)
	{
		m = n/2;		// index of middle character
		n = n/2;		//half the string
		if(fun(m, s))
		count++;
		else
		n=1;
	}
	printf("%d",count);
	if (s !=0)
	{
 		free(s);
 		s=0;
	}
	return;
}
