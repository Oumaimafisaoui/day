#include <iostream>
#include <cstdlib>
#include <unistd.h>

int main(int argc, char **argv) {
    if (argc == 2) {
        const char *args[] = {"sastantua", argv[1], nullptr};
        execv("./sastantua", const_cast<char **>(args));
        perror("exec error");
        exit(EXIT_FAILURE);
    }
    return 0;
}