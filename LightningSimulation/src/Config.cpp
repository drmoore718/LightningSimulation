#include "Config.h"

using namespace std;

Config::Config(string fileName) {
	ifstream i(fileName);
	json j;
	i >> j;

	mNodeCount = j["nodes"]["count"];
	mHubNodeShare = j["nodes"]["hubShare"];
	mSpokeNodeShare = j["nodes"]["spokeShare"];
}


Config::~Config() {
}
