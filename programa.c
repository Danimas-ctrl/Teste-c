#include <stdio.h>

int main()
{
  int N;
  scanf("%d", &N);

  while (N > 0) {
    printf("%d\n", N % 10);
    N /= 10; /* equivalente a N = N / 10; */
  }

  return 0;
}
