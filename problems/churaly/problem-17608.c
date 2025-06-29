#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 백준에서 문제를 푼 뒤
// 이곳에도 코드를 복사해서
// 깃헙에 제출하면 됨

int main() {
    int N;
    int h_N;
    int h_max = 0;
    int h[100000] = {0};
    int count = 1;
    scanf("%d",&N);
    for (int i = 0; i < N; i++)   
    {
        scanf("%d", &h[i]);
    }
    h_N = h[N-1];
    for (int i = N-2; i >= 0; i--)
    {
        if ((h[i] > h_max)&&(h[i] > h_N))
        {
            count++;
            h_max = h[i];
        }
    }
    printf("%d", count);
}