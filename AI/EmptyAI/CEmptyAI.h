#include "../../AI_Base.h"

class CEmptyAI : public CGlobalAI
{
	CCallback * cb;
public:
	void init(CCallback * CB);
	void yourTurn();
	void heroKilled(const CHeroInstance *);
	void heroCreated(const CHeroInstance *);
	void heroMoved(const HeroMoveDetails &);
	void heroPrimarySkillChanged(const CGHeroInstance * hero, int which, int val) {};
};

#define NAME "EmptyAI 0.1"