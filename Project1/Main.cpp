#include "Vec3.h"

void main() {
	Vec3<int> v1(1,2,4);
	Vec3<int> v2 = { 2, 0 };

	Vec3<int> v3 = v1 + v2;
	v3.Log();
	v3 += v1;
	v3.Log();
	v3 -= v2;
	v3.Log();

	Vec3<float> normalised = v1.GetNormalised();

	float dist = v1.distance_to(v3);
	normalised.Log();
	getchar();
}