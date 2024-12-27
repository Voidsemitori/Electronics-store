#pragma once
#include "Device.h"

class Smartphone : public Device {
private:
	std::string _name;
public:
	Smartphone(int batteryLife, bool wifi, std::string name);
	void ShowSpec() override;
};