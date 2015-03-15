//GlutInit.h
#pragma once
#include "ContextInfo.h"
#include "FrameBufferInfo.h"
#include "WindowInfo.h"
#include <iostream>
#include "Init_GLEW.h"
#include "IListener.h"

namespace Core 
{
	namespace Init
	{
		class Init_GLUT
		{
						
		public:
			static void Init(const Core::WindowInfo& window,
							const Core::ContextInfo& context,
							const Core::FramebufferInfo& framebufferInfo);
						
		public:
			static void Run(void);
			static void Close();
			void EnterFullscreen();
			void ExitFullscreen();
			static void PrintOpenGLInfo(const Core::WindowInfo& windowInfo,
				                        const Core::ContextInfo& context);
		private:
			static void IdleCallback(void);
			static void DisplayCallback(void);
			static void ReshapeCallback(int width, int height);
			static void CloseCallback();

		private:
			static Core::IListener* listener;
			static Core::WindowInfo windowInformation;
		public:
			static void SetListener(Core::IListener*& iListener);
				
			
		};

	}

}


