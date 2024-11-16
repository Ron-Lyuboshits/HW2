#pragma once
#include <string>

using std::string;

///////////////////////////////////////////////////////////
/*														 //
	Those definitions are used for tests,                //
	you can add your own, but please do not delete any.  //
*/														 //
enum DeviceType { PHONE, PC, LAPTOP, TABLET };		     //
//
#define UbuntuOS "UbuntuLinux"                           //						
#define RedHatOS "RedHatLinux"							 //
#define MacOS "MacOS"									 //
#define IOS "IOS"										 //
#define WINDOWS7 "Windows7"                              //
#define WINDOWS10 "Windows10"                            //
#define WINDOWS11 "Windows11"                            //
#define ANDROID "Android"                                //
														 //
/// ///////////////////////////////////////////////////////


class Device
{
	public:
		bool Active;

		string getOS() const;
		bool isActive() const;
		void activate();
		void deactivate();
		void init(unsigned int id, DeviceType type, string os);
		unsigned int getID() const;
		DeviceType getType() const;
	private:
		unsigned int id;
		DeviceType type;
		string os;
};



