#include "Device.h"
#include "Player.h"
#include "IElectronics.h"
#include "Appliances.h"
#include "Smartphone.h"
#include "Refrigerator.h"
#include "SmartTV.h"
#include "WashingMachine.h"
using namespace std;

int main() {
	IElectronics* store[10];
	store[0] = new Smartphone(10, true,"Samsung");
	store[1] = new Smartphone(12, true, "Apple");
	store[2] = new Player(15, false, 150);
	store[3] = new Player(8, true, 900);
	store[4] = new Refrigerator(80, -20);
	store[5] = new Refrigerator(50, -12);
	store[6] = new WashingMachine(50, 12);
	store[7] = new WashingMachine(60, 15);
	store[8] = new SmartTV(0, true, 21, 65, "LG");
	store[9] = new SmartTV(3, true, 10, 32, "Haier");

	bool open = true;
	while (open) {
		cout << "\nEnter the product number (1 - 10) to view specifications. Enter 0 to exit." << endl;
		int number;
		cin >> number;
		switch (number) {
		case 1:
			store[0]->ShowSpec();
			break;
		case 2:
			store[1]->ShowSpec();
			break;
		case 3:
			store[2]->ShowSpec();
			break;
		case 4:
			store[3]->ShowSpec();
			break;
		case 5:
			store[4]->ShowSpec();
			break;
		case 6:
			store[5]->ShowSpec();
			break;
		case 7:
			store[6]->ShowSpec();
			break;
		case 8:
			store[7]->ShowSpec();
			break;
		case 9:
			store[8]->ShowSpec();
			break;
		case 10:
			store[9]->ShowSpec();
			break;
		case 0:
			open = false;
			break;
		default:
			cout << "\nEnter the product number (1 - 10) to view specifications. Enter 0 to exit." << endl;
			break;
		}
	}
	delete store[0];
	delete store[1];
	delete store[2];
	delete store[3];
	delete store[4];
	delete store[5];
	delete store[6];
	delete store[7];
	delete store[8];
	delete store[9];
	return 0;
}
