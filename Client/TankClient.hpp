class TankClient : public Tank
{
public:
	static	GameObjectPtr	StaticCreate() { return GameObjectPtr(new MouseClient()); }

protected:
	TankClient();

private:

	SpriteComponentPtr	mSpriteComponent;
};