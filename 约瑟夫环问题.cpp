#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    // 创建一个大小为 n+1 的数组来表示 n 个人的状态
    int* arr = (int*)malloc(sizeof(int) * (n + 1));
    for (int i = 1; i <= n; i++) 
    {
        arr[i] = 1;  // 1 表示该位置的人还在
    }
    arr[0] = 0;  // arr[0] 代表无效位置，不参与
    int count1 = 0, count2 = 0, index = 1;  // count1 记录淘汰人数，count2 记录数到几

    while (count1 < n - 1)
    {  // 直到只剩一个人
        if (arr[index] == 1) 
        {  // 如果当前这个位置的人还活着
            count2++;  // 只有还活着的人才会被数
        }

        if (count2 == 3) 
        {  // 每数到 3 就淘汰这个人
            arr[index] = 0;  // 将该位置标记为 0
            count1++;  // 淘汰人数加1
            count2 = 0;  // 重置计数
        }

        index = (index + 1) % (n + 1);  // 更新 index 并循环

        // 跳过已经淘汰的人
        while (arr[index] == 0)
        {
            index = (index + 1) % (n + 1);  // 继续循环直到找到活着的人
        }
    }

    // 找到最后一个活着的人的位置
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] == 1)
        {
            printf("%d", i);
            break;
        }
    }

    free(arr);  // 释放内存
    return 0;
}
