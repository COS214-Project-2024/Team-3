#ifndef SEWAGESYSTEM_H
#define SEWAGESYSTEM_H

#include "Utility.h"
#include "GameEnvironment.h"

class SewageSystem : public Utility {
public:
    SewageSystem(int capacity, int maintenanceCost)
        : Utility("SewageSystem", capacity, maintenanceCost) {}

    void callObserver() override{

        ChangeData changeData = {"ProvideService", 1.0f};

        this->notify(changeData);

    }



};

#endif  // SEWAGESYSTEM_H