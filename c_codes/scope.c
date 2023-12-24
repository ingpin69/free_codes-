#include <stdio.h>

void func() {
    static int count = 0;
    ++count;
    printf("Call count: %d\n", count);
}

int main() {
    func();  // Call count: 1
    func();  // Call count: 2
    return 0;
}