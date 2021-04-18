#include <stdio.h>
int main(int argc,char **argv)
{
#ifdef DEBUG
printf("DEBUG!\n");
#endif
printf("Hello World! \n");
return 0;
}
