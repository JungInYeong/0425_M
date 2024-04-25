#include <iostream>
#define num 10
using namespace std;


void reverse(int* rever);
void reverse2(int rever[]);

int main()
{
	int number[num] = {1,2,3,4,5,6,7,8,9,10};

	cout << "원래순서 "; reverse(number);
	cout << endl;
	cout << "역순";  reverse2(number);

	return 0;
}


void reverse(int*rever)
{
	for (int i = 0; i < num; i++)
	{
		cout << rever[i];
	}
}

void reverse2(int rever[])
{
	for (int i = num - 1; i > 0; i--)
	{
		cout << rever[i];
	}
}