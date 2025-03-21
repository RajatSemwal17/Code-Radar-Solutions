#include <stdio.h>
#include <string.h>
#include <ctype.h>

void removeConsonants(char input[]) {
    int j = 0;
    for (int i = 0; input[i] != '\0'; i++) {
        char ch = tolower(input[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || input[i] == ' '|| ch == '1' || ch == '2' || ch == '3' || ch == '4') {
            input[j++] = input[i];  // Keep vowels and spaces
        }
    }
    // input[j] = '\0';  // Null-terminate the modified string
}

int main() {
    char name[100];

    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';  // Remove newline

    removeConsonants(name);

    printf("%s\n", name);

    return 0;
}
