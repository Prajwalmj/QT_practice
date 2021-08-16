#include "another_menu.h"


int main(int argc, char *argv[]){
	QApplication app(argc, argv);

	AnotherMenu window;

	window.resize(350, 250);
	window.setWindowTitle("another_menu");
	window.show();

	return app.exec();
}
