//NAME:NABIHA FAISAL, ROLL NO:19I-2174, PROBLEM 1

#include <iostream>
using namespace std;
void drawTriangle(int, char);
//driver program
int main()
{
int h;
char l;
cout<<"\nEnter the height of the triangle ";
cin>>h;
cout<<"\nEnter the letter of the triangle ";
cin>>l;
drawTriangle(h, l);
return 0;
}
//defining the function
void drawTriangle(int h, char l)
{
for (int i=1; i<=h; i++)
{
	for (int j=1; j<=i; j++)
	{
		cout<<l;
	}
	cout<<endl;
}
}

