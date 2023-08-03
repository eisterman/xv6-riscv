#include "kernel/types.h"
#include "user/user.h"

int main (int argc, char* argv[]) {
    int freememory = freemem();
    printf("Free Memory: %d bytes\n", freememory);
    int pid = fork();
    if (pid) {
        // Parent
        sleep(3);
        int freememory = freemem();
        printf("Free Memory: %d bytes\n", freememory);
    } else {
        // Child
        int* data = malloc(1024*sizeof(int));
        for(int i = 0; i < 1024; i++) {
            data[i] = i;
        }
        sleep(10);
    }
    return 0;
}
