#include <stdio.h>

int main() {
    
    int marks[5] = {50, 60, 90, 70, 40, 70};  
    int i;

    for (i = 0; i < 8; i++) {
        printf("Mark [%d] = %d \n", i + 1, marks[i]);
    }

    return 0;
}