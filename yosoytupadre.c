#include "types.h"
#include "stat.h"
#include "user.h"

int main(void) {
    printf("El proceso padre tiene PID: %d\n", getppid());
    exit();
}

int main(void) {
    int pid;
    for (int i = 0; i <= 2; i++) {
        pid = getancestor(i);
        if (pid == -1)
            printf("No hay ancestro %d\n", i);
        else
            printf("Ancestro %d tiene PID: %d\n", i, pid);
    }
    exit();
}
