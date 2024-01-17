#pragma once
template <typename C, typename F>
bool checkIfAll(C cont, F func) {
	for (const auto& el : cont) {
		if (!func(el)) {
			return false;
		}
	}
	return true;
}