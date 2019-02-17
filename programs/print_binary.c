#include <unistd.h>
#include <stdio.h>


void printBinary(char c)
{
    for(int i=7; i>=0; --i) 
        putchar( (c&(1<<i)) ? '1' : '0' );
}

int main()  
{
    char c;
    while( read(STDIN_FILENO,&c,1) > 0 )
    {
        //putchar(c);
        printBinary(c);
        putchar('\n');
    }
    return 0;
}
