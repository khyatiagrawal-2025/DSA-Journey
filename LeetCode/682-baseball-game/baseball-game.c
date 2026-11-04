int calPoints(char** operations, int operationsSize) {
    int* record = (int*)malloc(operationsSize * sizeof(int));
    int top = 0;

    for (int i = 0; i < operationsSize; i++) {
        char* op = operations[i];

        if (strcmp(op, "+") == 0) {
            record[top] = record[top - 1] + record[top - 2];
            top++;
        } else if (strcmp(op, "D") == 0) {
            record[top] = 2 * record[top - 1];
            top++;
        } else if (strcmp(op, "C") == 0) {
            top--;
        } else {
            record[top] = atoi(op);
            top++;
        }
    }
    int totalSum = 0;
    for (int i = 0; i < top; i++) {
        totalSum += record[i];
    }

    free(record);
    return totalSum;
    
}