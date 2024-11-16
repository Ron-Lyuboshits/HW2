#pragma once
#include <string>

using std::string;


class Page 
{
	public:
		string status;
		string posts;
		void init();
		string getPosts() const;
		string getStatus() const;
		void clearPage();
		void setStatus(string status);
		void addLineToPosts(string new_line);
};