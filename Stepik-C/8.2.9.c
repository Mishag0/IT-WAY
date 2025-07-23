#include <stdio.h>

void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void shiftColumnDown(int matrix[][10], int col, int N, int k) {
    // Временный массив для хранения столбца
    int temp[10];
    for (int i = 0; i < N; i++) {
        temp[i] = matrix[i][col];
    }

    // Реверс всего временного массива
    reverse(temp, 0, N - 1);
    // Реверс первых k элементов
    reverse(temp, 0, k - 1);
    // Реверс оставшихся N - k элементов
    reverse(temp, k, N - 1);

    // Возвращаем столбец обратно в матрицу
    for (int i = 0; i < N; i++) {
        matrix[i][col] = temp[i];
    }
}

int main() {
    int N;
    scanf("%d", &N);

    int matrix[10][10];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int K;
    scanf("%d", &K);

    // Нормализация K
    K = K % N;

    // Сдвигаем каждый столбец вниз на K позиций
    for (int j = 0; j < N; j++) {
        shiftColumnDown(matrix, j, N, K);
    }

    // Вывод результата
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}