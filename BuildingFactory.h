#ifndef BUILDINGFACTORY_H
#define BUILDINGFACTORY_H

#include "Building.h"
#include "ResourceManager.h"

class BuildingFactory
{
protected:

    ResourceManager* Rmanager;

    Building* building;

    // Units of resources used to construct each building
    int wood;
    int steel;
    int concrete;
    int water;
    int power;

public:

    virtual Building* constructBuilding(){};

    virtual Building* upgradeBuilding(Building* b){}; // This method is used to Decorate buildings

    virtual Building* cloneBuilding(){};      

    virtual void setBuilding(Building* b);

    virtual ~BuildingFactory();

};


#endif // BUILDINGFACTORY_H