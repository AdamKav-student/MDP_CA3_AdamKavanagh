#include "ProjectClientPCH.hpp"

TankClient::TankClient()
{
	mSpriteComponent.reset(new SpriteComponent(this));
	mSpriteComponent->SetTexture(TextureManager::sInstance->GetTexture("mouse"));
} 