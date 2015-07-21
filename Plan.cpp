/*
 * Plan.cpp
 *
 *  Created on: 21.07.2015
 *      Author: David
 */

#include "Plan.h"

Plan::Plan() {
	// TODO Auto-generated constructor stub

}

Plan::~Plan() {
	// TODO Auto-generated destructor stub
}

bool operator< (const Plan &lhs,const Plan &rhs){
	std::vector<double> lhsP, rhsP;
	lhsP=lhs.getPriority();
	rhsP=rhs.getPriority();
	int counter=0;
	while(true){
		if(lhsP.size()<counter+1)
			return true;
		if(rhsP.size()<counter+1)
			return false;
		if(lhsP[counter]<rhsP[counter])
			return true;
		if(rhsP[counter]<lhsP[counter])
			return false;
		counter++;
	}
}
