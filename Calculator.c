#include <stdio.h>
#include "calculator.h"

enum{Add=1, Minus, Multi, Divide, Exit};


int main(int argc, char* argv[])
{
	if(argc<=3){
		printf("More arguments are needed\n");
		printf("----------The first argv[0] is filename:\"./calc\"\n");
		printf("Please provide argv[1], argv[2], argv[3] for this program.\n");
		printf("argv[1]: the type of operator\n");
		printf("type: 1 for +, 2 for -, 3 for *, 4 for /, 5 for quit\n");
		return 0;
	}else if(argc>4){
		printf("Too many arguments supplied.\n");
		printf("----------The first argv[0] is filename:\"./calc\"\n");
			printf("Please provide argv[1], argv[2], argv[3] for this program.\n");
		printf("argv[1]: the type of operator\n");
		printf("type: 1 for +, 2 for -, 3 for *, 4 for /, 5 for quit\n");
		return 0;
	}else{
		int select=atoi(argv[1]);
		double val1=atof(argv[2]), val2=atof(argv[3]);
		double result;
	
		switch(select)
		{
			case Add:
			{
				result=Addfunc(val1,val2);
				break;
			}
			case Minus:
			{
				result=Minusfunc(val1,val2);
				break;
			}
			case Multi:
			{
				result=Multifunc(val1,val2);
				break;
			}
			case Divide:
			{
				result=Dividefunc(val1,val2);
				break;
			}
			case Exit:
			{
				printf("Quit the program...\n");
				printf("argv[2] and argv[3]: input values\n");
				return 0;
			}
			default:
			{
				break;
			}
		}
		printf("Result value: %lf\n", result);
	}
	return 0;
}

