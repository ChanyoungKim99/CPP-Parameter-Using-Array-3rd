#include <iostream>

//	   (int array[2][3], int size1, int size2) ���� �� Ȯ���ϸ�
int Sum(int(* input)[3], int size1, int size2)
{
	int sum{};

	for (int i = 0; i < size1; i++)
	{
		for (int j = 0; j < size2; j++)
		{
			sum += input[i][j];
		}
	}

	return sum;
}

int main()
{
	int array[2][3]
	{
		{1, 2, 3},
		{4, 5, 6}
	};

	std::cout << Sum(array, 2, 3) << std::endl;
}

/*
sum += input[i][j]; ���� �� Ȯ���ϸ�
int(*p)[3] = array;
*/
