
#include <stdio.h>
#include <conio.h>  //getch() için gerekli

//Toplama iþlemi
//Cemalettin Serit ckaynak.com | teknooneri.com | cemserit.com | wpeklentiler.com

int main(){

    int sayi1, sayi2, sonuc;

    printf("Birinci Sayiyi Giriniz: ");
    scanf("%d", &sayi1);

    printf("Ikinci Sayiyi Giriniz: ");
    scanf("%d", &sayi2);

    sonuc = sayi1 + sayi2;

    printf("%d+%d= %d\n", sayi1, sayi2, sonuc);
    printf("merhaba is dunyasi\n");
    printf("turkiyenin sonu ne olacak\n");



    getch(); //Klavyeden bir deðer bekler ve program ekranýn kapanmamasýný saðlar

    return 0; // Programý sonlandýrýr

}
