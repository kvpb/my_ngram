/*
**
** QWASAR.IO -- is_anagram
**
** @param {char*} param_1
** @param {char*} param_2
**
** @return {int}
**
*/

#include <string.h> // strlen, strcpy
#include <stdlib.h> // malloc
//#include <stdio.h> // printf //	debug

int is_anagram(char* param_1, char* param_2)
{
	int a[ 126 - 32 ] = { 0 };
	int b[ 126 - 32 ] = { 0 };
	int c; //= 0;
	int t = 1;

	c = 0;
	while ( param_1[ c ] != '\0' )
	{
		a[ param_1[ c ] - 32 ]++;
		c++;
	}
	c = 0;
	while ( param_2[ c ] != '\0' )
	{
		b[ param_2[ c ] - 32 ]++;
		c++;
	}
	c = 0;
	while ( c < 126 - 32 )
	{
		if ( b[ c ] != a[ c ] )
			t = 0;
		c++;
	}

	return t;
}

/*int main()
{
	char* s_1_0 = "abcdef";
	char* s_2_0 = "fabcde";
	char* s_1_1 = "ad";
	char* s_2_1 = "bc";
	char* s_1_2 = "";
	char* s_2_2 = "";
	char* s_1_3 = ".123?.";
	char* s_2_3 = "?321..";

	printf("%i\n", is_anagram( s_1_0, s_2_0 ));
	printf("%i\n", is_anagram( s_1_1, s_2_1 ));
	printf("%i\n", is_anagram( s_1_2, s_2_2 ));
	printf("%i\n", is_anagram( s_1_3, s_2_3 ));
	//printf("%i\n", is_anagram( s_1, s_2 ));
	return 0;
}*/ //	debug
