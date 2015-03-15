#pragma once
#include "Model.h"
namespace Rendering
{
	namespace Models
	{

		class Triangle : public Model
		{
		public:
			Triangle();
			~Triangle();

			void Create();
			virtual void Draw() override final;
			virtual void Update() override final;
		private:

		};
	}
}