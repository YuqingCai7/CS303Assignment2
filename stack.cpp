#include "stack.h"


bool stack::empty() {
	return container.empty();
}

void stack::push(const int& item) {
	container.push_back(item);
}

void stack::pop() {
	container.pop_back();
}

int& stack::top() {
	return container.back();
}

const int& stack::top() const {
	return container.back();
}

size_t stack::size() const {
	return container.size();
}

double stack::average() {
	if (container.empty()) {
		return 0.0;
	}
	else {
		double sum = 0;
		for (const auto& item : container) {
			sum += item;
		}
		return sum / container.size();
	}
}

