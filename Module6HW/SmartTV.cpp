#include "SmartTV.h"

SmartTV::SmartTV(int batteryLife, bool wifi, int weight, int diagonal, std::string name) : Device(batteryLife, wifi), Appliances(weight), _diagonal(diagonal), _name(name) {

}

void SmartTV::ShowSpec() {
	std::cout << "Smart TV" << std::endl;
	std::cout << "TV name: " << _name << std::endl;
	std::cout << "Battery life: " << _batteryLife << " hours" << std::endl;
	if (_wifi) {
		std::cout << "Wi-Fi is supported" << std::endl;
	}
	else {
		std::cout << "Wi-Fi is not supported" << std::endl;
	}
	std::cout << "Weight: " << _weight << " kg" << std::endl;
	std::cout << "Diagonal " << _diagonal << " inches" << std::endl;
}

