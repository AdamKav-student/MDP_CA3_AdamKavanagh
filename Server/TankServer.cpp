#include "ProjectServerPCH.hpp"


TankServer::TankServer()
{}

void TankServer::HandleDying()
{
	NetworkManagerServer::sInstance->UnregisterGameObject(this);
}


bool TankServer::HandleCollisionWithCat(Project* inCat)
{
	//kill yourself!
	SetDoesWantToDie(true);

	ScoreBoardManager::sInstance->IncScore(inCat->GetPlayerId(), 1);

	return false;
}





