#include "ui.h"
#include "utils.h"

void showMainMenu(FILE *inventory) {
    int choice = -1;

    clearScreen();
    while (choice != 0) {
        printf("Welcome to the inventory management system\n");
        printf("Please choose one of the following options: \n");
        printf("1. Add a product\n");
        printf("2. Modify a product\n");
        printf("3. Delete a product\n");
        printf("4. List all products\n");
        printf("5. Search for a product\n");
        printf("0. Save and Quit\n");
        printf("Choice: ");

        if(scanf("%d", &choice) != 1)
            break;
        clearStdin();

        switch (choice) {
            case 1:
                addProductMenu(inventory);
                break;
            case 2:
                modifyProductMenu(inventory);
                break;
            case 3:
                deleteProductMenu(inventory);
                break;
            case 4:
                listAllProductsMenu(inventory);
                break;
            case 5:
                searchSpecificProductMenu(inventory);
                break;
            default:
                break;
        } 
    }

}

void addProductMenu(FILE* inventory){
    clearScreen();
}
void modifyProductMenu(FILE *inventory) {
    clearScreen();
}
void deleteProductMenu(FILE *inventory) {
    clearScreen();
}
void listAllProductsMenu(FILE *inventory) {
    clearScreen();
}
void searchSpecificProductMenu(FILE *inventory) { 
    clearScreen();
}
