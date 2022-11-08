#include "pch.h"

/*===================== Classe CLpoint ====================*/

CLpoint::CLpoint()
{
	this->X = 0.0;
	this->Y = 0.0;
	this->Z = 0.0;
}

CLpoint::CLpoint(float X, float Y)
{
	this->X = X;
	this->Y = Y;
	this->Z = 0.0;
}

void CLpoint::setX(float X)
{
	this->X = X;
}

void CLpoint::setY(float Y)
{
	this->Y = Y;
}

float CLpoint::getX(void)
{
	return this->X;
}

float CLpoint::getY(void)
{
	return this->Y;
}

void CLpoint::afficherCoordo()
{
	std::cout << "\n Les coordonnées du point : " << this;
	std::cout << ", d'ID : " ;
	std::cout << "et de type : "  ;
	std::cout << ", sont " << this->getX() << "," << this->getY() << ")" << std::endl;
}

/*==================== Classe CLpoint3D ===================*/

CLpoint3D::CLpoint3D(void) : CLpoint()
{

}

CLpoint3D::CLpoint3D(float X, float Y, float Z) : CLpoint(X, Y)
{
	this->Z = Z;
}

void CLpoint3D::setZ(float Z)
{
	this->Z = Z;
}

float CLpoint3D::getZ(void)
{
	return this->Z;
}

void CLpoint3D::afficherCoordo()
{
	std::cout << "\n Les coordonnees du point : " << this;
	std::cout << ", d'ID : " ;
	std::cout << "et de type : ";
	std::cout << ", sont (" << this->getX() << "," << this->getY() << ")" << "(" << this->getZ() << ")" << std::endl;
}