#include "kernel/types.h"
#include "user/user.h"

int main (int argc, char* argv[]) {
    int freememory = freemem();
    printf("Free Memory: %d bytes\n", freememory);
    return 0;
}
