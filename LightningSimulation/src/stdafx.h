// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include <vector>
#include <string>
#include <fstream>
#include <functional>

class Channel;
typedef std::function<int(const Channel&)> FeeStrategyFunction;

#include <json.hpp>
using json = nlohmann::json;
