#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(){
int a,b,matris[10][10],transpoze[10][10],i,j,x,y;/* a satir, b sutun sayisi - i,j sayac - x deger atama aleti - y en buyuk sayi aleti*/
x=0;
y=0;
printf("matrisinizin boyularini giriniz.\nsatir sayiniz? : ");
scanf("%d",&a);

printf("sutun sayiniz? : ");
scanf("%d",&b);

printf("simdi sizden sirayla satir ve sutun degerlerini girmenizi isteyecegiz.\n\n");
/*deger alma*/
for(j=0;j<b;j++){
printf("%d. satirin degerlerinden basliyoruz.\n",j+1);
for(i=0;i<a;i++){
printf("%d. degeri giriniz : ",i+1);
scanf("%d",&x);
matris[i][j]=x;
}
}

printf("matrisiniz : \n");
/*matrisi ekrana yazdýrma*/
for(j=0;j<b;j++){
for(i=0;i<a;i++){
printf("%d ",matris[i][j]);
}
printf("\n");
}

printf("simdi matrisinizin transpozesini verelim : \n");
/*matris transpoze hesaplama*/
for(i=0;i<a;i++){
for(j=0;j<b;j++){
transpoze[j][i]=matris[i][j];
}
}
/*matris transpoze yazdýrma*/
for(i=0;i<a;i++){
for(j=0;j<b;j++){
printf("%d ",transpoze[j][i]);
}
printf("\n");
}

/* matrisin icindeki en buyuk sayiyi bulma */ 
for(j=0;j<b;j++){
for(i=0;i<a;i++){
if(matris[i][j]>y){
y=matris[i][j];
}
}
}

printf("en buyuk sayiniz : %d",y);
}