#pragma once
#include <string>
#include <iostream>
#include <vector>

using namespace std;

class stack {
private:
	vector<int> container;
public:
	bool empty();
	void push(const int& item);
	void pop();
	int& top();
	const int& top() const;
	size_t size() const;
	double average();
};


