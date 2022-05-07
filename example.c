#include<stdio.h>
 #include<string.h>
float l ;
int a ;
void proc(int a,float b){
l=a * b;
printf("%s%d%s%f%s%f%s","a*b=",a,"*",b,"=",l,"\n");
 }
int main(){
a=6;
l=3.500000;
proc(6,3.500000);
}