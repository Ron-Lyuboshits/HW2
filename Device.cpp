#include "Device.h"


void Device::init(unsigned int id, DeviceType type, string os) {
	this->id = id;
	this->type = type;
	this->os = os;
}


unsigned int Device::getID() const {
	return this->id;
}

DeviceType Device::getType() const {
	return type;
}

string Device::getOS() const {
	return this->os;
}

bool Device::isActive() const {
	return this->Active;
}

void Device::activate() {
	this->Active = true;
}
	
void Device::deactivate() {
	this->Active = false;
}
	
