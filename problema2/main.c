#include <stdio.h>

#include <unistd.h>
#include <sys/types.h>

#include <sys/shm.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <fcntl.h>

#include "func.h"


int main() {
    const char *name = "/test_tomas";
    int shm_fd;

    int size = 10;
    int *array;


    // Memoria compartida
    shm_fd = shm_open(name, O_CREAT | O_RDWR, 0666);

    ftruncate(shm_fd, size * sizeof(int));

    array = (int *) mmap(NULL, size * sizeof(int), PROT_WRITE, MAP_SHARED, shm_fd, 0);

    create_array(array, size);
    print_array(array, size);
    to_ascii(array,size);

    return 0;
}
