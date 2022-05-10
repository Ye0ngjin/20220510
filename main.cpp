#include <iostream>

using namespace std;

int main()
{re:
	int A = 0;
	cout << "1부터 10까지의 정수를 입력하시오. "; cin >> A;


	if (A < 0)
	{
		goto re;
	}

	int* Array = new int[A];

	for (int i = 0; i < A; i++)
	{
		cout << (i + 1) << "번째 숫자를 입력하시오.";  cin >> Array[i];
	}

	int total = 0;

	int* ptr_total;

	ptr_total = &total;

	for (int i = 0; i < A; i++)

	{
		total += Array[i];
	}

	cout << "입력한 정수들의 합은 " << *ptr_total << endl;

	delete[] Array;
	return 0;
}