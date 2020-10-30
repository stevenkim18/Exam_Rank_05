#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{
}

TargetGenerator::~TargetGenerator()
{
	std::vector<ATarget*>::iterator it = targets.begin();
	for (; it != targets.end(); it++)
		delete *it;
}

void TargetGenerator::learnTargetType(ATarget *target)
{
	if (target)
	{
		std::vector<ATarget*>::iterator it = targets.begin();
		for (; it != targets.end(); ++it)
		{
			if ((*it)->getType() == target->getType())
				return ;
		}
		targets.push_back(target->clone());
	}
}

void TargetGenerator::forgetTargetType(std::string const &target_name)
{
	std::vector<ATarget*>::iterator it = targets.begin();
	while(it != targets.end())
	{
		if (target_name == (*it)->getType())
		{
			delete *it;
			targets.erase(it);
			return ;
		}
	}
}

ATarget *TargetGenerator::createTarget(std::string const & typeName) {
	std::vector<ATarget*>::iterator it = targets.begin();
	for (; it != targets.end(); it++)
	{
		if ((*it)->getType() == typeName)
			return (*it)->clone();
	}
	return nullptr;
}
