#pragma once
#include "DeviceList.h";
#include <string>

using std::string;


class User
{
	public:
		void init(unsigned int id, string username, unsigned int age);
		void clear();
		unsigned int getID() const;
		string getUserName() const;
		unsigned int getAge() const;
		DevicesList& getDevices();
		void addDevice(Device newDevice);
		bool checkIfDevicesAreOn() const;
	private:
		DevicesList devicesList;
		unsigned int id;
		string username;
		unsigned int age;
};