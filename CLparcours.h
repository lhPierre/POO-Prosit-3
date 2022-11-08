#pragma once

#include "CLpoint.h"

class CLparcours
{
protected:
	int index;
	int nb_points;
	CLpoint** parcours;
public:
	CLparcours(int);
	void ajouterPoint(CLpoint*);
	void ajouterPoint(CLpoint*, int);
	virtual float calculDistance(void) = 0;
	virtual void message(void) = 0;
};

class CLparcours2D : public CLparcours
{
public:
	CLparcours2D(int);
	float calculDistance(void);
	void message(void);
};

class CLparcours3D : public CLparcours
{
public:
	CLparcours3D(int);
	float calculDistance(void);
	void message(void);
};