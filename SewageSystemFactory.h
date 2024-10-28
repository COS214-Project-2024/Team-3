#ifndef SEWAGESYSTEMFACTORY_H
#define SEWAGESYSTEMFACTORY_H

#include "UtilityFactory.h"
#include "SewageSystem.h"

class SewageSystemFactory : public UtilityFactory {
public:
    SewageSystemFactory(){};
    virtual ~SewageSystemFactory(){};

    Utility* createUtility(int capacity, int maintenanceCost) override{
        // Return a new Sewerage System instance with specific waterflow capacities
        return new SewageSystem(capacity, maintenanceCost, capacity * 2);
    }

private:
    int capacity;
    int maintenanceCost;
    int filteringCapacity;
};

#endif  // SEWAGESYSTEMFACTORY_H