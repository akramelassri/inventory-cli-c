#include "inventory.h"

#include <stdio.h>
#include <string.h>

int addNewRecord(FILE *inventory, Record newProduct) {
    // handle unicity
    char newLine[600];
    convertRecordToline(newProduct, newLine);
    fputs(newLine, inventory);
    return 0;
}
Record parseLine(char *line) {
}
int convertRecordToline(Record product, char *buffer) {
    return snprintf(buffer, 600, "%s,%s,%.2f,%d\n",
                    product.reference,
                    product.name,
                    product.price,
                    product.quantity);
}