#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

int main (int argc, char *argv){
	int fd = 0;	

	fd = open("./test.txt",  O_RDONLY);
	if (fd != 0) {
		puts("success");
	}
	close(fd);

	return 0;
}
