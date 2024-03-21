#include <stdio.h>

int main() {
    char message[50], ch;
    int i, key;

    printf("Enter message to decrypt: ");
    fgets(message, sizeof(message), stdin);

    printf("Enter key: ");
    scanf("%d", &key);

    for (i = 0; message[i] != '\0'; i++) {
        ch = message[i];

        if (ch >= 'a' && ch <= 'z') {
            ch = ch - key;
            if (ch < 'a') {
                ch = ch + 'z' - 'a' + 1;
            }
            message[i] = ch;
        } else if (ch >= 'A' && ch <= 'Z') {
            ch = ch - key;
            if (ch < 'A') {
                ch = ch + 'Z' - 'A' + 1;
            }
            message[i] = ch;
        }
    }

    printf("Decrypted message is: %s\n", message);
    return 0;
}
