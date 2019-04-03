#ifndef TRANSFORM
#define TRANSFORM
#include "Vector3D.h"

class Transform
{
public:
	Transform(){ _position = Vector3D(); _rotation = Vector3D(); _scale = Vector3D(1.0f, 1.0f, 1.0f);}
	Transform(Vector3D Position) : _position(Position) {_rotation = Vector3D(); _scale = Vector3D(1.0f, 1.0f, 1.0f);}
	Transform(Vector3D Position, Vector3D scale): _position(Position), _scale(scale){ _scale = Vector3D(1.0f, 1.0f, 1.0f); }
	Transform(Vector3D Position, Vector3D scale, Vector3D rotation) : _position(Position), _scale(scale), _rotation(rotation) {}
	~Transform();

	// Setters and Getters for position/rotation/scale
	void SetPosition(Vector3D position) { _position = position; }
	void SetPosition(float x, float y, float z) { _position.x = x; _position.y = y; _position.z = z; }

	Vector3D GetPosition() const { return _position; }

	void SetScale(Vector3D scale) { _scale = scale; }
	void SetScale(float x, float y, float z) { _scale.x = x; _scale.y = y; _scale.z = z; }

	Vector3D GetScale() const { return _scale; }

	void SetRotation(Vector3D rotation) { _rotation = rotation; }
	void SetRotation(float x, float y, float z) { _rotation.x = x; _rotation.y = y; _rotation.z = z; }

	Vector3D GetRotation() const { return _rotation; }

private:
	Vector3D _position;
	Vector3D _rotation;
	Vector3D _scale;
};
#endif

