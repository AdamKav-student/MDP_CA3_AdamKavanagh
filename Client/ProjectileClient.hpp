class ProjectileClient : public Projectile
{
public:
	static	GameObjectPtr	StaticCreate() { return GameObjectPtr(new YarnClient()); }

	virtual void		Read(InputMemoryBitStream& inInputStream) override;

protected:
	ProjectileClient();

private:

	SpriteComponentPtr	mSpriteComponent;
};