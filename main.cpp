#include <iostream>

using namespace std;

int main()
{re:
	int A = 0;
	cout << "�Է��ϰ� ���� ������ŭ�� ������ �Է��Ͻÿ�(1~10). "; cin >> A;


	if (A < 1)
	{
		goto re;
	}
	else if (A > 10)
	{
		goto re;
	}

	int* Array = new int[A];

	for (int i = 0; i < A; i++)
	{
		cout << (i + 1) << "��° ������ �Է��Ͻÿ�.";  cin >> Array[i];
	}

	int Add = 0;


	for (int i = 0; i < A; i++)

	{
		Add += Array[i];
	}

	cout << "�Է��� �������� ���� : " << Add << endl;

	int temp = 0;
	for (int i = 1; i < A; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (Array[i] < Array[j])
			{
				temp = Array[i];
				for (int k = i - 1; k >= j; k--)
				{
					Array[k + 1] = Array[k];
				}
				Array[j] = temp;
			}
		}
	}

	cout << "�Է��� ���ڵ��� ���� : ";

	for (int i = 0; i < A; i++)
	{
		cout << Array[i] << ", ";
	}

	cout << endl;

	delete[] Array;

	return 0;
}