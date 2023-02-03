#pragma once

#include "CollisionPrimitive.h"

/// <summary>
/// �����蔻��w���p�[�N���X
/// </summary>
class Collision
{
public:
	/// <summary>
	/// ���ƕ��ʂ̓����蔻��
	/// </summary>
	static bool CheckSphere2Plane(const Sphere& sphere, const Plane&
		plane, DirectX::XMVECTOR* inter = nullptr);

	/// <summary>
	/// ���ƕ��ʂ̓����蔻��
	/// </summary>
	static void ClosestPtPoint2Triangle(const DirectX::XMVECTOR& point,
		const Triangle& triangle, DirectX::XMVECTOR* closest);

	/// <summary>
	/// ���Ɩ@���t���O�p�`�̓�����`�F�b�N
	/// </summary>
	static bool CheckSphere2Triangle(const Sphere& sphere, const Triangle&
		triangle, DirectX::XMVECTOR* inter = nullptr);

	/// <summary>
	/// ���C�ƕ��ʂ̓����蔻��
	/// </summary>
	static bool CheckRay2Plane(const Ray& ray, const Plane& plane,
		float* distance = nullptr, DirectX::XMVECTOR* inter = nullptr);

	/// <summary>
	/// ���C�Ɩ@���t���O�p�`�̓����蔻��
	/// </summary>
	static bool CheckRay2Triangle(const Ray& ray, const Triangle&
		triangle, float* distance = nullptr, DirectX::XMVECTOR* inter = nullptr);

	/// <summary>
	/// ���C�Ƌ��̓����蔻��
	/// </summary>
	static bool CheakRay2Shere(const Ray& ray, const Sphere& sphere,
		float* distance = nullptr, DirectX::XMVECTOR* inter = nullptr);
};