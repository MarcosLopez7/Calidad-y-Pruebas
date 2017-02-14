#include <iostream>

int main(int argc, const char **argv) {

    if (argc != 2)
        exit(1);

    if (atoi(argv[1]) % 4 == 0)
        return true;
    else
        return false;

    return 0;
}