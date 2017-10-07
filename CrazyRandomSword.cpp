/*
 * File: CrazyRandomSword.cpp
 * Author: Erin Wiggins
 *
 */

#include "CrazyRandomSword.h"

double CrazyRandomSword::hit(double armor) {

	double damage = hitPoints - rand() % ((int)armor / 2);

	if (damage < 0)
		return 0;

	return damage;
}