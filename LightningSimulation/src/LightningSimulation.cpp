#include <LightningNetwork.h>
#include <Config.h>

LightningNetwork n;

FeeStrategyFunction feeStrategies[] = {
	[&] (const Channel& node) -> int { 
		return 1;
	}
};

void initNetwork(const Config& config) {
	for (int i = 0; i < config.getNodeCount(); ++i) {
		n.addNode(feeStrategies[0]);
	}
}

int main() {
	Config config("resources/config.json");
	initNetwork(config);

	n.createChannel(0, 1, 50, 50);
	n.createChannel(1, 3, 50, 50);
	n.createChannel(0, 2, 50, 50);
	n.createChannel(2, 3, 50, 50);

	n.transact(0, 3, 25);

	return 0;
}
