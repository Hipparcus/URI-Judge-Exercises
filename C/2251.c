#include <stdio.h>
 // Exercício 2251
int main()
{
  int n, teste=1;
  while (scanf("%d", &n) == 1 && n > 0)
    {
      printf("Teste %d\n%d\n\n", teste++, (1 << n) - 1);
    }
  return 0;
}
