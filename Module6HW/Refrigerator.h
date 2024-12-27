#pragma once
#include "Appliances.h"

class Refrigerator : public Appliances {
private:
	int _min_t;
public:
	Refrigerator(int weight, int min_t);
	void ShowSpec() override;
};