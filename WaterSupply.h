#ifndef WATER_SUPPLY_H
#define WATER_SUPPLY_H

#include "Utility.h"

class WaterSupply : public Utility
{
private:
    int waterFlowRate;
public:
    WaterSupply(int initialAmount = 0) : amount(initialAmount) {}
    
    int getAmount() const { return amount; }
    void setAmount(int newAmount) { amount = newAmount; }

    void addAmount(int add) { amount += add; }
    void subtractAmount(int sub) { amount = std::max(0, amount - sub); }
};

#endif // WATERSUPPLY_H