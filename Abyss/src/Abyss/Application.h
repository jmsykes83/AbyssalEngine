#pragma once

#include "Core.h"

namespace Abyss 
{
	class ABYSS_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};
	Application* CreateApplication();
}

