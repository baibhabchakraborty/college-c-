#include<stdio.h>
#include<conio.h>
void main()

{
	int n,rev=0,temp,rem;
	printf("Enter an integer number\n");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	printf("Reverse  is:%d\n",rev);
	if(rev==temp)
		printf("The number is a palindrome\n");
	else
		printf("The number  is not a palindrome\n");
getch();
}

