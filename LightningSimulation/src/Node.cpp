#include "Node.h"

Node::Node(const FeeStrategyFunction& feeFx) : 
	mFeeFx(feeFx) {
}

Node::~Node() {
}

void Node::addChannel(int otherNodeId, int myBalance, int otherBalance) {
	mChannels.emplace_back(otherNodeId, myBalance, otherBalance);
}

int Node::calculateRelayFee(const Channel& channel) {
	return mFeeFx(channel);
}
