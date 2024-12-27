#include "WashingMachine.h"

WashingMachine::WashingMachine(int weight, int capacity) : Appliances(weight), _capacity(capacity) {

}

void WashingMachine::ShowSpec() {
	std::cout << "Washing machine" << std::endl;
	std::cout << "Weight: " << _weight << " kg" << std::endl;
	std::cout << "Washing machine drum capacity: " << _capacity << " liters" << std::endl;
}