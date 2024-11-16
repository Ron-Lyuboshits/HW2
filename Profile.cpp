#include "Profile.h"

void Profile::init(User owner) {
	this->user = owner;
}

void Profile::clear() {
	this->page.clearPage();
	this->friends_List.clear();
}

User Profile::getOwner() const {
	User owner = this->user;
	return owner;
}

void Profile::setStatus(string new_status) {
	this->page.setStatus(new_status);
}

void Profile::addPostToProfilePage(string post) {
	this->page.addLineToPosts(post);
}

void Profile::addFriend(User friend_to_add) {
	this->friends_List.add(friend_to_add);
}

string Profile::getPage() const {
	return "Status: " + this->page.getStatus() + "\n*******************\n*******************\n" + this->page.getPosts();
}

string Profile::getFriends() {
	UserNode* userNode;
	User data;
	string friends_List;
	userNode = this->friends_List.get_first();
	while (userNode != nullptr)
	{
		data = userNode->get_data();
		friends_List += data.getUserName() + ",";
		userNode = userNode->get_next();
	}
	if (!friends_List.empty()) {
		friends_List.pop_back();
	}
	return friends_List;
}

string Profile::getFriendsWithSameNameLength() {
	UserNode* userNode;
	User data;
	string friendsWithSameNameLength;
	userNode = this->friends_List.get_first();
	while (userNode != nullptr)
	{
		data = userNode->get_data();
		if (data.getUserName().length() == this->getOwner().getUserName().length()) {
			friendsWithSameNameLength += data.getUserName() + ",";
		}
		userNode = userNode->get_next();
	}
	if (!friendsWithSameNameLength.empty()) {
		friendsWithSameNameLength.pop_back();
	}

	return friendsWithSameNameLength;

}