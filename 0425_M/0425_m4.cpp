#include <iostream>
using namespace std;

int main()
{
	int student;
	double sum = 0;
	cout << "몇 명의 학생입니까? : ";
	cin >> student;


	int* grad = new int[student];
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