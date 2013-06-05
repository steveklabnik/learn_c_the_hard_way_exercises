#include <stdio.h>

int main(int argc, char *argv[])
{
    // go through each string in argv

    int i = argc - 1;
    while(i > 0) {
        printf("arg %d: %s\n", argc - i, argv[argc - i]);
        i--;
    }

    // let's make our own array of strings
    char *states[] = {
        "California", "Oregon",
        "Washington", "Texas"
    };

    i = 3;  // watch for this
    while(i > -1) {
        printf("state %d: %s\n", 3 - i, states[3 - i]);
        i--;
    }

    return 0;
}
