#include <stdio.h>
#include <stdlib.h>

#define Staff 3
#define Product 5

int main(void)
{
    int i, j, total = 0, x, y;
    int selling_matrix[Staff][Product];
    int max_staff[Staff];
    int max_product[Product];

    // we are creating selling_matrix in here.
    for (i = 0; i < Staff; i++) {
        for (j = 0; j < Product; j++) {
            printf("How many %d.product did %d.employee sell? :\n", i + 1, j + 1);
            scanf("%d", &selling_matrix[i][j]);
        }
        max_staff[i] = 0;
        max_product[i] = 0;
    }

    // we are finding for every employee how many product did they sell and we are finding total selling.
    for (i = 0; i < Staff; i++) {
        for (j = 0; j < Product; j++) {
            max_staff[i] += selling_matrix[i][j];
            total += selling_matrix[i][j];
        }
        printf("%d.employee sold %d pieces\n", i + 1, max_staff[i]);
    }

    // we are finding for every product how many products were sold
    for (j = 0; j < Product; j++) {
        for (i = 0; i < Staff; i++) {
            max_product[j] += selling_matrix[i][j];
        }
        printf("For %d.product sold %d.times\n ", j+1, max_product[j]);
    }

    printf("the company's all sellings is %d\n", total);

    // we compare the best selling product
    x = max_product[0];
    y = 0;
    for (i = 1; i < Product; i++) {
        if (x < max_product[i]) {
            x = max_product[i];
            y = i+1;
        }
    }
    printf("the best selling is %d.product and it sold %d times.\n", y+1, x);

    // we compare the best seller employee
    x = max_staff[0];
    y = 0;
    for (i = 1; i < Staff; i++) {
        if (x < max_staff[i]) {
            x = max_staff[i];
            y = i+1;
        }
    }
    printf("the best seller employee is %d and it sold %d times.\n", y, x);

    total = 0;
    y = 0;
    for (i = 2; i <= 3; i++) {
        total += max_product[i];
    }
    max_staff[j] = total;

    x = max_staff[0];
    for (i = 0; i < 5; i++) {
        if (x < max_staff[i]) {
            x = max_staff[i];
            y = i + 1;
        }
    }
    printf("for the sum of 3. and 4. products the best seller staff is %d and he/she sold %d products.\n", y, x);
    return 0;
}