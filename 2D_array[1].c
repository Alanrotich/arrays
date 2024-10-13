#include <stdio.h>

int main() {
    
    int marks[2][3] = {{50, 60, 90}, {70, 40, 70}};
    int i, j;

    // Loop through the rows and columns of the 2D array and print each element
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("Mark [%d][%d] = %d\n", i, j, marks[i][j]);
        }
    }

    return 0;
}