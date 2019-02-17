#include <stdio.h>
#include <math.h>

int x(int t) { return (t/12>>8)&(t/6>>7)*t; }
int y(int t) { return (t&t/256)-(t*3&t>>13&t>>6); }
int z(int t) { return (t*5&t>>7)|(t*3&t>>10); }
int w(int t) { return t&(t>>4); }
 
int main()  
{
   int t = 0;
   int m = 0xffffff;
   for(;;t++)
   { 
      //putchar((x(t)|y(t)|z(t))&(x(t+1000)|y(t+1000)|z(t+1000)));
      //putwchar(x(t)&(t<1024*1024 ? m : 0));
	  putchar(t&t>>8);
   }
}
