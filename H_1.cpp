//This challenge requires you to print  on a single line, and then print the already provided input string to stdout. If you are not familiar with C, you may want to read about the printf() command.
#include <stdio.h>

int main() {
    
    char s[100];

    // Read input string from the user
    fgets(s, sizeof(s), stdin);

    // Print the input string
    printf("%s", s);

    return 0;
}
