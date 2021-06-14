#include "Emoji.h"
#include "std_lib_facilities.h"

class Face : Emoji {
private: 
    Circle circle;
public:
    Face(Point c, int r) : circle{c, r}{
        circle.set_fill_color(Color::yellow);
    };
    virtual void attach_to(Graph_lib::Window& win) override = 0;
};

class EmptyFace : Face {
private:
    Circle rightEye;
    Circle leftEye;
public:
    EmptyFace(Point c, int r) : Face{c,r}, rightEye{{c.x+(r/2),c.y+(r/2)-40}, 5}, leftEye{{c.x-(r/2),c.y+(r/2)-40}, 5} {
        leftEye.set_fill_color(Color::black);
        rightEye.set_fill_color(Color::black);
    };
    void attach_to(Graph_lib::Window& win) {
        Face::attach_to(win);
        win.attach(leftEye);
        win.attach(rightEye);
    }

};

class SmilingFace : EmptyFace {
private:
    Arc arc;
public:
    SmilingFace(Point c, int r) : EmptyFace{c,r}, arc{{333,210}, 30, 20,  180, 0} {}
    void attach_to(Graph_lib::Window& win) {
        EmptyFace::attach_to(win);
        win.attach(arc);
    }  
};

class SadFace : EmptyFace {
private:
    Arc arc;
public:
    SadFace(Point c, int r) : EmptyFace{c,r}, arc{{333,210}, 30, 20,  0, 180} {}
    void attach_to(Graph_lib::Window& win) {
        EmptyFace::attach_to(win);
        win.attach(arc);
    }  
};

class AngryFace : EmptyFace {
private:
    Arc arc;
    Arc leftEyebrow;
    Arc rightEyebrow;
public:
    AngryFace(Point c, int r) : EmptyFace{c,r}, arc{{333,210}, 30, 20,  0, 180}, 
    leftEyebrow{{333-(r/2),170}, 30, 20,  0, 90}, 
    rightEyebrow{{333+(r/2),170}, 30, 20,  90, 180} {}
    void attach_to(Graph_lib::Window& win) {
        EmptyFace::attach_to(win);
        win.attach(arc);
        win.attach(leftEyebrow);
        win.attach(rightEyebrow);
    }  
};

class WinkingFace : Face {
private:
    Arc arc;
    Arc rightEye;
    Circle leftEye;
public:
    WinkingFace(Point c, int r) : Face{c,r}, leftEye{{c.x-(r/2),c.y+(r/2)-40}, 5}, arc{{333,210}, 30, 20,  180, 0},
    rightEye{{333+30,190}, 30, 20,  45, 180} {
        leftEye.set_fill_color(Color::black);
    }
    void attach_to(Graph_lib::Window& win) {
        Face::attach_to(win);
        win.attach(arc);
        win.attach(leftEye);
        win.attach(rightEye);
    }  
};

class SurprisedFace : EmptyFace {
private:
    Arc arc;
public:
    SurprisedFace(Point c, int r) : EmptyFace{c,r}, arc{{333,210}, 30, 20,  0, 359} {}
    void attach_to(Graph_lib::Window& win) {
        EmptyFace::attach_to(win);
        win.attach(arc);
    }  
};
