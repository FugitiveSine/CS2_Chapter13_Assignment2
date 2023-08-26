/*
 * ArcticAnimal.hpp
 *
 *  Created on: Mar 10, 2023
 *      Author: henry
 */

#ifndef ARCTICANIMAL_HPP_
#define ARCTICANIMAL_HPP_
#include <string>
#include <iostream>
#include <vector>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <climits>
#include <memory>
using namespace std;
class ArcticAnimal {
public:
	ArcticAnimal();
	virtual ~ArcticAnimal();
	bool setName(string);
		bool setAvgWeight(int);
		bool setAvgLength(int);
		bool setPopulation(int);
		bool setEndangered(bool);
		bool setFoodSource(string);
		void initializeVars(void);

		string getName(void);
		int getAvgWeight(void);
		int getAvgLength(void);
		int getPopulation(void);
		bool getEndangered(void);
		string getFoodSource(void);
private:
	string name;
	float avgWeight;
	float avgLength;
	int population;
	bool endangered;
	string foodSource;
};
void clearCin(void);

#endif /* ARCTICANIMAL_HPP_ */
