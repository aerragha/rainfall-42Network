#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int language = 0;

int greetuser(char *user)
{
    char greetings[64];

    if (language == 0) {
        strcpy(greetings, "Hello ");
    } else if(language == 1) {
        strcpy(greetings, "Hyvää päivää ");
    }
    else if (language == 2) {
        strcpy(greetings, "Goedemiddag! ");
    }
    strcat(greetings, user);
    puts(greetings);
    return 0;
}

int main(int argc, char **argv)
{
    int ret;
    char *buffer;
    char *lang;
    char *user;
    
    if (argc == 3) {
        memset(buffer, '\0', 19);
        strncpy(buffer, argv[1], 40);
        strncpy(buffer + 40, argv[2], 32);

        lang = getenv("LANG");
        if (*lang) {
            if (!memcmp(lang, "fi", 2)) {
                language = 1;
            } else if (!memcmp(lang, "nl", 2)) {
                language = 2;
            }
        }

        memcpy(user, buffer, 19);
        ret = greetuser(user);
    }
    else {
        ret = 1;
    }
    return ret;
}