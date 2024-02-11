#ifndef PARAMETERS_H
#define PARAMETERS_H

#include <stdint.h>

struct PassParameters{
    uint32_t size;
    char     *name;
    char     *emailName;
};

void getUserData(struct PassParameters *userData);

#endif