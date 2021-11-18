#include "Utilities.h"

bool util::stob(const std::string& s) {
	if(s == "true" || s == "false") {
		return s == "true";
	}
	else if (s == "1" || s == "0") {
		return s == "1";
	}
	else {
		throw std::domain_error("not a valid boolean value");
	}
}

bool util::equal(const float a, const float b, float eps) {
	return std::fabs(a - b) <= eps;
}

bool util::equal(const float a, const double b, float eps) {
	return std::fabs(a - b) <= eps;
}

bool util::equal(const float a, const long double b, float eps) {
	return std::fabs(a - b) <= eps;
}

bool util::equal(const double a, const double b, float eps) {
	return std::fabs(a - b) <= eps;
}

bool util::equal(const double a, const float b, float eps) {
	return std::fabs(a - b) <= eps;
}

bool util::equal(const double a, const long double b, float eps) {
	return std::fabs(a - b) <= eps;
}

bool util::equal(const long double a, const long double b, float eps) {
	return std::fabs(a - b) <= eps;
}

bool util::equal(const long double a, const double b, float eps) {
	return std::fabs(a - b) <= eps;
}

bool util::equal(const long double a, const float b, float eps) {
	return std::fabs(a - b) <= eps;
}
