/*
 * File: SimpleAxe.h
 * Author: Erin Wiggins
 *
 * Created on October 7, 2017, 12:12 PM
 */

#include <string>
#include "Weapon.h"

#ifndef SIMPLEAXE_H
#define SIMPLEAXE_H

/**
 * Defines the behavior of a simple axe (hitpoint = 60, ignores armor points if armor > 0 or armor < 20)
 */
class SimpleAxe : public Weapon {
public:

	SimpleAxe() : Weapon("Simple axe", 60.0) {
	}
	virtual ~SimpleAxe() {};
	virtual double hit(double armor);

};


#endif /* SIMPLEAXE_H*/
