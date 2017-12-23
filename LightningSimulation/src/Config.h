#pragma once

class Config {
public:
	Config(std::string fileName);
	~Config();

	int getNodeCount() const { return mNodeCount; }

private:
	int mNodeCount;
	int mHubNodeShare;
	int mSpokeNodeShare;
};

