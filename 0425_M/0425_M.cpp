//실습2 다차원배열
#include <iostream>
using namespace std;

int main()

{
	string pyo[5][4] = {
		{"이름", "나이", "국어", "수학"},
		{"방지턱", "19", "66", "68" },
		{"정직한", "20", "73", "94" },
		{"김가루", "19", "58", "37" },
		{"조나단", "20", "82", "29" }
	};

	int col = sizeof(pyo[0]) / sizeof(string);
	int row = sizeof(pyo) / sizeof(pyo[0]);

	string age;
	cout << "나이를 입력하세요 : ";
	cin >> age;

	string col_first = pyo[0][0];
	string col_third = pyo[0][3];
	// j, i
	cout << col_first << "   " << col_third << endl;
	for (int i = 0; i < row; i++) 
	{
		for (int j = 0; j < col; j++) 
		{
			//cout << col_first << " " << col_third << endl;
			if (j == 1)
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