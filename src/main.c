#include <stdio.h>
#include <stdlib.h>

int main(void) {

    FILE *inventory = fopen("../inventory.csv","a+");

    if(!inventory) {
        perror("fopen");
        return EXIT_FAILURE;
    }


    fclose(inventory);
    return EXIT_SUCCESS;
}