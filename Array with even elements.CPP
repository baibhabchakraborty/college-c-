#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[20],n;
	cout<<"Enter nnumber of elements::";
	cin>>n;
	cout<<"Enter your array elements::";
	for(int i=0;i<n;i++)
	  cin>>a[i];
	int count=0;
	for(int j=0;j<n;j++)
	{
		if(j%2==1)
		{
			count=count+a[j];
		}
	}
	cout<<"The output is::"<<count;
	getch();
}
