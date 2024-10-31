#ifndef VERYSATISFIED_H
#define VERYSATISFIED_H

#include "SatisfactionLevel.h"
#include "Satisfied.h"

class VerySatisfied : public SatisfactionLevel{
    protected:
        float taxReturn = 1.5;

    public:
        float satisfactionRating;

        VerySatisfied() = default;

        void enterState() override;
        void exitState() override;

        void nextState(Citizen* citizen) override;
        void prevState(Citizen* citizen) override;

        std::string getCurrentSatisfactionLevel() override;
};

#endif  // VERYSATISFIED_H