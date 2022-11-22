//NAME:NABIHA FAISAL, ROLL NO:19I-2174, PROBLEM 2

#include <iostream>
using namespace std;
bool reduce(int, int);
//driver program
int main()
{
	int n, d;
	cout<<"\nEnter the numerator ";
	cin>>n;
	cout<<"\nEnter the denominator ";
	cin>>d;
	reduce (n, d);
	return 0;
}
//defining the function
bool reduce(int n, int d)
{
int r;
	if (d>1)
	{
		for (int i=1; i<=n||i<=d; i++)
		{
			if ((n%i==0)&&(d%i==0))
			{
				r=i;
			}
		}
		cout<<"\nReduce("<<n<<","<<d<<") should print "<<n/r<<"/"<<d/r<<endl;			
	}
	else
	{
		cout<<"\nReduce("<<n<<","<<d<<") should print ""Fraction error!!!"<<endl;
		return 0;
	}
}

