#pragma once

#include "Complex.h"

struct Complex Complex_plus(struct Complex c1, struct Complex c2)
{
	struct Complex result;
	result.real = c1.real + c2.real;
	result.imanagine = c1.imanagine + c2.imanagine;
	return result;
}

struct Complex Complex_minus(struct Complex c1, struct Complex c2)
{
	struct Complex  result;
	result.real = c1.real - c2.real;
	result.imanagine = c1.imanagine - c2.imanagine;
	return result;
}