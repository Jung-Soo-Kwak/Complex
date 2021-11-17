#pragma once

struct Complex
{
	int real;
	int imanagine;
};

struct Complex Complex_plus(struct Complex c1, struct Complex c2);
struct Complex Complex_minus(struct Complex c1, struct Complex c2);