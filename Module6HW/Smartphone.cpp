#include "Smartphone.h"

Smartphone::Smartphone(int batteryLife, bool wifi, std::string name) : Device(batteryLife, wifi), _name(name) {

}

void Smartphone::ShowSpec() {
	std::cout << "Smartphone" << std::endl;
	std::cout << "Smartphone name: " << _name << std::endl;
	std::cout << "Battery life: " << _batteryLife << " hours" << std::endl;
	if (_wifi) {
		std::cout << "Wi-Fi is supported" << std::endl;
	}
	else {
		std::cout << "Wi-Fi is not supported" << std::endl;
	}
}
