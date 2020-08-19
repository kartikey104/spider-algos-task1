/*															TASK1 - A
18-08-20, -kartikey104
Given a binary string of length n, we need to find two strings of same length such that on converting to decimal, the two binary numbers have their AM 
as the original number. 
1. given b(dec) we need to find a and c, (a<b and c>b) such that (a+c)/2 = b.
2. whenever a string is composed of all ones (1111), it will not have any solutions, because for the given string length, this is the biggest number.
3. For rest of strings, we can just take the numbers one more and less than the original number. So the problem left with us is that of subtracting and 
   adding one to a binary string.
4. For now I am using two's representation to add and subtract one from the string.
5. Another way can be to use bitwise operators without using arihtmetic operators or minimal use
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int n,i,f=1;
	scanf("%d\n",&n);
	char str[n];
	char s1[n];
	char s2[n];
	for(i=0;i<n;++i)
		{
			scanf("%c",&str[i]);
		if(str[i] == '1')
			continue;
		else
			f = 0;
		}
	if(f)
		printf("\n%d",-1);
	else {
		// add 1(add 000....0001)
		/*while(c==1){
			s1[n-i] = (str[n-i]-48 + c)%2 + 48;
			c = (str[n-i]-48 + c)/2;
			i++;
		}
		while(i<=n)
		{
			s1[n-i] = str[n-i];
			i++;
		}*/
		int c=1;
		for(i=1;i<=n;i++)
		{
			s1[n-i] = (str[n-i]-48 + c)%2 + 48;
			c = (str[n-i]-48 + c)/2;
		}
		// subtract 1( add 11....111)
		c=0;
		for(i=1;i<=n;i++)
		{
			s2[n-i] = (str[n-i]-48+1 + c)%2 + 48;
			c = (str[n-i]-48+1 + c)/2;
		}
		/*printf("%s",s1);
		printf(" %s",s2);*/
		for(i=0;i<n;i++)
		putchar(*(s2+i));
		printf(" ");
		for(i=0;i<n;i++)
		putchar(*(s1+i));
	}
	return;
}
