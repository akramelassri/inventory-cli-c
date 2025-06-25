#include <stdio.h>
#include <stdlib.h>

#include "ui.h"

int main(void) {
    FILE *inventory = fopen("inventory.csv", "a+");

    if (!inventory) {
        perror("fopen");
        return EXIT_FAILURE;
    }

    showMainMenu(inventory);

    fclose(inventory);
    return EXIT_SUCCESS;
}