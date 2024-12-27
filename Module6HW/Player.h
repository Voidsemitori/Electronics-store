#pragma once
#include "Device.h"

class Player : public Device {
private:
	int _totalTracks;
public:
	Player(int batteryLife, bool wifi, int totalTracks);
	void ShowSpec() override;
	void ShowTotalTracks();
};
