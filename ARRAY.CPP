//c++ program to add only thhe even numbers of an array





#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[20],n;
	cout<<"Enter nnumber of elements::";     //taking input
	cin>>n;
	cout<<"Enter your array elements::";    //taking input
	for(int i=0;i<n;i++)
	  cin>>a[i];
	int count=0;                   //count is initialized as a place to add the array elements
	for(int j=0;j<n;j++)
	{
		if(j%2==1)
		{
			count=count+a[j];
		}
	}
	cout<<"The output is::"<<count;            //Display
	getch();
}
