int main()
{
	printf("hello");

	return 0;

}

int test_copy_array()
{
#define LEN 5

	int x[] = { 1, 2, 3, 4, 5 };
	int y[LEN] = { 0 };

	int size = sizeof(y) / sizeof(y[0]);

	copy_array(x, y, LEN);

	for (int i = 0; i < LEN;)
	{
		if (y[i] != x[i])
		{
			return -1;
		}
	}
	return 0;
}



	