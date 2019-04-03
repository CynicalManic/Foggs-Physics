#include "Appearance.h"


Appearance::Appearance(Geometry geometry, Material material): _geometry(geometry), _material(material)
{

}

Appearance::~Appearance()
{
}

void Appearance::Draw(ID3D11DeviceContext * pImmediateContext)
{
}

void Appearance::SetBuffers(ID3D11DeviceContext * pImmediateContext)
{
	// Set vertex and index buffers
	pImmediateContext->IASetVertexBuffers(0, 1, &_geometry.vertexBuffer, &_geometry.vertexBufferStride, &_geometry.vertexBufferOffset);
	pImmediateContext->IASetIndexBuffer(_geometry.indexBuffer, DXGI_FORMAT_R16_UINT, 0);

	pImmediateContext->DrawIndexed(_geometry.numberOfIndices, 0, 0);
}
