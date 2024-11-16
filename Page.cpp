#include "Page.h"

void Page::init() {
	this->posts = "";
	this->status = "";
}

string Page::getPosts() const {
	return this->posts;
}

string Page::getStatus() const {
	return this->status;
}

void Page::clearPage() {
	this->posts = "";
}

void Page::setStatus(string status) {
	this->status = status;
}

void Page::addLineToPosts(string new_line) {
	this->posts += new_line + "\n";
}