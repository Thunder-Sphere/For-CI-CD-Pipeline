#include <assert.h>
#include "multiply.c"

int main() {
    assert(multiply(5, 3) == 15);
    assert(multiply(-2, 5) == -10);
    assert(multiply(0, 100) == 0);
    assert(multiply(100, 5) ==500);
    assert(multiply(15, 15) ==225);

    printf("All tests passed!\n");
    return 0;
}
