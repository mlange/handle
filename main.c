#include <moca.h>

#include <stdio.h>
#include <stdlib.h>

#include <mocagendef.h>
#include <mocaerr.h>
#include <mislib.h>
#include <oslib.h>
#include <mxmllib.h>


void main(int argc, char *argv[])
{

    while (1)
    {
	osSleep(0, 100);
	CreateEvent(NULL, FALSE, FALSE, NULL);
    }

    exit(0);
}
