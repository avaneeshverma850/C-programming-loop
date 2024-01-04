#include <stdio.h>
int main()
{
  int x;
  printf("Enter Number:\n");
  scanf("%d",&x);
 /* int i=1;
  while(i<=x){
    printf("%d ",i);
    i++;*/
  //Method second
  /*for(int i=1;i<=x;i++){
    printf("%d ",i);
  }*/
  //Sum of natural number 
 /* int i=1;
  int sum=0;
  while(i<=x){
    sum=sum+i;
    i++;
  }
  printf("Sum of natural number is:%d",sum);*/
  //Reverse Number
  int Rev=0;
  while (x>0){
    Rev=Rev*10+x%10;
    x=x/10;
  }
  printf("Reverse of number is:%d",Rev);
}