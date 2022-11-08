#include "pch.h"

/*========================================= Classe CLparcours ========================================*/

CLparcours::CLparcours(int nb_points)
{
	this->nb_points = nb_points;
	this->index = 0;

}

void CLparcours::ajouterPoint(CLpoint* point)
{
	this->parcours[this->index] = point;

	this->index++;
}

void CLparcours::ajouterPoint(CLpoint* point, int index)
{
	this->parcours[index] = point;
}


/*======================================== Classe CLparcours2D =======================================*/

CLparcours2D::CLparcours2D(int nb_points) : CLparcours(nb_points)
{
	this->parcours = new CLpoint * [this->nb_points];
}


float CLparcours2D::calculDistance(void)
{
	float distance = 0;

	for (int i = 0; i < nb_points - 1; i++)
	{
		float xBxA = (this->parcours[i + 1]->getX() - this->parcours[i]->getX()) * (this->parcours[i + 1]->getX() - this->parcours[i]->getX());
		float yByA = (this->parcours[i + 1]->getY() - this->parcours[i]->getY()) * (this->parcours[i + 1]->getY() - this->parcours[i]->getY());
		
		distance += sqrtf(xBxA + yByA);
	}

	return distance;
}

void CLparcours2D::message(void)
{
	std::cout << "Calcul d'un parcours de type 2D" << std::endl;
}

/*======================================== Classe CLparcours3D =======================================*/

CLparcours3D::CLparcours3D(int nb_points) : CLparcours(nb_points)
{
	this->parcours = new CLpoint * [nb_points];
}

float CLparcours3D::calculDistance(void)
{
	float distance = 0;
	
	for (int i = 0; i < nb_points-1; i++)
	{
		float xBxA = (this->parcours[i + 1]->getX() - this->parcours[i]->getX()) * (this->parcours[i + 1]->getX() - this->parcours[i]->getX());
		float yByA = (this->parcours[i + 1]->getY() - this->parcours[i]->getY()) * (this->parcours[i + 1]->getY() - this->parcours[i]->getY());
		float zBzA = (this->parcours[i + 1]->getZ() - this->parcours[i]->getZ()) * (this->parcours[i + 1]->getZ() - this->parcours[i]->getZ());
	
		distance += sqrtf(xBxA + yByA + zBzA);
		
	}
	
	return distance;
}

void CLparcours3D::message(void)
{
	std::cout << "Calcul d'un parcours de type 3D" << std::endl;
}