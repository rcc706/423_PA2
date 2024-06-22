#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

// main method
int main(int argc, char *argv[]) {

	// Checks if argument count is 2
	if (argc != 2) {
		printf("Usage: %s <starting value>\n", argv[0]);
		return 1; 
	}

	// Sets the numeric argument to an integer
	int argvValue = atoi(argv[1]); 

	// Checks if the numeric argument is greater than 1
	if (argvValue < 1) {
		printf("<starting value> should be a positive integer\n"); 
		return 1; 
	} 

	// Variable to hold process
	pid_t pid; 
	pid = fork(); 

	// Looping until the value entered goes down to 1
	while (argvValue > 0) {
		if (pid == 0) {
			if (argvValue == 1) { // If 1, then print it and end the program
				printf("%d\n", argvValue); 
				return 0; 
			}
			// child process does all the work
			// Prints the current value (n in the instructions)
			printf("%d ", argvValue);
	
			// EVEN
			if (argvValue % 2 == 0)
				argvValue /= 2; 
	
			// ODD
			else
				argvValue = (3 * argvValue) + 1;  
 
		} // if

		// Checking for errors
		else if (pid < 0) {
			fprintf(stderr, "FORK FAILED");
			return 1; 
		} // else-if 

		else {
			// parent process 
			// All the parent process does is wait for the child process to end
			wait(NULL);  
			return 0;      
		} // else 
	} // while

	// Program ran successfully
	return 0; 
} // main