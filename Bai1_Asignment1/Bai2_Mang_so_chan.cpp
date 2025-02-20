#include <stdio.h>
// Xay dung ham check so chan
int check(int n){
   if(n%2==0) return 1;
   else return 0;
}
int main(){
   int n;
   scanf("%d",&n);
   int a[n];
   for(int i=0;i<n;i++) scanf("%d",&a[i]);
   // duyet tung phan mang va kiem tra
   for(int i=0;i<n;i++){
      if(check(a[i])) printf("%d ",a[i]);
   }
}