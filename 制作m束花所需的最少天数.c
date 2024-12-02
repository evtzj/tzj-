//#include<stdio.h>
//#include<stdbool.h>
//bool canmake(int* bioomday,int size, int m, int k,int mid)
//{
//	int flowers = 0;
//	int bouquets = 0;
//	int length = size;
//	for (int i = 0; i <length&&bouquets<m; i++)
//	{
//		if (bioomday[i]<mid)
//		{
//			flowers++;
//			if (flowers==k)
//			{
//				bouquets++;
//				flowers = 0;
//			}
//		}
//		else
//		{
//			flowers = 0;
//		}
//	}
//	return bouquets >= m;
//}
//int getmintime(int* bloomday, int m, int k,int size)
//{
//	int low = 1,high=1;
//	for (int i = 0; i < size; i++)
//	{
//		if (bloomday[i]>high)
//		{
//			high= bloomday[i];
//		}
//		if (bloomday[i]<low)
//		{
//			low = bloomday[i];
//		}
//	}
//	if (size<(m*k))
//	{
//		return -1;
//	}
//	while (low<high)
//	{
//		int mid = low + (high - low) / 2;
//		if (canmake(bloomday, sizeof(bloomday) / sizeof(int),m,k,mid))
//		{
//			high = mid - 1;
//		}
//		else
//		{
//			low = mid + 1;
//		}
//	}
//	return low;
//
//}
//int main()
//{
//	int bloomDay[] = {1,10,3,10,2};
//	int m, k;
//	scanf("%d %d", &m, &k);
//	int mintime=getmintime(bloomDay, m, k, sizeof(bloomDay) / sizeof(int));
//	printf("%d", mintime);
//	return 0;
//}