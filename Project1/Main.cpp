#include "Vec3.h"

void main() {
	Vec3<int> v1 = { 1, 1, 1 };
	Vec3<int> v2 = { 2, 0 };

	Vec3<int> v3 = v1 + v2;
	v3 += v1;
	//v3 -= v2;

	Vec3<float> normalised = v1.Normalise();
	normalised.Normalise();

	float dist = v1.distance_to(v3);
}