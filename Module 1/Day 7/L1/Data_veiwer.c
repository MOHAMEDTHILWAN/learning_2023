#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct LogEntry {
    int entryNo;
    char sensorNo[10];
    float temperature;
    int humidity;
    int light;
    char timestamp[10];
};

void extractData(struct LogEntry* entries, int* count, int maxCount) {
    FILE* file = fopen("data.csv", "r");
    if (file == NULL) {
        printf("Failed to open data.csv.\n");
        return;
    }

    char line[100];
    *count = 0;

    // Skip the header line
    fgets(line, sizeof(line), file);

    while (fgets(line, sizeof(line), file) != NULL && *count < maxCount) {
        char* token;
        int fieldCount = 0;

        token = strtok(line, ",");
        while (token != NULL && fieldCount < 6) {
            switch (fieldCount) {
                case 0:
                    entries[*count].entryNo = atoi(token);
                    break;
                case 1:
                    strncpy(entries[*count].sensorNo, token, sizeof(entries[*count].sensorNo));
                    break;
                case 2:
                    entries[*count].temperature = atof(token);
                    break;
                case 3:
                    entries[*count].humidity = atoi(token);
                    break;
                case 4:
                    entries[*count].light = atoi(token);
                    break;
                case 5:
                    strncpy(entries[*count].timestamp, token, sizeof(entries[*count].timestamp));
                    break;
            }

            token = strtok(NULL, ",");
            fieldCount++;
        }

        (*count)++;
    }

    fclose(file);
}

void displayData(const struct LogEntry* entries, int count) {
    printf("Log Entries:\n");
    for (int i = 0; i < count; i++) {
        printf("EntryNo: %d\n", entries[i].entryNo);
        printf("SensorNo: %s\n", entries[i].sensorNo);
        printf("Temperature: %.2f\n", entries[i].temperature);
        printf("Humidity: %d\n", entries[i].humidity);
        printf("Light: %d\n", entries[i].light);
        printf("Timestamp: %s\n", entries[i].timestamp);
        printf("-----------------------------\n");
    }
}

int main() {
    int maxCount = 5; // Specify the maximum number of entries to extract
    struct LogEntry entries[maxCount];
    int count = 0;

    extractData(entries, &count, maxCount);
    displayData(entries, count);

    return 0;
}