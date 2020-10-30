#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

# include "ASpell.hpp"
# include "ATarget.hpp"
# include <vector>

class TargetGenerator
{
	private:
		std::vector<ATarget*> targets;

		TargetGenerator(const TargetGenerator &ref);
		TargetGenerator& operator=(const TargetGenerator &ref);

	public:
		TargetGenerator();
		virtual ~TargetGenerator();

		void 	learnTargetType(ATarget *target);
		void 	forgetTargetType(std::string const &target_name);
		ATarget *createTarget(std::string const &target_name);
};

#endif
