
#include <stdlib.h>
#include <sys/select.h>

int main() {
	fd_set read, write, except;
	FD_ZERO(&read);
	FD_ZERO(&write);
	FD_ZERO(&except);
	select(0, &read, &write, &except, NULL);

	return 1;
}

