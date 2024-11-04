#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
int a,b,c=0,d=0,e,i,j=0,k=-1,array[32],s,t; /* a preference - b number - c division item - d mode item - s base 10 system number - t calculation item */
printf("To convert your number from binary to decimal,\n type 0, to convert from decimal to binary, type 1.\n");
scanf("%d",&a);
for(i=0;i<32;i++){
array[i]=0;
}
if(a==1){
printf("Enter the number you want to convert to binary system : ");
scanf("%d",&b);
for(i=31;i>1;i--){
c=b%2;
b=b/2;
array[i]=c;
}
for(i=0;i<32;i++){
printf("%d",array[i]);
}
}
else if(a==0){
printf("Enter the number you want to convert to decimal system. : ");
scanf("%d",&b);
if(b!=0 && b!=1){
while(b>=pow(10, k)){
k=k+1;
}
printf("\n%d Your digit number\n",k);
s=0;
for(i=1;i<=k;i++){
printf("i = %d and k = %d entered the loop for b = %d\n",i,k,b);
if(b-pow(10, k-i-1)>=pow(10, k-i-1)){
printf("Entered into if i = %d k = %d\n inside of if %d>=%d\n",i,k,b-pow(10, k-i),pow(10, k-i-1));
s=s+pow(2, k-i);
printf("s = %d \n",s);
b=b-pow(10, k-i);
printf("b = %d\n",b);
}
}
printf("%d Your value",s);
}
else if(b==1){
s=1;
printf("%d Your value",s);
}
else{
s=0;
printf("%d Your value",s);
}
}
else{
printf("You did not enter a correct value, please restart the program, restart it and try again.");
}
return 0;
}

