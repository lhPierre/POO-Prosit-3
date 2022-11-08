#pragma once

class CLpoint
{
protected:
	float X;
	float Y;
	float Z;
public:
	CLpoint(void);
	CLpoint(float, float);
	void setX(float);
	void setY(float);
	float getX(void);
	float getY(void);
	virtual void afficherCoordo();
};

class CLpoint3D : public CLpoint
{	
public:
	CLpoint3D(void);
	CLpoint3D(float, float, float);
	void setZ(float);
	float getZ(void);
	void afficherCoordo();
};