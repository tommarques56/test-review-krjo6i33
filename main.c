#include <stdio.h>
#include <string.h>

int main() {
    char buffer[100];
    strcpy(buffer, "Hi World");
    printf("%s\n", buffer);
    return 0;
}