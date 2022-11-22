//NAME:NABIHA FAISAL, ROLL NO:19I-2174, PROBLEM 5

#include <iostream> 
using namespace std; 
int fib(int );  
//driver program
int main () 
{ 
int n;
cout<<"\nEnter the number of series ";
cin>>n; 
cout<<"\nThe nth number in the fibonacci series is "<<fib(n);  
return 0; 
} 
//defining the function
int fib(int n) 
{ 
if (n<=1) 
	return n; 
return fib(n-1) + fib(n-2); 
} 
