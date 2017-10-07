/*
 * File: WeakSlingshot.h
 * Author: Erin Wiggins
 *
 * Created on October 7, 2017, 2:32 PM
 */

#include <string>
#include "Weapon.h"

#ifndef WEAKSLINGSHOT_H
#define WEAKSLINGSHOT_H

/**
 * Defines the behavior of a weak slingshot (hitpoints = 5, ignores 10% of armor points if armor < 20)
 */

class WeakSlingshot : public Weapon {
public:

	WeakSlingshot() : Weapon("Weak slingshot", 5) {
	}
	virtual ~WeakSlingshot() {};
	virtual double hit(double armor);

};

#endif /* WEAKSLINGSHOT_H */
