#ifndef INDUSTRIALBUILDING_H
#define INDUSTRIALBUILDING_H

#include "Building.h"
#include "Subject.h"

class IndustrialBuilding : public Building{
    
    private:
        int size;
        int numStories;
        Industry industryType;
        float pollutionLevel;
        
    public:
        int getSize();
        int getNumStories();
        Industry getIndustryType();
        float getPollutionLevel();
        void addEmployees();

    //protected: Changed to accomadte construction in factory
        IndustrialBuilding(int capacity, int size, int numStories, Industry industryType, int pollutionLevel);
        IndustrialBuilding(BuildingState* s, int capacity, int size, int numStories, Industry industryType, int pollutionLevel);

        virtual void provideService() override;
        virtual float getCost() override;

        virtual IndustrialBuilding* clone();

};


#endif // INDUSTRIALBUILDING_H