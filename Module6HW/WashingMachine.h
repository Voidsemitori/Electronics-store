#pragma once
#include "Appliances.h"

class WashingMachine : public Appliances {
private:
	int _capacity;
public:
	WashingMachine(int weight, int capacity);
	void ShowSpec() override;
};