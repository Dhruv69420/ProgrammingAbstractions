#include <stdio.h>

int main()
{
     int mat1[2][2] = {{1,2},{3, 4}};
 
     int mat2[2][2] = {{1,1},{1,1}};
 
    int res[2][2]; 
    
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            res[i][j] = 0;
            for (int k = 0; k < 2; k++)
                res[i][j] += mat1[i][k] * mat2[k][j];
        }
    }
 
    printf("Result matrix is \n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++)
            printf("%d ", res[i][j]);
        printf("\n");
    }
    return 0;
}
