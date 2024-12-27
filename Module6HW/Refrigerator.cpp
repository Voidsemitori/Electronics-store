#include "Refrigerator.h"

Refrigerator::Refrigerator(int weight, int min_t) : Appliances(weight), _min_t(min_t) {

}

void Refrigerator::ShowSpec() {
	std::cout << "Refrigerator" << std::endl;
	std::cout << "Weight: " << _weight << " kg" << std::endl;
	std::cout << "Minimal temperature: " << _min_t << " degrees" << std::endl;
}