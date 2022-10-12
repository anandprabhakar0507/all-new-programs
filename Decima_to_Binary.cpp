// C++ program to convert a decimal
// number to binary number

#include <iostream>
using namespace std;

void converter(int n)
{
	int Num[32];
	int i = 0;
	while (n > 0) {
		Num[i] = n % 2;
		n = n / 2;
		i++;
	}

	for (int j = i - 1; j >= 0; j--)
		cout << Num[j];
}

int main()
{
	int n;
    cin>>n;
	converter(n);
	return 0;
}
