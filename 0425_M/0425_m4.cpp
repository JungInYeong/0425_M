#include <iostream>
using namespace std;

int main()
{
	int student;
	double sum = 0; //����� ���� ���� ����

	cout << "�� ���� �л��Դϱ�? : ";
	cin >> student;

	// ����
	int* grad = new int[student];

	// ����
	for (int i = 0; i < student; i++)
	{
		cout << i + 1 << "�� �л��� ������ �Է��ϼ��� : ";
		cin >> grad[i];
		sum = grad[i] + sum;

		if (student == i + 1)
		{
			cout << "���� ��� : " << sum/student;
			break;
		}
	}
	delete[] grad;

	return 0;
}