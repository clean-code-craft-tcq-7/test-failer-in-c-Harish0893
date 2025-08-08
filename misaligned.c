#include <stdio.h>
#include <assert.h>

int printColorMap() {
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    int pairNumber = 1;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%2d | %-6s | %-6s\n", pairNumber, majorColor[i], minorColor[j]);
            pairNumber++;
        }
    }
    return pairNumber - 1;
}

int testPrintColorMap() {
    printf("\nPrint color map test\n");
    int result = printColorMap();
    assert(result == 25);
    int firstPair = 1;
    int lastPair = 25;
    assert(firstPair == 1);
    assert(lastPair == 25);
    printf("All is well (maybe!)\n");
    return 0;
}