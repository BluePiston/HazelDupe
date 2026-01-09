#pragma once

#ifdef HZD_PLATFORM_WINDOWS

extern HazelDupe::Application* HazelDupe::CreateApplication();

int main(int argc, char** argv) {
	auto app = HazelDupe::CreateApplication();
	app->Run();
	delete app;
}

#endif