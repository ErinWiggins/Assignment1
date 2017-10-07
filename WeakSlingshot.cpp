/*
 * File: WeakSlingshot.cpp
 * Author: Erin Wiggins
 *
 */

#include "WeakSlingshot.h"

double WeakSlingshot::hit(double armor) {

	double damage;
	if (armor < 20)
		damage = hitPoints - (armor*0.9);
	else
		damage = hitPoints - armor;

	if (damage < 0)
		return 0;

	return damage;
}