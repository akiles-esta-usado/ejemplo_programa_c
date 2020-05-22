#include <stdio.h>
#include "func.h"

#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>


int main() {
    pid_t pid;
    int wstatus;

    int size = 10;
    int array[size];



    pid = fork();

    if (pid < 0) {
        printf("ERROR: fork falló\n");
    }

    if (pid == 0) {  // Hijo
        printf("Proceso Hijo: \n");
        create_array(array, size);
        print_array(array, size);

        return 0;
    }
    else {           // Padre
        printf("Proceso Padre: \n");
        create_array(array, size);
        print_array(array, size);

        wait(&wstatus);

        printf("El hijo termino con valor :%d\n", wstatus);
    }

    return 0;
}
