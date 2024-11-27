#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    char line[256];
    struct Node *prev;
    struct Node *next;
} Node;

Node *head = NULL, *tail = NULL;

// Stack, Trie, and other functions go here...

// Main Menu
int main() {
    root = createTrieNode();

    int choice, lineNumber;
    char buffer[256], filename[256];

    while (1) {
        printf("\nEnhanced Text Editor:\n");
        printf("1. Insert Line\n2. Delete Line\n3. Search Word\n4. Display Text\n5. Save to File\n6. Load from File\n7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // Consume newline

        switch (choice) {
            case 1:
                printf("Enter line number: ");
                scanf("%d", &lineNumber);
                getchar();
                printf("Enter text: ");
                fgets(buffer, sizeof(buffer), stdin);
                buffer[strcspn(buffer, "\n")] = '\0'; // Remove newline
                insertLine(buffer, lineNumber);
                break;

            case 2:
                printf("Enter line number to delete: ");
                scanf("%d", &lineNumber);
                deleteLine(lineNumber);
                break;

            case 3:
                printf("Enter word to search: ");
                scanf("%s", buffer);
                if (searchInTrie(buffer))
                    printf("Word found!\n");
                else
                    printf("Word not found.\n");
                break;

            case 4:
                displayText();
                break;

            case 5:
                printf("Enter filename to save: ");
                scanf("%s", filename);
                saveToFile(filename);
                break;

            case 6:
                printf("Enter filename to load: ");
                scanf("%s", filename);
                loadFromFile(filename);
                break;

            case 7:
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}
