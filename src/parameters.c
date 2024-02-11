#include "parameters.h"
#include <stdio.h>
#include <stdlib.h>

/*
struct PassParameters{
    uint32_t size;
    char     *name;
    char     *emailName;
};
*/

void getUserData(struct PassParameters *userData){
    char *emailName = NULL;
    size_t bufferSize = 0;
    
    printf("Please provide the email address to which you would like the program to send the password: ");

    int ch = 0;
    while((ch = getchar()) != '\n' && ch != EOF){
        bufferSize++;
        if(bufferSize % 10 == 9){
            char *temp = realloc(emailName, (bufferSize * 11) * sizeof(char));

            if(temp == NULL){
                perror("Reallocation Error.");
                free(emailName);
                free(temp);
            }

            emailName = temp; 
        }
        emailName[bufferSize] = (char)ch;
        bufferSize++;
    }

    emailName[bufferSize] = '\0';

    userData->emailName = emailName;

    printf("%s\n", userData->emailName);

}