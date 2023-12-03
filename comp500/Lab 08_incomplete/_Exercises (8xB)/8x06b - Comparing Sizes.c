#include <stdio.h>

struct Vector2D
{
	float x;
	float y;
};

struct Vector3D
{
	float x;
	float y;
	float z;
};

struct Vector4D
{
	float x;
	float y;
	float z;
	float w;
};

struct Matrix2D
{
	float m11;
	float m12;
	float m21;
	float m22;
};

struct Matrix3D
{
	float m11;
	float m12;
	float m13;
	float m21;
	float m22;
	float m23;
	float m31;
	float m32;
	float m33;
};

struct Matrix4D
{
	float m11;
	float m12;
	float m13;
	float m14;
	float m21;
	float m22;
	float m23;
	float m24;
	float m31;
	float m32;
	float m33;
	float m34;
	float m41;
	float m42;
	float m43;
	float m44;
};

int main(void)
{

	printf("sizeof Vector2D: %d\n", sizeof(struct Vector2D));
	printf("sizeof Vector3D: %d\n", sizeof(struct Vector3D));
	printf("sizeof Vector4D: %d\n", sizeof(struct Vector4D));

	printf("sizeof Matrix2D: %d\n", sizeof(struct Matrix2D));
	printf("sizeof Matrix3D: %d\n", sizeof(struct Matrix3D));
	printf("sizeof Matrix4D: %d\n", sizeof(struct Matrix4D));

	return 0;
}