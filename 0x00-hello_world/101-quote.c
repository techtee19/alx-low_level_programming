#include <unistd.h>

int main(void) {
    const char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    const int len = sizeof(message) - 1;
    write(2, message, len);
    return 1;
}
