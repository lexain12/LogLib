#include <time.h>
#include <stdlib.h>
#include "LogLib.h"

tm Tm = {};

int print(char param)
{
    fprintf(LOGFILEPTR, "%c", param);
}

int print(int param)
{
    fprintf(LOGFILEPTR, "%d", param);
}

int print(char* param)
{
    fprintf(LOGFILEPTR, "%s", param);
}

int print(double param)
{
    fprintf(LOGFILEPTR, "%lg", param);
}

FILE* const logOpen(const char* logFileName)
{
    char buf[0] = {};
    FILE* filePtr = fopen(logFileName, "a");
    setvbuf(filePtr, buf, _IONBF, 0);

    const time_t timer = time(NULL);
    fprintf(filePtr, "---------------%s", strtok(ctime(&timer), "\n"));
    fseek(filePtr, -1, SEEK_CUR);
    fprintf(filePtr, "---------------\n");

    return filePtr;
}

void func(){
   $$(5); 
}

int main()
{
    int x = 0;
    $$(x = 5);
    $
        $
        $
}
