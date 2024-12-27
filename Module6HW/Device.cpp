#include "Device.h"

Device::Device(int batteryLife, bool wifi) : _batteryLife(batteryLife), _wifi(wifi) {

}

void Device::ShowSpec() {
	std::cout << "Battery life: " << _batteryLife << " hours." << std::endl;
}