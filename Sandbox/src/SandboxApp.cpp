#include <Abyss.h>

class Sandbox : public Abyss::Application
{
public:
	Sandbox() {

	}
	~Sandbox() {

	}
};

Abyss::Application* Abyss::CreateApplication() {
	return new Sandbox();
}