#include <iostream>
using namespace std;

int main()
{
	int student;
	double sum = 0; //평균을 위한 성적 덧셈

	cout << "몇 명의 학생입니까? : ";
	cin >> student;

	// 동적
	int* grad = new int[student];

	// 시작
	for (int i = 0; i < student; i++)
	{
		cout << i + 1 << "번 학생의 성적을 입력하세요 : ";
		cin >> grad[i];
		sum = grad[i] + sum;

		if (student == i + 1)
		{
			cout << "성적 평균 : " << sum/student;
			break;
		}
	}
	delete[] grad;

	return 0;
}