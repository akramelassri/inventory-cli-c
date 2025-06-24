#ifndef UI_H
#define UI_H

#include <stdio.h>

void showMainMenu(FILE *inventory);
void addProductMenu(FILE *inventory);
void modifyProductMenu(FILE *inventory);
void deleteProductMenu(FILE *inventory);
void listAllProductsMenu(FILE *inventory);
void searchSpecificProductMenu(FILE *inventory);

#endif