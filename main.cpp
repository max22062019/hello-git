#include <iostream>

void fib(int n)
{
	int res[2] = {0, 1};
	std::cout << res[0] << std::endl;
	for (int i = 0; i < n - 1; i++)
	{
		std::cout << res[1] << std::endl;
		int temp = res[0] + res[1];
		res[0] = res[1];
		res[1] = temp;
	}
}

int main()
{
	fib(10);
	return 0;
}
