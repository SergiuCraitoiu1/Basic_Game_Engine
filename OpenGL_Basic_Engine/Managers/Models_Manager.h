#pragma once
#include <unordered_map>
#include "Shader_Manager.h"
#include "../Rendering/IGameObject.h"
#include "../Rendering/Models/Triangle.h"
#include "../Rendering/Models/Quad.h"

using namespace Rendering;

namespace Managers
{
	class Models_Manager
	{
	public:
		Models_Manager();
		~Models_Manager();

		void Draw();
		void Update();
		void DeleteModel(const std::string& gameModelName);
		const IGameObject& GetModel(const std::string& gameModelName) const;

	private:
		std::map<std::string, IGameObject*> gameModelList;
		
	};
}
