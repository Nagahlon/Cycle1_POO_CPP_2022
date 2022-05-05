//fichier main.cpp
//version 1.0
//Branch release

//New pusch branch version1.0


#include <stdio.h>
#include "TVect.h"


int main() {

	printf_s("version 1.0 du programme CPP\n");
	printf_s("Introduction POO C++\n");

	vecteur tvect;

	tvect.n_x = 0;
	tvect.n_y = 0;
	tvect.n_z = 0;

	initVecteur(&tvect, 5, 2, 9);

	return 0;
}