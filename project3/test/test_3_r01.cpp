#include "read_and_write.hpp"

int main() {
    int a, b, c;
    int final = 0;//TODO
    a = 5;
    b = a * a * (a + 2);
    write(b);
    c = b / a + 1;
    write(c);
    final = a + b - c * 3 + (b / a - 4);
    write(final);
    return 0;
}
