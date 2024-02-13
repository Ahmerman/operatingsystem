#include <stdio.h>
#include <ctype.h>

int removeNonAlphabets(char*filename1)
{
    int c = 0;	//counter for no of digits
    
	FILE * ftr;
	ftr = fopen(filename1,"r");	//open in read mode
	if(ftr==NULL)
	{
		printf("Input File does not exist");
		return 0;
	}
	else
	{
		char val;
		val = fgetc(ftr);


		while(val != EOF)
		{
			if(!(isdigit(val)))
			{
				val=fgetc(ftr);
			}
			else
			{
			    c++;
				val=fgetc(ftr);
			}
			
		}

		fclose(ftr);
	}
	return c;
}

int main(int argc,char*argv[])
{
    int x = removeNonAlphabets(argv[1]);
    
	printf("%d", x);
	
	
}
