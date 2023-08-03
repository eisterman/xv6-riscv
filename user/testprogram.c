#include "kernel/types.h"
#include "user/user.h"

int main (int argc, char* argv[]) {
    char maremma[] = "Maria Maddalena";
    write(1, maremma, strlen(maremma));
    return 0;
}
