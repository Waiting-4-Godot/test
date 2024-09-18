#include <test.h>
#include <godot_cpp/variant/utility_functions.hpp>

void Test::_notification(int p_what) {
	switch ( p_what ) {
	case NOTIFICATION_ENTER_TREE:
		UtilityFunctions::print(L"中秋快乐");
	}
}

 void Test::_bind_methods() {
	ClassDB::bind_method(D_METHOD("hello"), &Test::hello);
}

void Test::hello() {
	UtilityFunctions::print("hello world");
}