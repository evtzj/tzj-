//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	//����n�����ݣ�����������
//	int n,x,y;
//	scanf("%d", &n);
//	//�����ĸ����飬�ֱ�洢��̺�������Լ�����
//	int* arr1 = (int*)malloc(n * sizeof(int));
//	int* arr2 = (int*)malloc(n * sizeof(int));
//	int* arr3 = (int*)malloc(n * sizeof(int));
//	int* arr4 = (int*)malloc(n * sizeof(int));
//	//����n����̺�������Լ�����
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d %d %d %d", &arr1[i], &arr2[i], &arr3[i], &arr4[i]);
//	}
//	scanf("%d %d", &x, &y);
//	
//	int index = -1;
//	//����n����̺���жϵ��Ƿ��ڵ�̺�ϣ�����ڵ�̺�ϣ������̺�ı��
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