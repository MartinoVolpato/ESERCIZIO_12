#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++) {
        printf("ID generato: %d\n", genera_id());
    }
    return 0;
}

int genera_id() {
    static int counter = 0;
    counter++;
    return counter;
}