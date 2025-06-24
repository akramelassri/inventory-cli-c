#include "utils.h"

void clearStdin() {
    while (getchar() != '\n') {
    }
}

void clearScreen() {
    printf("\033[H\033[J");
    fflush(stdout);
}
