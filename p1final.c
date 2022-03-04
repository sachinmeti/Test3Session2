#include<stdio.h>


void input(int *num1,int *den1,int *num2,int *den2){
  printf("enter the numerator for 1\n");
  scanf("%d",num1);
  printf("enter the denominator for 1\n");
  scanf("%d",den1);
  printf("enter the numerator for 2\n");
  scanf("%d",num2);
  printf("enter the denominator for 2\n");
  scanf("%d",den2);
}

void add(int num1,int den1,int num2,int den2,int *totalnum,int *totalden){
  int gcd;
  *totalnum=((num1*den2)+(num2*den1));
  *totalden=(den1*den2);
  for(int i=1; i<=*totalnum && i<=*totalden; i++){
    if(*totalnum%i==0 && *totalden%i==0)
       gcd=i;
  }
 printf("the sum is = %d/%d of ",*totalnum/gcd,*totalden/gcd);
}

void output(int num1,int den1,int num2,int den2){
  printf(" %d/%d + %d/%d ",num1,den1,num2,den2);
}

int main(){
  int num1,den1,num2,den2,totalnum,totalden;
  input(&num1,&den1,&num2,&den2);
  add(num1,den1,num2,den2,&totalnum,&totalden);
  output(num1,den1,num2,den2);
  return 0;
}