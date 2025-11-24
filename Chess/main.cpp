#include "Chess.h"
#include <iostream>


#include <iostream>
#include "Chess.h"

int main() {
    Chess c1(8,8);
    Chess c4 = std::move(c1);
    std::cout << c4 << "\n";

    Chess c5(8, 8);
    std::cout <<  c5 << "\n";

    c5 = std::move(c4);
    std::cout <<  c5 << "\n";

    return 0;
}
