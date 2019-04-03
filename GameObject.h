#ifndef GAMEOBJECT
#define GAMEOBJECT

#include <directxmath.h>
#include <string>
#include "Vector3D.h"
#include "Appearance.h"
#include "ParticleModel.h"
#include "Transform.h"

using namespace DirectX;
using namespace std;


class GameObject
{
public:
	GameObject(string type, Appearance* appearance, Transform* transform, ParticleModel* particleModel);
	~GameObject();

	Appearance* GetAppearance() const { return _appearance; }
	Transform* GetTransform() const { return _transform; }
	ParticleModel* GetParticleModel() const { return _particleModel; }

	string GetType() const { return _type; }

	void Update(float t);
	void Draw(ID3D11DeviceContext* pImmeadiateContext);

	void SetParent(GameObject * parent) { _parent = parent; }

private:

	string _type;

	Appearance* _appearance;
	Transform* _transform;
	ParticleModel* _particleModel;	

	GameObject * _parent;
};
#endif
