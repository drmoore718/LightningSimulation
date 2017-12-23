#pragma once

class Node;

class Channel {
public:
	Channel(int otherNodeId, int balance, int otherBalance);
	~Channel();

private:
	int mOtherNodeId;
	int mBalance;
	int mOtherBalance;
};

