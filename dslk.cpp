#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
// dinh nghia 1 node 
struct node{
   int data;
   struct node *next;
};
typedef struct node node;
// duyet mot node
void duyet(node *head){
   while(head!=NULL){
      printf("%d ",head);
      head = head->next;
   }
}
// In ra so luong phan tu cac node
int size(node *head){
   int cnt =0; // bien dem
   while(head!=NULL){
      ++cnt;
      head = head->next;
   }
   return cnt;
}
// xay dung them mot node moi
node* makenode(int x){
   // cap phat dia chi node
   node *newnode = (node*)malloc(sizeof(node)); // luu y phai cap phat node moi
   newnode->data = x;
   newnode->next = NULL;
   return newnode;
}
// Them vao dau danh sach
void pushfront(node **head,int x){
   node *newnode = makenode(x);
   newnode->next = (*head);
   (*head) = newnode; // gan con tro head cho newnode
}
// them phan tu vao cuoi danh sach
void pushback(node **head,int x){
   node *newnode = makenode(x);
   node *tmp = (*head);
   // kiem tra danh sach co rong khong 
   if(tmp == NULL){
      (*head) = newnode; // DS rong thi dia chi con tro head se tro vao newnode
      return;
   }
   while(tmp!=NULL){
      tmp = tmp->next;
   }
   tmp->next = newnode; // khong can gan lai dia chi newnode vi node moi la NULL
}
// them phan tu vao thu k
void pushknode(node **head,int k, int x){
   int n = size(*head);
   if(k<1 || k>n+1) return;
   if(k == 1) pushfront(head,x);
   else if(k==n+1) pushback(head,x);
   else{
      node *tmp = (*head);
      for(int i=0;i<k-1;i++){
         tmp = tmp->next;
      }
      node *newnode = makenode(x);
      newnode->next = tmp->next;
      tmp->next = newnode;
   }
}
// xoa phan tu dau
void popfront(node **head,int x){
   if(*head == NULL) return;
   node* tmp = (*head);
   *head = (*head)->next;
   free(tmp);
}
// xoa phan tu cuoi
void popback(node **head,int x){
   if(*head == NULL) return;
   node *tmp = (*head);
   // TH1 chi co 1 node 
   if(tmp->next == NULL){
      *head = NULL;
      free(tmp);
   }
   // TH2 con lai
   while(tmp->next->next != NULL){
      tmp = tmp->next;
   }
   // luu node cuoi cung
   node* last = tmp->next;
   tmp->next = NULL;
   free(last);
}
// xoa phan tu thu k
void xoaknode(node**head, int k, int x){
   int n = size(*head);
   if(k<1 || k>n ) return;
   if(k == 1) popfront(head,x);
   else{
      node*truoc = *head;
      node*sau = *head;
      for(int i =1;i<k-1;i++){
         sau = truoc;
         truoc= truoc->next; // tro den thg k muon xoa
      }
      sau->next = truoc->next;
      free(truoc);
   }
}
// tim node co gia tri lon nhat
void maxnode(node* head){
   int res = -1e9;
   while(head!=NULL){
      res = fmax(res,head->data);
      head = head->next;
   }
   printf("%d\n",res);
}
// tim node thu k
void searchnode(node* head,int pos){
   int n = size(head);
   if(pos <1 || pos > n) return;
   node *tmp = (head);
   for(int i =1;i<pos-1;i++){
      tmp = tmp->next;
   }
   printf("%d",tmp->data);
}
void sortnode(node**head){
   for(node *i = *head;i!=NULL;i = i->next){
      node *m = i;
      for(node* j = i->next;j!=NULL;j=j->next){
         if(m->data>i->data) m = j;
      }
      int tmp = m->data;
      m->data = i->data;
      i->data = tmp;
   }
}
int main(){

}