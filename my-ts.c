#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char* convert_time(time_t* stamp) {
	static char buffer[26];
	static struct tm* tm_info;
	tm_info = localtime(stamp);
	strftime(buffer, 26, "%Y:%m:%d %H:%M:%S", tm_info);
	return buffer;
}

int main() {
	char* line = NULL;
	size_t len = 0;
	ssize_t read;
	time_t stamp;

	setbuf(stdout, NULL);
	while ((read = getline(&line, &len, stdin)) != -1) {
		stamp = time(NULL);
		printf("[%s] %s", convert_time(&stamp), line);
	}

	if (line != NULL) {
		free(line);
	}
	fclose(stdin);
	exit(EXIT_SUCCESS);
}
