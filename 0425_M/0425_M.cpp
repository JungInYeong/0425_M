//�ǽ�2 �������迭
#include <iostream>
using namespace std;

int main()

{
	string pyo[5][4] = {
		{"�̸�", "����", "����", "����"},
		{"������", "19", "66", "68" },
		{"������", "20", "73", "94" },
		{"�谡��", "19", "58", "37" },
		{"������", "20", "82", "29" }
	};

	int col = sizeof(pyo[0]) / sizeof(string); // 2���� �迭 ����ũ�� ���ϱ�, ���� �� ���� ũ�⸦ ����� ũ��� ������
	int row = sizeof(pyo) / sizeof(pyo[0]);    // 2���� �迭 ����ũ�� ���ϱ�, �迭�� �����ϴ� ��ü ������ ���� �� ���� ũ��� ������


	string age;
	cout << "���̸� �Է��ϼ��� : ";
	cin >> age;

	string col_first = pyo[0][0];  //�̸� 
	string col_third = pyo[0][3];  // ����

	// j, i
	cout << col_first << "   " << col_third << endl;


	for (int i = 0; i < row; i++)  
	{
		for (int j = 0; j < col; j++) 
		{
			//cout << col_first << " " << col_third << endl;
			if (j == 1)                                              // ���̰� ���ٸ�
			{
				if (pyo[i][j] == age)
				{
					cout << pyo[i][0]<< " " << pyo[i][3] << endl;
				}

			}
			//cout << pyo[i][j] << " ";
		}
		//cout << endl;
	}


	return 0;
}