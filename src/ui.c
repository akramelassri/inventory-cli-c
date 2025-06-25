#include "ui.h"

#include "inventory.h"
#include "string.h"
#include "utils.h"

void showMainMenu(FILE *inventory) {
    int choice = -1;

    while (choice != 0) {
        clearScreen();
        printf("Welcome to the inventory management system\n");
        printf("Please choose one of the following options: \n");
        printf("1. Add a product\n");
        printf("2. Modify a product\n");
        printf("3. Delete a product\n");
        printf("4. List all products\n");
        printf("5. Search for a product\n");
        printf("0. Save and Quit\n");
        printf("Choice: ");

        if (scanf("%d", &choice) != 1)
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

void addProductMenu(FILE *inventory) {
    clearScreen();
    Record newProduct;
    printf("Enter new product's reference(255 characters max): ");
    fgets(newProduct.reference, sizeof(newProduct.reference), stdin);
    newProduct.reference[strcspn(newProduct.reference, "\n")] = '\0';

    printf("Enter new product's name(255 characters max): ");
    fgets(newProduct.name, sizeof(newProduct.name), stdin);
    newProduct.name[strcspn(newProduct.name, "\n")] = '\0';

    printf("Enter new product's price: ");
    if (scanf("%lf", &newProduct.price) != 1) {
        printf("Error in value given. Press enter to return to menu...");
        clearStdin();
        clearStdin();
        return;
    }
    clearStdin();
    printf("Enter new product's quantity: ");
    if (scanf("%d", &newProduct.quantity) != 1) {
        printf("Error in value given. Press enter to return to menu...");
        clearStdin();
        clearStdin();
        return;
    }
    clearStdin();
    if (!addNewRecord(inventory, newProduct))
        printf("Product added Successfully. Press save in the menu to confirm your Action \nPress enter to return to menu...");
    else
        printf("Product reference already exists. Press enter to return to menu...");
    clearStdin();
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
