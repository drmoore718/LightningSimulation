#include "LightningNetwork.h"

LightningNetwork::LightningNetwork() {
}

LightningNetwork::~LightningNetwork() {
}

void LightningNetwork::addNode(const FeeStrategyFunction& feeFx) {
	mNodes.emplace_back(feeFx);
}

void LightningNetwork::createChannel(int node1, int node2, int node1Bal, int node2Bal) {
	mNodes[node1].addChannel(node2, node1Bal, node2Bal);
	mNodes[node2].addChannel(node1, node2Bal, node1Bal);
}