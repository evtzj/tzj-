//#include<stdio.h>
//#include<stdlib.h>
//void merge(int* arr, int left, int mid, int right)
//{
//	int* temp = (int*)malloc(sizeof(int) * (right - left + 1));
//	int i = left, j = mid + 1,k=0;
//	while (i<=mid&&j<=right)
//	{
//		if (arr[i]<arr[j])
//		{
//			temp[k++] = arr[i++];
//		}
//		else
//		{
//			temp[k++] = arr[j++];
//		}
//	}
//	while (i<=mid&&j>right)
//	{
//		temp[k++] = arr[i++];
//	}
//	while (i>mid&&j<=right)
//	{
//		temp[k++] = arr[j++];
//	}
//	for (int i = 0; i < right-left+1; i++)
//	{
//		arr[left + i] = temp[i];
//	}
//	free(temp);
//}
//void mergesort(int* arr, int left, int right)
//{
//	if (left>=right)
//	{
//		return;
//	}
//	int mid = (left + right) / 2;
//	mergesort(arr, left, mid);
//	mergesort(arr, mid+1, right);
//	merge(arr, left, mid, right);
//}
//int main()
//{
//	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
//	mergesort(arr, 0, 9);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}