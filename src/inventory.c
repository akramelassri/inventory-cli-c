#include "inventory.h"

#include <stdio.h>
#include <string.h>

int addNewRecord(FILE *inventory, Record newProduct) {
    // returns 0 on success 1 on unicity error
    if (searchSpecificProductByReference(inventory, newProduct.reference) == 0) {
        return 1;
    }
    char newLine[600];
    convertRecordToline(newProduct, newLine);
    fputs(newLine, inventory);
    return 0;
}
Record parseLine(char *line) {
    Record product;
    sscanf(line,"%[^,],%[^,],%f,%d", product.reference, product.name, &product.price, &product.quantity);
    return product;
}
int convertRecordToline(Record product, char *buffer) {
    return snprintf(buffer, 600, "%s,%s,%.2f,%d\n",
                    product.reference,
                    product.name,
                    product.price,
                    product.quantity);
}
int searchSpecificProductByReference(FILE *inventory, char *reference) {
    // returns 0 if find 1 if not
    char line[600];
    while (fgets(line, sizeof(line), inventory) != NULL) {
        if (strcmp(parseLine(line).reference, reference) == 0) {
            rewind(inventory);
            return 0;
        }
    }
    rewind(inventory);
    return 1;
}