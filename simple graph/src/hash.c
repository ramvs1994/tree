
#include"header.h"


int hash (char *key)
{
    int n_bytes = strlen(key) ;
    unsigned char *p = key;
    uint64_t h = 1469598103934665603;
    int i;
    for (i = 0; i < n_bytes; i++) {
        h = (h * 1099511628211) ^ p[i];
    }
    return h%vertices;
}
