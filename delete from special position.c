#include <stdio.h>
int main(){
 int a[100], i , j ,ele, pos, c;
 printf("Enter a number :");
 for (i=0;i<5;i++){
 scanf("%d",&a[i]);
 }
 printf("Enter a position to insert");
 scanf("%d",&pos);
 printf("Enter a element to insert ");
 scanf("%d",&ele);
 for (i=5-2;i>=pos-1;i--){
 a[i+1]=a[i];
 a[pos-1]=ele;
}
for (i=0;i<5;i++){
printf("%d\t",a[i]);
}
}
