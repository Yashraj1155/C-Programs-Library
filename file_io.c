#include <stdio.h>

int main() {
    FILE *file;
    char text[100];

    file = fopen("sample.txt", "w");

    if (file == NULL) {
        printf("Unable to create file.\n");
        return 1;
    }

    printf("Enter text to write into file: ");
    fgets(text, sizeof(text), stdin);

    fprintf(file, "%s", text);
    fclose(file);

    file = fopen("sample.txt", "r");

    if (file == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }

    printf("\nContent of file:\n");
    fgets(text, sizeof(text), file);
    printf("%s", text);

    fclose(file);

    return 0;
}