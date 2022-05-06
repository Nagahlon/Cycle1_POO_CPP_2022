#pragma once


class CVecteur
{
//Rajouter "public:" veut dire que c'est accessible en dehros de la classe
private :

	//Donnes membres de la classe
	int m_nX;
	int m_nY;
	int m_nZ;

public :

	//fonctions membres


	//Un Constructeur
	CVecteur();

	CVecteur(int nX, int nY, int nZ);
	
	//Une signature correspond au type, nom et argument.

	//Set

	void setX(const int nX); //quand const avant l'argument, cela fait que l'argument est constant, il ne peut pas être modifié.
	void setY(const int nY);
	void setZ(const int nZ);

	//Get

	int getX()const; //quand const après la fonction, cela fait que la fonction ne changera pas la donnée membre.
	int getY()const;
	int getZ()const;
};