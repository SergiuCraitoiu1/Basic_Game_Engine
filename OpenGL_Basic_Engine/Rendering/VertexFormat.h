#pragma once
#include "glm\glm.hpp"

namespace Rendering
{
	struct VertexFormat
	{

		glm::vec4 position;
		glm::vec4 color;
	
		VertexFormat(const glm::vec4 &iPos, const glm::vec4 &iColor)
		{
			position = iPos;
			color    = iColor;
		}
		VertexFormat()
		{

		}

	};
}
