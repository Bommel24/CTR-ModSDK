#include <common.h>

void DECOMP_RB_Potion_PerFrame_InAir(struct Thread* t)
{
	struct GameTracker* gGT;
	struct Instance* inst;
	struct MineWeapon* mw;
	
	gGT = sdata.gGT;
	inst = t->inst;
	mw = t->object;
	
	inst->matrix.t[0] += mw->velocity[0] * (gGT->elapsedTimeMS >> 5)
	inst->matrix.t[1] += mw->velocity[1] * (gGT->elapsedTimeMS >> 5)
	inst->matrix.t[2] += mw->velocity[2] * (gGT->elapsedTimeMS >> 5)
}