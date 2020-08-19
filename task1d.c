/*			TASK1 - D
18-08-20, -kartikey104
1. Enter data into two strings. For every time he has a contest, check if he ate chicken, if he did, then increase rating, else decrease. at last check
if end rating is more than 1500
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
	int n,r,x,y,i;
	
	scanf("%d %d %d %d\n",&n,&r,&x,&y);
	int fr = r;
	char *c,*s;
	c = malloc((n+1)*sizeof(char));
	s = malloc((n+1)*sizeof(char));
	for(i=0;i<n;i++)
		scanf("%c ",&c[i]);
	c[n]=0;
	
	for(i=0;i<n;i++)
		scanf(" %c",&s[i]);
	s[n]=0;
	for(i=0;i<n;i++)
		if(c[i] == '1')
		{
			if(s[i] == '1')
			fr += x;
			else
			fr -= y;
		}
	
	if(fr>r)
		printf("promoted");
	else if(fr<r)
		printf("demoted");
	else
		printf("no change");
	if (c !=0)
	{
 		free(c);
 		c=0;
	}
	if (s !=0)
	{
 		free(s);
 		s=0;
	}
return;
}
