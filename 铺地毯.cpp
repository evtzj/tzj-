//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	//定义n行数据，地面点的坐标
//	int n,x,y;
//	scanf("%d", &n);
//	//定义四个数组，分别存储地毯的坐标以及长宽
//	int* arr1 = (int*)malloc(n * sizeof(int));
//	int* arr2 = (int*)malloc(n * sizeof(int));
//	int* arr3 = (int*)malloc(n * sizeof(int));
//	int* arr4 = (int*)malloc(n * sizeof(int));
//	//输入n个地毯的坐标以及长宽
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d %d %d %d", &arr1[i], &arr2[i], &arr3[i], &arr4[i]);
//	}
//	scanf("%d %d", &x, &y);
//	
//	int index = -1;
//	//遍历n个地毯，判断点是否在地毯上，如果在地毯上，输出地毯的编号
//	for (int i = 0; i < n; i++)
//	{
//		if (x >= arr1[i] && x <= (arr1[i] + arr3[i]) && y >= arr2[i] && y <=arr2[i]+arr4[i])
//		{
//			index = i+1;
//		}
//	}
//	printf("%d", index);
//	return 0;
//}