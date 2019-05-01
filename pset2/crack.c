#define _XOPEN_SOURCE
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <cs50.h>
                                                // Danny
int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("  <hash>\n");
        return 1;
    }
    int count_let = 53;
    string letters = "\0abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string hash = argv[1];
    char salt[3];
    memcpy(salt, hash, 2);
    salt[2] = '\0';

    char key_word[6] = "\0\0\0\0\0\0";

    for (int fifth = 0; fifth < count_let; fifth++)
    {
        for (int fourth = 0; fourth < count_let; fourth++)
        {
            for (int third = 0; third < count_let; third++)
            {
                for (int second = 0; second < count_let; second++)
                {
                    for (int first = 1; first < count_let; first++)
                    {
                        key_word[0] = letters[first];
                        key_word[1] = letters[second];
                        key_word[2] = letters[third];
                        key_word[3] = letters[fourth];
                        key_word[4] = letters[fifth];

                        if(strcmp(crypt(key_word, salt), hash) == 0)
                        {
                            printf("%s\n",key_word);
                            return 0;
                        }
                    }
                }
            }
        }
    }

    printf("cant cracked");
    return 2;
}