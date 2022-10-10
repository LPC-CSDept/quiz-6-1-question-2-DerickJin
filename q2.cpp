#include <iostream>
#include <iomanip>
using namespace std;

void printResult(int n1, int n2, int n3, int min);
// ******************************
void getInput(int& n1, int& n2, int& n3)
{
	cout << "Enter three numbers: ";
	cin >> n1 >> n2 >> n3;
}
int findMin(int& n1, int&n2, int&n3)
{
	int min = n1;
	if (min > n2)
	{
		min = n2;
	}

	if (min > n3)
	{
		min = n3;
	}
	
	return min;
}

int main()
{
	int n1, n2, n3, min;
	getInput(n1, n2, n3);
	min = findMin(n1, n2, n3);
	printResult(n1, n2, n3, min);
}
// ******************************
// this function will help you pass the test. When you print the result with this function, you will get the same output format
void printResult(int n1, int n2, int n3, int min)
{
	cout << n1 << " " << n2 << " " << n3 << " " << min << " " << endl;
}