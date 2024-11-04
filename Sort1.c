#include<stdio.h>

//This program takes two arrays, concatenates them, and then sorts the combined array.

int main(int argc, char const *argv[])
{
     int n1=4, n2=5, i, n3=9, temp, j;
    // printf("1. and 2. Enter the size of array : \n");
    // scanf("%d%d", &n1, &n2);
    // n3=n1+n2;
    int arr1[4], arr2[5], arr3[9];
    printf("Enter the 1.arrays elements : \n");
    for(i=0;i<n1;i++){
        printf("Enter the %d.element : \n", i+1);
        scanf("%d",&arr1[i]);
        arr3[i]=arr1[i];
    }
    printf("Enter the 2.arrays elements : \n");
     for(i=0;i<n2;i++){
        printf("Enter the %d.element : \n", i+1);
        scanf("%d",&arr2[i]);
        arr3[n1+i]=arr2[i];
    }
    //We will sort the elements of arr3.
    for(j=0;j<n3;j++){
        for(i=0;i<n3;i++){
            if(arr3[i]>arr3[i+1]){
                temp=arr3[i+1];
                arr3[i+1]=arr3[i];
                arr3[i]=temp;
            }
        }
    }
    for(i=0;i<n3;i++){
        printf("%d.element : %d \n", i+1,arr3[i]);
    }
    return 0;
}
