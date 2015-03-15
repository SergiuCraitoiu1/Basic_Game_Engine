#pragma once
#include "Core\Init\Init_GLUT.h"
#include "Managers\Scene_Manager.h"

using namespace Core;
using namespace Init;
int main(int argc, char **argv) 
{

	WindowInfo window(std::string("in2gpu OpenGL Beginner Tutorial"), 400, 200, 800, 600, true);
	ContextInfo context(4, 5, true);
	FramebufferInfo frameBufferInfo(true, true, true, true);

	Init::Init_GLUT::Init(window, context, frameBufferInfo);

	IListener* scene = new Managers::Scene_Manager();
	Init::Init_GLUT::SetListener(scene);

	Init::Init_GLUT::Run();

	delete scene;
	return 0;
}
