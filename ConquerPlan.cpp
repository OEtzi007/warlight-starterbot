/*
 * ConquerPlan.cpp
 *
 *  Created on: 21.07.2015
 *      Author: David
 */

#include "ConquerPlan.h"
#include "SuperRegion.h"

ConquerPlan::ConquerPlan(SuperRegion &sr):target(sr) {
	// TODO Auto-generated constructor stub

}

ConquerPlan::~ConquerPlan() {
	// TODO Auto-generated destructor stub
}

// TODO implement the ConquerPlan
std::vector<double> ConquerPlan::getPriority() const {
	double val=-target.getReward();
	return std::vector<double>(1,val);
}

std::vector<std::pair<int, int> > ConquerPlan::getNeededResources() const {
}

std::vector<std::pair<int, int> > ConquerPlan::placeArmies() const {
}

std::vector<std::pair<std::pair<int, int>, int> > ConquerPlan::moveArmies() const {
}
