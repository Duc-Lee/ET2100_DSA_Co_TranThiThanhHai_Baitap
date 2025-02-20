#include <stdio.h>
// ham tinh tien theo khoang cach
float phi_theo_kc(int khoang_cach){
   float tien = 0;
   if(khoang_cach <= 2) 
      tien = 5;
   else 
      tien = 5 + ((khoang_cach - 2) / 0.1) * 0.15; 
   return tien;
}
int main() {
   int khoang_cach, thoi_gian;
   scanf("%d %d", &khoang_cach, &thoi_gian);
   float tien = 0;
   // Tinh tien theo thoi gian cho
   if(thoi_gian <= 30) {
      tien = 3;
   } else {
      tien = 3 + ((thoi_gian - 30) / 10) * 0.5;
   }
   // Tinh tien theo khoang cach
   tien += phi_theo_kc(khoang_cach);
   printf("So tien phai tra la: %.2f$\n", tien);
}
