
#include <libc.h>

int main(int argc, char **argv)
{
    return (argc == 2 ? execl("9waleb", "9waleb", argv[1], NULL): 0);
}