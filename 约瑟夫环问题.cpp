#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    // ����һ����СΪ n+1 ����������ʾ n ���˵�״̬
    int* arr = (int*)malloc(sizeof(int) * (n + 1));
    for (int i = 1; i <= n; i++) 
    {
        arr[i] = 1;  // 1 ��ʾ��λ�õ��˻���
    }
    arr[0] = 0;  // arr[0] ������Чλ�ã�������
    int count1 = 0, count2 = 0, index = 1;  // count1 ��¼��̭������count2 ��¼������

    while (count1 < n - 1)
    {  // ֱ��ֻʣһ����
        if (arr[index] == 1) 
        {  // �����ǰ���λ�õ��˻�����
            count2++;  // ֻ�л����ŵ��˲Żᱻ��
        }

        if (count2 == 3) 
        {  // ÿ���� 3 ����̭�����
            arr[index] = 0;  // ����λ�ñ��Ϊ 0
            count1++;  // ��̭������1
            count2 = 0;  // ���ü���
        }

        index = (index + 1) % (n + 1);  // ���� index ��ѭ��

        // �����Ѿ���̭����
        while (arr[index] == 0)
        {
            index = (index + 1) % (n + 1);  // ����ѭ��ֱ���ҵ����ŵ���
        }
    }

    // �ҵ����һ�����ŵ��˵�λ��
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] == 1)
        {
            printf("%d", i);
            break;
        }
    }

    free(arr);  // �ͷ��ڴ�
    return 0;
}
