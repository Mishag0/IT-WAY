#include <stdio.h>

int main() {
  int N;
  scanf("%d", &N);

  // Определяем количество цифр в числе
  int temp = N;
  int digits = 0;
  while (temp > 0) {
    temp /= 10;
    digits++;
  }

  // Разбиваем число на цифры и сохраняем в массив
  int num[10]; // Достаточно для чисел до 10^7
  temp = N;
  for (int i = digits - 1; i >= 0; i--) {
    num[i] = temp % 10;
    temp /= 10;
  }

  // Выводим цифры с разделением на триады
  for (int i = 0; i < digits; i++) {
    printf("%d", num[i]);
    // Вставляем пробел после каждой триады (кроме последней)
    if ((digits - i - 1) % 3 == 0 && i != digits - 1) {
      printf(" ");
    }
  }

  return 0;
}