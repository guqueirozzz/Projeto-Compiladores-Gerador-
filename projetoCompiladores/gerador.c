#include <stdlib.h>
#include <stdio.h>
#include <conio.h>


char string[30];
int p = 0;
void e0();
void e1();
void e2();
void aceita();
void rejeita();

int main()
{

    int i;
   printf(" Digite a sentença: ");
   gets(string);
   e0();

    return 0;
}
void e0()
{ 
    if( string[p] == 'a')
    {      p++; 
   e1();  
    } 
    else if ( string[p] == 'b') 
    {     p++; 
    e0();  
    } 
    else if ( string[p] == 'c') 
    {     p++; 
    e2();  
    } 
	else if( string[p] == 0 )
		GOTO ACEITA;
    else
    {
    rejeita();
    }
}
void e1()
{ 
    if( string[p] == 'a')
    {      p++; 
   e2();  
    } 
    else if ( string[p] == 'b') 
    {     p++; 
    e0();  
    } 
    else if ( string[p] == 'c') 
    {     p++; 
    e1();  
    } 
	else if( string[p] == 0 )
		GOTO ACEITA;
    else
    {
    rejeita();
    }
}
void e2()
{ 
    if( string[p] == 'a')
    {      p++; 
   e0();  
    } 
    else if ( string[p] == 'b') 
    {     p++; 
    e1();  
    } 
    else if ( string[p] == 'c') 
    {     p++; 
    e2();  
    } 
	else if( string[p] == 0 )
		GOTO ACEITA;
    else
    {
    rejeita();
    }
}
void aceita()
{	printf("=====================sentenca aceita=======================");
    getch();
    exit(0);
    }    

void rejeita()
{	printf("=====================sentença rejeitada=====================");
    getch();
    exit(0);
    }    

