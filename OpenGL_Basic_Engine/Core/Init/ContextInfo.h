namespace Core
{
	//OpenGL versions
	struct ContextInfo
	{
		int major_version, minor_version;
		bool core;

		ContextInfo()
		{
			major_version = 3;
			minor_version = 3;
			core = true;
		}

		ContextInfo(int major_version, int minor_version, bool core)
		{
			this->major_version = major_version;
			this->minor_version = minor_version;
			this->core = core;
		}

		void operator= (const ContextInfo &info)
		{
			major_version = info.major_version;
			minor_version = info.minor_version;
			core = info.core;
		}
	};
}