#ifndef __Vec3__
#define __Vec3__

#include <cmath>
#include <stdio.h>

template <class TYPE>
class Vec3 {

private:
	TYPE x, y, z;

public:
	Vec3 operator +(const Vec3& other) const {
		return { x + other.x, y + other.y, z + other.z };
	}

	Vec3 operator -(const Vec3& other) const {
		return { x - other.x, y - other.y, z - other.z };
	}

	Vec3& operator +=(const Vec3& other) {
		x += other.x;
		y += other.y;
		z += other.z;

		return *this;
	}

	Vec3& operator -=(const Vec3& other) {
		x -= other.x;
		y -= other.y;
		z -= other.z;

		return *this;
	}

	Vec3& operator = (const Vec3& other) {
		x = other.x;
		y = other.y;
		z = other.z;
	}

	bool operator == (const Vec3 other) {
		return (x == other.x && y == other.y && z == other.z);
	}

	Vec3<float> GetNormalised() {
		float module = sqrt(x*x + y*y + z*z);
		return { (float)x / module, (float)y / module, (float)z / module };
	}

	Vec3 Zero() {
		return { 0, 0, 0 };
	}

	bool is_Zero() {
		return (x == 0 && y == 0 && z == 0);
	}

	float distance_to(const Vec3 other) {
		Vec3 resta = *this - other;
		float module = sqrt(resta.x*resta.x + resta.y*resta.y + resta.z*resta.z);

		return module;
	}

	void Log() const {
		printf("\n< %f, %f, %f >", (float)x, (float)y, (float)z);
	}

	Vec3(const TYPE& _x, const TYPE& _y, const TYPE& _z) {
		x = _x;
		y = _y;
		z = _z;
	}

	Vec3(const TYPE& _x, const TYPE& _y) {
		x = _x;
		y = _y;
		z = 0;
	}

	Vec3() {

	}

	~Vec3() {

	}

};

#endif