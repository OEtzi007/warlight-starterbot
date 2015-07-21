/*
 * Plan.h
 *
 *  Created on: 21.07.2015
 *      Author: David
 */

#ifndef PLAN_H_
#define PLAN_H_

#include <vector>

class Plan {
public:
	Plan();
	virtual ~Plan();

	virtual std::vector<double> getPriority() const=0;//< returns lexically priority determination
	virtual std::vector<std::pair<int,int> > getNeededResources() const=0;//< returns list of region,army usage needed
	virtual std::vector<std::pair<int,int> > placeArmies() const=0;//< returns list of region,army placements required for the plan
	virtual std::vector<std::pair<std::pair<int,int>, int> > moveArmies() const=0;//< returns list of region to region, army moves required for the plan
};

bool operator< (const Plan &lhs,const Plan &rhs);

#endif /* PLAN_H_ */
