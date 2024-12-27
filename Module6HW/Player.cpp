#include "Player.h"

Player::Player(int batteryLife, bool wifi, int totalTracks) : Device(batteryLife, wifi), _totalTracks(totalTracks) {

}

void Player::ShowSpec() {
	std::cout << "Player" << std::endl;
	std::cout << "Battery life: " << _batteryLife << " hours" << std::endl;
	std::cout << "Total tracks on device: " << _totalTracks << " tracks" << std::endl;
	if (_wifi) {
		std::cout << "Wi-Fi is supported" << std::endl;
	}
	else {
		std::cout << "Wi-Fi is not supported" << std::endl;
	}
}

void Player::ShowTotalTracks() {
	std::cout << "Total tracks on device: " << _totalTracks << " tracks" << std::endl;
}