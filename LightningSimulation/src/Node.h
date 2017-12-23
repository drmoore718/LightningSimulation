#pragma once

#include <Channel.h>

class Node {
public:
	Node(const FeeStrategyFunction& feeFx);
	~Node();

	void addChannel(int otherNodeId, int myBalance, int otherBalance);
	int calculateRelayFee(const Channel& channel);

private:
	const FeeStrategyFunction& mFeeFx;
	std::vector<Channel> mChannels;
};

