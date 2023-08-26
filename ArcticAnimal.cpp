/*
 * ArcticAnimal.cpp
 *
 *  Created on: Mar 10, 2023
 *      Author: henry
 */

#include "ArcticAnimal.hpp"
void clearCin(void){
	cin.clear();
	cin.ignore(INT_MAX, '\n');
}

ArcticAnimal::ArcticAnimal() {
	// TODO Auto-generated constructor stub

	this->initializeVars();
}

void ArcticAnimal::initializeVars(void){
	this->name = "Unkown";
	this->avgWeight = 0;
	this->avgLength = 0;
	this->population = 0;
	this->endangered = 0;
	this->foodSource = "Unkown";
}

bool ArcticAnimal::setName(string aString){
	if(aString.length() < 0){
		return false;
	}else{
		this->name = aString;
		return true;
	}
}
bool ArcticAnimal::setAvgWeight(int aInt){
	if(aInt < 0){
		return false;
	}else{
		this->avgWeight = aInt;
		return true;
	}
}
bool ArcticAnimal::setAvgLength(int aInt){
	if(aInt < 0){
		return false;
	}else{
		this->avgLength = aInt;
		return true;
	}
}
bool ArcticAnimal::setPopulation(int aInt){
	if(aInt < 0){
		return false;
	}else{
		this->population = aInt;
		return true;
	}
}
bool ArcticAnimal::setEndangered(bool aBool){
	this->endangered = aBool;
	return true;
}
bool ArcticAnimal::setFoodSource(string aString){
	if(aString.length() < 0){
		return false;
	}else{
		this->foodSource = aString;
		return true;
	}
}
string ArcticAnimal::getName(void){
	return this->name;
}
int ArcticAnimal::getAvgWeight(void){
	return this->avgWeight;
}
int ArcticAnimal::getAvgLength(void){
	return this->avgLength;
}
int ArcticAnimal::getPopulation(void){
	return this->population;
}
bool ArcticAnimal::getEndangered(void){
	return this->endangered;
}
string ArcticAnimal::getFoodSource(void){
	return this->foodSource;
}



ArcticAnimal::~ArcticAnimal() {
	// TODO Auto-generated destructor stub
}
