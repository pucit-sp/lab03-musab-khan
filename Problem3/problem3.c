/*
**	This program is a template for SP lab 3 task 3 you are 
**	required to implement its one function.
*/


#include<stdio.h>
#include<string.h>
#include <stdlib.h>

#define GREP 1
#define REPLACE 2

/*	
**	This function take file pointer as paramter to read content from and 
**	char pointer as an second argument which points to string to search in file
*/
void mygrep(FILE*, char*);

/*	
**	This function take file pointer as paramter to read content from and 
**	char pointer as an second argument which points to string to search in file
** 	and char pointer as an third argument to replace the string finded with it.
*/
void myreplace(FILE *fp,char *find, char * replace);


int  main(int argc,char *argv[])
{


	/*	creating variables	
*/

	int behaviour;
	FILE *fp;
	char *filename=argv[1];
	char *find=argv[2];
	char * replace;

	/*	check if mygrep is called or myreplace	
*/
	if(/*	check if the name of executable is mygrep	*/ )
	{
		if(argc != 3)
		{
			printf("usage\t./mygrep filename <string-to-search>\n");
			exit(1);
		}

		behaviour = GREP;

	}
	else if(/*	check if the name of executable is myreplace	*/)
	{
		if(argc != 4)
		{
			printf("\t./myreplace filename  <string-to-search> <string-to-replace>");
			exit(1);
		}
		behaviour = REPLACE;
		replace = argv[3];
	}
	else
	{
		behaviour = -1;
	}



	/* opening file	
*/

	fp=fopen(filename,"rt");

	if(behaviour == GREP)
	{
		mygrep(fp,find);		/*	caling function	
*/
	}
	else if ( behaviour == REPLACE )
	{
		myreplace(fp,find,replace);		/*	calling myreplace	
*/
	}
	
	fclose(fp);		/*	closing file	
*/
	return 0;
}


void mygrep(FILE *fp,char *find)
{
	char c1 [500];
	int infile_line_count = 0;

	/*	Add code to get strings from file
*/ 
	while(!feof(fp))
	{
		/*	Add your code here to search a string find on string c1 readed from file	*/

		fgets(c1,sizeof (c1),fp);
        infile_line_count++;

		if(strstr(c1,find))
		{
           	printf("%d .%s\n" ,infile_line_count, c1);
   		}
	}
}





void myreplace(FILE *fp,char *find, char * replace)
{
	char c1[500];
	int flen = strlen(find);
	FILE *temp = ("temp.txt", "w+");


	while (!fgets (c1 , sizeof (c1) , fp ))
	{
		/*	Add your code here to search a string find on string c1 readed from file	*/

		char *pos = NULL;
		char *start = c1;

		while (1)
		{
			pos = strstr (c1 , find);
		}
	}



}


