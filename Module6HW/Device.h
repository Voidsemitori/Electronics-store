#pragma once
#include "IElectronics.h"

class Device : virtual public IElectronics {
protected:
	int _batteryLife;
	bool _wifi;
public:
	Device(int batteryLife, bool wifi);
	virtual void ShowSpec() override;
	virtual ~Device() = default;
};