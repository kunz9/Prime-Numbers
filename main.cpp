#include <iostream>
#include <math.h> 
using namespace std;
// Make functions to create a cleaner main function

int main() {
	int x =1000; //  Declaring a variable x and that x is = to 1000

	cout << "Please input 1000 : "; //  cout to get the input value from user. Flaw as user has to input 1000, room for error
	cin >> x;


	cout << "Here is the list of all the prime numbers Below " << x << endl;
	
	//implementing loop to figure out prime numbers in 1000
	for (int m = 2; m < x; m++)   
		for (int n = 2; n * n <= m; n++)
		{
			if (m % n == 0)
				break;
			else if (n + 1 > sqrt(m)) {//this is the equation to find prime numbers of a certain value as it tests one value at a time 
				cout << m << endl;
			}
		}

	return 0;
}