#include<unistd.h>                                                                                                                              
                                                                                                                                                
int _putchar(char a)                                                                                                                                 
{                                                                                                                                               
	write(1, &a, 1);                                                                                                                                 
	return (0);                                                                                                                                     
}
