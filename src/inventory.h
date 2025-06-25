#ifndef INVENTORY_H
#define INVENTORY_H

#include <stdio.h>

typedef struct {
    char reference[256];
    char name[256];
    double price;
    int quantity;
} Record;

int addNewRecord(FILE *inventory, Record newProduct);
Record parseLine(char *line);
int convertRecordToline(Record product, char *buffer);
int searchSpecificProductByReference(FILE *inventory, char *reference);

#endif