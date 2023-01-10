#include "io.h"

int main() {

    // get input from the user's 1st int
    int first {readNumber()};
    // get input from the user's 2nd int
    int second {readNumber()};
    writeAnswer(first + second);

    return 0;
}