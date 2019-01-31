#include "Vector3D.h"



Vector3D::Vector3D()
{
	this->x = 0;
	this->y = 0;
	this->z = 0;
}

Vector3D::Vector3D(float x, float y, float z)
{
	this->x = x;
	this->y = y;
	this->z = z;

}


Vector3D::~Vector3D()
{
}

Vector3D Vector3D::operator+(const Vector3D & v)
{
	Vector3D vector;
	vector.x = this->x + v.x;
	vector.y = this->y + v.y;
	vector.z = this->y + v.z;
	return vector;
}

Vector3D Vector3D::operator-(const Vector3D & v)
{
	Vector3D vector;
	vector.x = this->x - v.x;
	vector.y = this->y - v.y;
	vector.z = this->y - v.z;
	return vector;
}

Vector3D Vector3D::operator*(const Vector3D & v)
{
	Vector3D vector;
	vector.x = this->x * v.x;
	vector.y = this->y * v.y;
	vector.z = this->y * v.z;
	return vector;
}

void Vector3D::operator*(float v)
{
	this->x *= v;
	this->y *= v;
	this->z *= v;
}

Vector3D Vector3D::operator/(const Vector3D & v)
{
	Vector3D vector;
	vector.x = this->x / v.x;
	vector.y = this->y / v.y;
	vector.z = this->y / v.z;
	return vector;
}

void Vector3D::operator/(float v)
{
	this->x /= v;
	this->y /= v;
	this->z /= v;
}

void Vector3D::Normalize()
{
	float length = GetMagnitude();
	x = x / length;
	y = y / length;
	z = z / length;
}

float Vector3D::GetMagnitude()
{
	float h;
	float a = x * x;
	float b = y * y;
	float c = z * z;

	h = sqrt(a + b + c);
	return h;
}

float Vector3D::GetAngleBetween(const Vector3D & v)
{
	// Assume already normalized?
	float dotProduct;
	dotProduct = x * v.x;
	dotProduct += y * v.y;
	dotProduct += z * v.z;

	return 0.0f;
}
