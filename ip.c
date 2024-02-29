#include <stdio.h>
#include <string.h>

int main() {
    char ip[16];
    printf("Enter an IP address: ");
    scanf("%15s", ip);

    // Splitting the IP address into octets
    int octet1, octet2, octet3, octet4;
    sscanf(ip, "%d.%d.%d.%d", &octet1, &octet2, &octet3, &octet4);

    // Checking the class of the IP address
    if (octet1 >= 1 && octet1 <= 126) {
        printf("Class A\n");
    } else if (octet1 >= 128 && octet1 <= 191) {
        printf("Class B\n");
    } else if (octet1 >= 192 && octet1 <= 223) {
        printf("Class C\n");
    } else if (octet1 >= 224 && octet1 <= 239) {
        printf("Class D\n");
    } else if (octet1 >= 240 && octet1 <= 255) {
        printf("Class E\n");
    } else {
        printf("Invalid IP address\n");
    }

    return 0;
}
