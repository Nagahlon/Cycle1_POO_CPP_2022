#pragma once


class CVecteur
{
//Rajouter "public:" veut dire que c'est accessible en dehros de la classe
public :

	//Donnes membres de la classe
	int m_nX;
	int m_nY;
	int m_nZ;

	void initVect(int nX, int nY, int nZ);
};