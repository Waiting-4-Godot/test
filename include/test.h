#ifndef TEST_TEST_H
#define TEST_TEST_H

#include <godot_cpp/classes/sprite2d.hpp>

using namespace godot;

class Test: public godot::Sprite2D {
	GDCLASS(Test, Sprite2D)
protected:
	static void _bind_methods();
	void _notification(int p_what);

public:
	void hello();
};

#endif //TEST_TEST_H
