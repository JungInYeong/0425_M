#include <iostream>
#define Size 9
using namespace std;

void reverse(int* arr)
{
	for (int i = 0; i < Size / 2; i++)
	{
		int temp;
		temp = *(arr + i);
		*(arr + i) = *(arr + (Size - i - 1));
		*(arr + (Size - i - 1)) = temp;

	}

}


int main()
{
	int number[Size] = { 1,2,3,4,5,6,7,8,9 };
	
	reverse(&number[0]);

	for (int j = 0; j < Size; j++)
	{
		cout << number[j] << " ";
	}



	return 0;
}

