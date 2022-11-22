//NAME:NABIHA FAISAL, ROLL NO:19I-2174, PROBLEM 4

#include <iostream>
using namespace std;
bool perf(long int );
//driver program
int main()
{
cout<<"\nPerfect numbers till 1000 are: ";
for (int n=2; n<1000; n++)
{
	if (perf(n))
		cout<<n<<" ";
}
return 0;
}
//defining the function
bool perf(long int n)
{
	long int s=1;
	for (long int x=2; x*x<=n; x++)
	{
		if (n%x==0)
		{
			if (x*x!=n)
				s=s+x+n/x;
			else
				s=s+x;
		}
	}
	if ((s==n)&&(n!=1))
		return true;
		return false;
}
		

 
