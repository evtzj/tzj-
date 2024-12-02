//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int** arr = (int**)malloc(sizeof(int*) * n);
//	for (int i = 0; i < n; i++)
//	{
//		arr[i] = (int*)malloc(2 * sizeof(int));
//	}
//	int* degree = (int*)malloc(sizeof(int) * n);
//	for (int i = 0; i < n; i++)
//	{
//		degree[i] = 0;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < 2; j++)
//		{
//			scanf("%d",&arr[i][j]);
//		}
//	}
//	
//	for (int i = 0; i < n; i++)
//	{
//		int sum = 0;
//		for (int j = 0; j <2; j++)
//		{
//			sum += arr[i][j];
//		}
//		if (i==0)
//		{
//			degree[i] = sum - 8;
//		}
//		else
//		{
//			degree[i] = sum - 8 + degree[i - 1];
//		}
//	}
//	int x = 0;
//	for (int i = 0; i < n; i++)
//	{
//		x += degree[i];
//	}
//	printf("%d", x);
//	return 0;
//}