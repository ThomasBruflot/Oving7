#include "Test.h"
#include "Graph.h"
#include "Simple_window.h"
#include "Face.h"
#include "Emoji.h"

void testAnimal() {
    Cat cat("catTest", 2);
    Dog dog("dogTest", 7);
    Dog &d = dog;
    Cat &c = cat;
    cout << d.toString() << "\n";
    cout << c.toString() << "\n";

    Vector_ref<Animal> vec;
    vec.push_back(cat);
    vec.push_back(dog); 
    for (int i = 0; i < vec.size(); i++)
    {
        vec[i].toString();
    }
    
}
void testSmile() {
    using namespace Graph_lib;
	const Point t {100, 100};
	Simple_window win {t, 800, 600, "Emoji"};
	Point faceP{333, 200};
	int radius = 50;
	SmilingFace smiley(faceP,radius); 
	smiley.attach_to(win);
    win.wait_for_button();
}

void testSad() {
    using namespace Graph_lib;
	const Point t {100, 100};
	Simple_window win {t, 800, 600, "Emoji"};
	Point faceP{333, 200};
	int radius = 50;
	SadFace smiley(faceP,radius); 
	smiley.attach_to(win);
    win.wait_for_button();
}

void testAngry() {
    using namespace Graph_lib;
	const Point t {100, 100};
	Simple_window win {t, 800, 600, "Emoji"};
	Point faceP{333, 200};
	int radius = 50;
	AngryFace smiley(faceP,radius); 
	smiley.attach_to(win);
    win.wait_for_button();
}

void testWink() {
    using namespace Graph_lib;
	const Point t {100, 100};
	Simple_window win {t, 800, 600, "Emoji"};
	Point faceP{333, 200};
	int radius = 50;
	WinkingFace smiley(faceP,radius); 
	smiley.attach_to(win);
    win.wait_for_button();
}
void testSurprise() {
	using namespace Graph_lib;
	const Point t {100, 100};
	Simple_window win {t, 800, 600, "Emoji"};
	Point faceP{333, 200};
	int radius = 50;
	SurprisedFace smiley(faceP,radius); 
	smiley.attach_to(win);
    win.wait_for_button();
}