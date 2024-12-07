#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int sayi;
  printf("Bir sayi girin:");
  scanf("%d",&sayi);
  if (sayi==0)
    printf("Girilen sayi sifir");
  else if (sayi > 0)
    printf("Girilen sayi pozitif");
  else
    printf("Girilen sayi negatif\n");


  return 0;
}
