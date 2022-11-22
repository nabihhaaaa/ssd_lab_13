//NAME:NABIHA FAISAL, ROLL NO:19I-2174, PROBLEM 3

#include<iostream>
using namespace std;
void converttohexadecimal(int );
//driver program
int main()
{
int n;
cout<<"\nEnter any decimal no. ";
cin>>n;
converttohexadecimal(n);
return 0;
}
//defining the function
void converttohexadecimal( int x)
{
int a, b=0, c;
char hex[100];
do
{
	a=x%16;
	if (a<10)
		hex[b++]=a+48;
	else
		hex[b++]=a+55;
		x=x/16;
}while(x!=0);
b--;
cout<<"\nConversion in hexadecimal is ";
for(c=b; c>=0; c--)
{
	cout<<hex[c];
}
} 
