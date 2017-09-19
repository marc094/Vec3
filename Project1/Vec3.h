#pragma once
#include <cmath>

template <class TYPE>
class Vec3 {

private:
	TYPE x, y, z;

public:
	Vec3 operator +(const Vec3 other) {
		Vec3 ret = {
			x + other.x,
			y + other.y,
			z + other.z
		};
		return ret;
	}

	Vec3 operator -(const Vec3 other) {
		Vec3 ret = {
			x - other.x,
			y - other.y,
			z - other.z
		};
		return ret;
	}

	Vec3& operator +=(const Vec3 other) {
		x += other.x;
		y += other.y;
		z += other.z;

		return *this;
	}

	Vec3& operator -=(const Vec3 other) {
		x -= other.x;
		y -= other.y;
		z -= other.z;

		return *this;
	}

	Vec3& operator = (const Vec3 other) {
		x = other.x;
		y = other.y;
		z = other.z;
	}

	bool operator == (const Vec3 other) {
		return (x == other.x && y == other.y && z == other.z);
	}

	Vec3<float> Normalise() {
		float module = sqrt(x*x + y*y + z*z);

		Vec3<float> ret = {
			(float)x / module,
			(float)y / module,
			(float)z / module
		};

		return ret;
	}

	Vec3 Zero() {
		Vec3 ret = {
			0,
			0,
			0
		};

		return ret;
	}

	bool is_Zero() {
		return this == {0, 0, 0};
	}

	float distance_to(const Vec3 other) {
		Vec3 resta = *this - other;
		float module = sqrt(resta.x*resta.x + resta.y*resta.y + resta.z*resta.z);

		return module;
	}

	Vec3(TYPE _x, TYPE _y, TYPE _z) {
		x = _x;
		y = _y;
		z = _z;
	}

	Vec3(TYPE _x, TYPE _y) {
		x = _x;
		y = _y;
		z = 0;
	}

	Vec3() {

	}

	~Vec3() {

	}

};