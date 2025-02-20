#include <stdio.h>
#include <math.h>

int main(){
   // nhap he so a,b,c
   int a,b,c;
   scanf("%d %d %d",&a,&b,&c);
   // TH1 : a khac 0 -> giai phuong trinh bac hai
   if(a!=0){
      float dental = b*b - 4*a*c;
      // kiem tra gia tri dental va giai phuong trinh bac 2
      if(dental == 0){
         float nghiem_boi = -b/(2*a);
         printf("Phuong trinh co nghiem duy nhat la : x = %.2lf\n",nghiem_boi);
      }
      else if(dental>0){
         float nghiem_x1 = (-b+sqrt(dental))/(2*a);
         float nghiem_x2 = (-b-sqrt(dental))/(2*a);
         printf("Phuong trinh co hai nghiem phan biet la : x1 = %.2lf va x2 = %.2lf\n",nghiem_x1,nghiem_x2);
      }
      else{
         printf("Phuong trinh vo nghiem\n");
      }
   }
   // TH2 : giai phuong trinh bac nhat neu a =0
   else {
      float nghiem_bac_nhat = -c/b;
      printf("Nghiem phuong trinh bac nhat la : x = %.2lf\n",nghiem_bac_nhat);
   }
}