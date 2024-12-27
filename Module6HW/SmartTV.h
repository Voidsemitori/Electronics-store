#pragma once
#include "Appliances.h"
#include "Device.h"

class SmartTV : public Device, Appliances {
private:
	std::string _name;
	int _diagonal;
public:
	SmartTV(int batteryLife, bool wifi, int weight, int diagonal, std::string name);
	void ShowSpec() override;
};
