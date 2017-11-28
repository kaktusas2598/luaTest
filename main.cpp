#include "selene.h"

using namespace sel;

int main() {

	State state; // creates a Lua context


	while(1) {
		state.Load("test.lua");

		auto bar3 = state["int_test"]; // int_test has type sel::Selector

		std::cout << "Number is: "<< int(bar3) << std::endl;
	}
	return 0;
}
