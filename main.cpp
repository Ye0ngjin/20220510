#include <iostream>

using namespace std;

int main()
{re:
	int A = 0;
	cout << "1���� 10������ ������ �Է��Ͻÿ�. "; cin >> A;


	if (A < 0)
	{
		goto re;
	}

	int* Array = new int[A];

	for (int i = 0; i < A; i++)
	{
		cout << (i + 1) << "��° ���ڸ� �Է��Ͻÿ�.";  cin >> Array[i];
	}

	int total = 0;

	int* ptr_total;

	ptr_total = &total;

	for (int i = 0; i < A; i++)

	{
		total += Array[i];
	}

	cout << "�Է��� �������� ���� " << *ptr_total << endl;

	delete[] Array;
	return 0;
}