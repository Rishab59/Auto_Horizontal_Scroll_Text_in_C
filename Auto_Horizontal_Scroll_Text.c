/*
 * Developer's Name : Rishab.H
 */
 
 
#include <stdio.h>
#include <windows.h>
#include <string.h>


int main()
{
	int x = 0 ;
	for(x = 0 ; x < 5 ; x++)
	{
		int i = 0, j = 0 ;
		char inputtxt[50] = "|| Welcome Message By Rishab ||                       ";
		int len = strlen(inputtxt) ;

		for(i = 0 ; i < len; i++)
		{
			system("cls") ;

			for(j = 0 ; j < len ; j++)
			{
				if (i+j < len)
				{
					printf("%c", inputtxt[i+j]) ;
            	}
				else 
				{
					printf("%c", inputtxt[i+j-len]);
				}
			}
			
			Sleep(250) ;
		}
	}
}
