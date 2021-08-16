#include "plusminus.h"

int main(int argc, char *argv[]){
	QApplication app(argc, argv);

	plusminus Window;

	Window.resize(300, 190);
	Window.setWindowTitle("Plus Minus");
	Window.show();


	return app.exec();
}