// A simple C++ program to check for
// even or odd
#include <iostream>
using namespace std;

// Returns true if n is even, else odd
bool isEven(int n)
{
	// n&1 is 1, then odd, else even
	return (!(n & 1));
}

// Driver code
int main()
{
	int n;
	cout<<"Enter number here :";
	cin>>n;
	isEven(n) ? cout << "Even" : cout << "Odd";
	return 0;
}

