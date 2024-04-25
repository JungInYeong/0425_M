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

	int col = sizeof(pyo[0]) / sizeof(string); // 2차원 배열 가로크기 구하기, 가로 한 줄의 크기를 요소의 크기로 나눠줌
	int row = sizeof(pyo) / sizeof(pyo[0]);    // 2차원 배열 세로크기 구하기, 배열이 차지하는 전체 공간을 가로 한 줄의 크기로 나눠줌


	string age;
	cout << "나이를 입력하세요 : ";
	cin >> age;

	string col_first = pyo[0][0];  //이름 
	string col_third = pyo[0][3];  // 수학

	// j, i
	cout << col_first << "   " << col_third << endl;


	for (int i = 0; i < row; i++)  
	{
		for (int j = 0; j < col; j++) 
		{
			//cout << col_first << " " << col_third << endl;
			if (j == 1)                                              // 나이가 같다면
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