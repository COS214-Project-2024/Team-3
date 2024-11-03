#ifndef DISSATISFIED_H
#define DISSATISFIED_H

#include "SatisfactionLevel.h"
#include "Neutral.h"
#include "VeryDissatisfied.h"

class Dissatisfied : public SatisfactionLevel{
    protected:
        float taxReturn = 0.8;

    public:
        float satisfactionRating;

        Dissatisfied() = default;

        void enterState() override;
        void exitState() override;

        void nextState(Citizen* citizen) override;
        void prevState(Citizen* citizen) override;

        std::string getCurrentSatisfactionLevel() override;

        float getTaxReturn()override {return taxReturn;};
};

#endif  // DISSATISFIED_H