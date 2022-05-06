#include "CVecteur.h"


CVecteur::CVecteur()
{
	this->m_nX=0;
	this->m_nY=0;
	this->m_nZ=0;
}

CVecteur::CVecteur(int nX, int nY, int nZ)
{
	this->m_nX = nX;
	this->m_nY = nY;
	this->m_nZ = nZ;
}

//Version factorisée
//CVecteur::CVecteur(int nX, int nY, int nZ):m_nX(nX),m_nY(nY),m_nZ(nZ)

//Set
void CVecteur::setX(int nX)
{
	this->m_nX = nX;
}

void CVecteur::setY(int nY)
{
	this->m_nY = nY;
}

void CVecteur::setZ(int nZ)
{
	this->m_nZ = nZ;
}

//Get

int CVecteur::getX() const
{
	return this->m_nX;
}

int CVecteur::getY() const
{
	return this->m_nY;
}

int CVecteur::getZ() const
{
	return this->m_nZ;
}
