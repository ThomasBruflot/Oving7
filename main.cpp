
#include "std_lib_facilities.h"
#include "Test.h"
#include "Face.h"
#include "Emoji.h"
#include "Graph.h"
#include "Simple_window.h"


//1a - Teori
//Private: Man kan ikke få tilgang til medlemmer utenfor klassen
//Public: Medlemmer er tilgjengelig utenfor klassen
//Protected: Medlemmer kan ikke aksesseres utenfor klassen, men kan i arvede klasser.
int main()
{
	//testSmile();
	//testSad();
	testAngry();
	testWink();
	testSurprise();
	keep_window_open();
}
