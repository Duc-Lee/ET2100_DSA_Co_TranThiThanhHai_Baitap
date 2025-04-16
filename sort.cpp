#include <stdio.h>
void swap(int *a,int*b){
   int tmp = *a;
   *a = *b;
   *b = tmp;
}
// thuat toan sap xep chon 
void selectionsort(int a[], int n ){
   for(int i=0;i<n-1;i++){
      int m = i;
      for(int j = i+1;j<n;j++){
         if(a[m]>a[j]) m = j;
      }
      swap(&a[m],&a[i]);
   }
}
// thua toan sap xep chon
void insertionsort(int a[], int n){
   for(int i =1;i<n-1;i++){
      int key = a[i];
      int j = i-1;
      while(j>=0 && a[j] > key){
         a[j+1] = a[j];
         j--;
      }
      a[j+1] = key;
   }
}
// thuat toan sap xep noi bot 
void bublesort(int a[], int n){
   for(int i =0;i<n-1;i++){
      for(int j =0;j<n-1;j++){
         if(a[j]>a[i]) swap(&a[i],&a[j]);
      }
   }
}
// thuat toan sap xep nhanh 
void quicksort(int a[], int l, int h){
   if(l>h) return;
   int pivot = a[l];
   int i = l+1, j = h;
   while(i<=j){
      while(a[i]<pivot) i++;
      while(a[j]>pivot) j--;
      if(i<j){
         swap(&a[i],&a[j]);
         i++;j--;
      }
   }
   swap(&a[l],&a[j]);
   quicksort(a,l,j-1);
   quicksort(a,j+1,h);
}
// thuat toan sap xep tron
