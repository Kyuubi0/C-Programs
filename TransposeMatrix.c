#include <stdio.h>
#include <stdlib.h>

void main(){
int a,b,matrix[10][10],transpoze[10][10],i,j,x,y;/* a line, b column - i,j counter - x value assignment variable - y largest number variable*/
x=0;
y=0;
printf("Enter the dimensions of your matrix.\nnumber of rows? : ");
scanf("%d",&a);

printf("your column count? : ");
scanf("%d",&b);

printf("Now we will ask you to enter the row and column values, respectively.\n\n");
/*taking values*/
for(j=0;j<b;j++){
printf("%d. We start from the values ​​of the line.\n",j+1);
for(i=0;i<a;i++){
printf("%d. value: ",i+1);
scanf("%d",&x);
matrix[i][j]=x;
}
}

printf("your matrix : \n");
/*printing matrix to screen*/
for(j=0;j<b;j++){
for(i=0;i<a;i++){
printf("%d ",matrix[i][j]);
}
printf("\n");
}

printf("Now let's transpose your matrix : \n");
/*matrix transpose calculation*/
for(i=0;i<a;i++){
for(j=0;j<b;j++){
transpoze[j][i]=matrix[i][j];
}
}
/*matrix transpose printing*/
for(i=0;i<a;i++){
for(j=0;j<b;j++){
printf("%d ",transpoze[j][i]);
}
printf("\n");
}

/* Finding the largest number in a matrix */ 
for(j=0;j<b;j++){
for(i=0;i<a;i++){
if(matrix[i][j]>y){
y=matrix[i][j];
}
}
}

printf("Your max number : %d",y);
}