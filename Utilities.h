#include <string>
#include <iostream>
#include <stdexcept>
#include <cmath>

namespace util
{
	bool stob(const std::string& s);

	// TODO: change default value of eps to a machine-specific value
	// TODO: use enable_if and is_floating_point to remove the need to overload so many times.
	bool equal(const float a, const float b, float eps = 0.001);
	bool equal(const float a, const double b, float eps = 0.001);
	bool equal(const float a, const long double b, float eps = 0.001);
	bool equal(const double a, const double b, float eps = 0.001);
	bool equal(const double a, const float b, float eps = 0.001);
	bool equal(const double a, const long double b, float eps = 0.001);
	bool equal(const long double a, const long double b, float eps = 0.001);
	bool equal(const long double a, const double b, float eps = 0.001);
	bool equal(const long double a, const float b, float eps = 0.001);
}
