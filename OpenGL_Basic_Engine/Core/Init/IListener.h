#pragma once
namespace Core{

	class IListener
	{
		public:

			virtual ~IListener() = 0;

			//drawing functions
			virtual void NotifyBeginFrame() = 0;
			virtual void NotifyDisplayFrame() = 0;
			virtual void NotifyEndFrame() = 0;
			virtual void NotifyReshape(int width,
									   int height,
									   int previous_width,
								       int previous_height) = 0;
	};

	inline IListener::~IListener()
	{
		//implementation of pure virtual destructor
	}
}