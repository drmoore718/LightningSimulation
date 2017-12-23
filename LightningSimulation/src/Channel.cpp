#include "Channel.h"

Channel::Channel(int otherNodeId, int balance, int otherBalance) {
	mOtherNodeId = otherNodeId;
	mBalance = balance;
	mOtherBalance = otherBalance;
}

Channel::~Channel() {
}
