#include <stdio.h>

int main(void) {
    int N, M;
    scanf("%d %d", &N, &M);

    if (N > 10 || M > 10) {
        return 0;
    }

    int arr[N][M];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Суммируем столбцы с конца (от M-1 до 0)
    for (int j = M - 1; j >= 0; j--) {
        int sum = 0;
        for (int i = 0; i < N; i++) {
            sum += arr[i][j];  // Суммируем элементы столбца j
        }
        printf("%d ", sum);    // Выводим сумму столбца
    }

    return 0;
}