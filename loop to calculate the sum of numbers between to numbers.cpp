#include <iostream>
using namespace std;
int main() {
	int n,m, sum = 0;
	cout << "Enter two number the first must be small then the second\n";
	cin >> n >> m;
	if (n < m)
	{
		for (int i = n; i <= m; i++)
			sum += i;
		cout << "The sum of number between the two number is\t" << sum << endl;
	}
	else
		cout << "the first number must be small than the second ";
	system("pause");
}