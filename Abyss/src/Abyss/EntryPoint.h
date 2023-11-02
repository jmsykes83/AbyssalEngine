#pragma once

#ifdef AB_PLATFORM_WINDOWS

extern Abyss::Application* Abyss::CreateApplication();

int main(int argc, char** argv) 
{
	printf("Entering Abyss!!!\n");
	auto app = Abyss::CreateApplication();
	app->Run();

	delete app;
}

#endif