/*
 * File: CrazyRandomSword.h
 * Author: Erin Wiggins
 *
 * Created on October 7, 2017, 1:59 PM
 */

#include <string>
#include "stdlib.h"
#include "time.h"

#include "Weapon.h"

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

/**
 * Defines the behavior of a random crazy sword (hitpoints = random integer between 10 and 100,
 * ignores random integer amount of armor points ranging from 0 to half of hitpoints)
 */



class CrazyRandomSword : public Weapon {
public:

	CrazyRandomSword() : Weapon("Crazy random sword", calculateHitpoints()) {
	}
	virtual ~CrazyRandomSword() {};
	virtual double hit(double armor);

private:
	double calculateHitpoints();

};

#endif /* CRAZYRANDOMSWORD_H */
