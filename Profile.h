#pragma once
#include "UserList.h"
#include "Page.h"

class Profile
{
	public:
		User user;
		Page page;
		UserList friends_List;
		void init(User owner);
		void clear();
		User getOwner() const;
		void setStatus(string new_status);
		void addPostToProfilePage(string post);
		void addFriend(User friend_to_add);
		string getPage() const;
		string getFriends();
		string getFriendsWithSameNameLength();
};
