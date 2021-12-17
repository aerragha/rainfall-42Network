#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#define _GNU_SOURCE

int main (int argc, char **argv) 
{
    gid_t gid;
    uid_t uid;
    char *args[2];

    if (atoi(argv[1]) == 423) 
    {
        gid = getegid();
        uid = geteuid();

        setresgid(gid, gid, gid);
        setresuid(uid, uid, uid);

        args[0] = "sh";
        args[1] = NULL;
        execv("/bin/sh", args);
    }
    else
        fwrite("No !\n", 1, 5, stderr);
}