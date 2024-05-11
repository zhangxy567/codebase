#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <time.h>

int main() {
    //
    FILE * p =fopen("demo.txt","rt");
    if(p==NULL)
    {
        printf("fail");
    }
    system("pause");
    return 0;

}
