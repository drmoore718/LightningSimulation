#pragma once

#include <Node.h>

class LightningNetwork {
public:
	LightningNetwork();
	~LightningNetwork();

	void addNode(const FeeStrategyFunction& feeFx);
	void createChannel(int node1, int node2, int node1Bal, int node2Bal);
	void transact(int from, int to, int amount);

private:

	std::vector<Node> mNodes;
};

