#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

int main(int argc, char **argv) {
    int fd;
    char buffer[1024];

    // borrar FIFO por si existiera previamente
    unlink("tuberia");

    /* crear el FIFO */
    if (mkfifo("tuberia", 0666)<0) {
        perror("No puede crearse el FIFO");
        return(1);
    }
    
    /* Abrir el FIFO */
    fd = open("tuberia", O_RDONLY);
    
    if (fd < 0) {
        perror("No puede abrirse el FIFO");
        unlink("tuberia");
        return(1);
    }
    
    /* Leer de la FIFO */
    int n;
    while ((n = read(fd, buffer, sizeof(buffer) - 1)) > 0) {
	// X5: Imprimir el texto en la pantalla
        buffer[n] = '\0';
        printf("%s", buffer);
        fflush(stdout);
    }
    
    close(fd);
    unlink("tuberia");
    return(0);
}
