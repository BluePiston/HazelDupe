#pragma once

#include "Core.h"

namespace HazelDupe {
	class HAZELDUPE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//to be defined in client
	Application* CreateApplication();

}