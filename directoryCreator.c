
#include <stdio.h>

#include <sys/types.h>

#include <sys/stat.h>

#include <fcntl.h>

#include <unistd.h>





int main(int argc, char * argv[]) {

	int directoryCreationResult = mkdir(argv[1], 0755);

	if(directoryCreationResult == 0) {

		printf("%s Directory Created\n", argv[1]);

	}

	else {

		perror("Directory Creation Failed");

	}

}
