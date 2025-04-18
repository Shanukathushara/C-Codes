
#include <stdio.h>

int main() {
    int i = 0;

    while (i <= 100) {
        printf("%d ", i);
        i++;
    }

    return 0;
}
#include <stdio.h>

int main() {
    int i = 0;

    do {
        printf("%d ", i);
        i++;
    } while (i <= 100);

    return 0;
}
#include <stdio.h>

int main() {
    for (int i = 0; i <= 100; i++) {
        printf("%d ", i);
    }

    return 0;
}



