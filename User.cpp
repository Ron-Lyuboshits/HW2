#include "User.h"
#include "DeviceList.h"

using std::string;

void User::init(unsigned int id, string username, unsigned int age) {
	this->id = id;
	this->username = username;
	this->age = age;
	this->devicesList.init();

}

void User::clear() {
	this->devicesList.clear();
}

unsigned int User::getID() const {
	return this->id;
}

string User::getUserName() const {
	return this->username;
}

unsigned int User::getAge() const {
	return this->age;
}

DevicesList& User::getDevices() {
	return this->devicesList;
}

void User::addDevice(Device newDevice) {
	this->devicesList.add(newDevice);
}

bool User::checkIfDevicesAreOn() const {
	DeviceNode* deviceNode;
	Device data;
	deviceNode = this->devicesList.get_first();
	while (deviceNode != nullptr)
	{
		data = deviceNode->get_data();
		if (!data.Active) {
			return false;
		}
		deviceNode = deviceNode->get_next();
	}
	return true;
}