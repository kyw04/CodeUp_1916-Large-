#include <iostream>
#define MAX 201
using namespace std;

int arr[MAX];
int fibonacci(int n)
{
	if (n <= 2)
		return 1;
	if (arr[n])
		return arr[n];
	return arr[n] = (fibonacci(n - 2) + fibonacci(n - 1)) % 10009;
}
int main()
{
	int n;
	cin >> n;
	cout << fibonacci(n);
	return 0;
}