#pragma once
#include <unordered_map>
#include <string>
size_t hash(const  std::string& input) {
	std::hash<std::string> hasher;
	return hasher(input);
}