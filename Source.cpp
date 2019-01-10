#include <iostream>
8
void f()
{
	int arr[3][3]{ {2,4,1}, 
				   {-8,10,3}, 
				   {11,-9,6} };
	int max[3];
	for (int i = 0; i < 3; i++)
		max[i] = 0;
	for (int i = 0; i < 3;i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[j][i] > max[j])
			{
				max[j] = arr[j][i];
				std::cout << " " << max[j] << std::endl;
			}
		}
	}
}

int main()
{
	f();
	system("pause");
	return 0;
}