namespace StringUtility
{
	string GetCommandLineArg(int inIndex);

	string Sprintf(const char* inFormat, ...);

	void	Log(const char* inFormat);
	void	Log(const char* inFormat, ...);
}

#define LOG( ... ) StringUtility::Log( __VA_ARGS__ );
