#pragma once

#include <directxmath.h>

class Vector3D
{
protected:
public:
	// Variables
	float x;
	float y;
	float z;

	// Constructors
	Vector3D();
	Vector3D(float x, float y, float z);
	~Vector3D();

	// Operator overides with other Vectors
	Vector3D operator+(const Vector3D& v);
	Vector3D operator-(const Vector3D& v);
	Vector3D operator*(const Vector3D& v);
	Vector3D operator/(const Vector3D& v);

	// Operator overides with scalars
	void operator*(float v);
	void operator/(float v);

	// Math Functions
	void Normalize();
	float GetMagnitude();
	void DotProduct(const Vector3D& v);
	void CrossProduct(const Vector3D& v);
	float GetAngleBetween(const Vector3D& v);
};

