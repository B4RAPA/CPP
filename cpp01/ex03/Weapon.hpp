
#pragma once

#include "iostream"
#include <string>

class Weapon
{
private:
	std::string _type;

public:
	Weapon();
	Weapon(std::string type);
	const std::string& getType(void) const;
	void		setType( const std::string Type );
};