/*
 * ConquerPlan.h
 *
 *  Created on: 21.07.2015
 *      Author: David
 */

#ifndef CONQUERPLAN_H_
#define CONQUERPLAN_H_

#include "Plan.h"

class SuperRegion;

class ConquerPlan: public Plan {
private:
	SuperRegion &target;

public:
	ConquerPlan(SuperRegion &sr);
	virtual ~ConquerPlan();

	std::vector<double> getPriority() const;
	std::vector<std::pair<int,int> > getNeededResources() const;
	std::vector<std::pair<int,int> > placeArmies() const;
	std::vector<std::pair<std::pair<int,int>, int> > moveArmies() const;
};

#endif /* CONQUERPLAN_H_ */
