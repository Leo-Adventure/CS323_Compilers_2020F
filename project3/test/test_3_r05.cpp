#include "read_and_write.hpp"

int main() {
    int i, tu1, tu2, tu3, m, a, b, c;
    a = 1;
    b = 2;
    c = 3;
    tu1 = 1;
    tu2 = 1;
    m = read();
    if (m < 1)
        write(0);
    else if (m == 1 || m == 2)
        write(1);
    else if (m > 2) {
        i = 3;
        while (i <= m) {
            tu3 = tu1 + tu2;
            tu1 = tu2;
            tu2 = tu3;
            i = i + 1;
        }
        write(tu3);
    }
    return 0;
}
