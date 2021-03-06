#include "header.h"
//#define LINE_SIZE 100

void read_input_wave(char *filename)
{
	char line[100];

	FILE *Input;
	Input = fopen (filename, "r");
    if(Input==NULL)
    {
    	printf("Error: Input file (%s) not found\n ",filename);
    	exit(1);
    }

	// reading input parameters from input file
	fgets(line,100, Input);	
	sscanf(line,"%d ",&wave->n);
	printf("n       = %d\n", wave->n);

	fgets(line,100, Input);	
	sscanf(line,"%lf ",&wave->c);
	printf("c       = %lf\n", wave->c);

	fgets(line,100, Input);	
	sscanf(line,"%lf ",&wave->cfl);
	printf("cfl     = %lf\n", wave->cfl);

	fgets(line,100, Input);	
	sscanf(line,"%lf ",&wave->time);
	printf("time    = %lf\n", wave->time);			

	fgets(line,100, Input);	
	sscanf(line,"%d ",&wave->scheme);
	printf("scheme  = %d\n", wave->scheme);	

	fgets(line,100, Input);	
	sscanf(line,"%d ",&wave->theta);
	printf("theta   = %d\n", wave->theta);	

	fgets(line,100, Input);	
	sscanf(line,"%lf ",&wave->l);
	printf("l       = %lf\n", wave->l);	

	fclose(Input);
	
}
