#include "HazelDupe.h"

class Sandbox : public HazelDupe::Application {
public:
	Sandbox() {

	}
	~Sandbox() {

	}

};

HazelDupe::Application* HazelDupe::CreateApplication() {
	return new Sandbox();
}