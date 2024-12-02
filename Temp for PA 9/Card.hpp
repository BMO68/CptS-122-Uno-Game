#pragma once
#include <iostream>
#include "Shortcuts.hpp"

 class Card {
private:
	std::string color;
	int value;
	bool wild;

public:
	Card(std::string newColor = "", int newValue = OUTBOUND, bool newWild = false) : color(newColor), value(newValue), wild(newWild) {};

	// Getters
	std::string GetColor() const;
	int GetValue() const;
	bool IsWild() const;

	// Setters
	void SetColor(std::string newColor);
	void SetValue(int newValue);
	void SetWild(bool isWild);
};

