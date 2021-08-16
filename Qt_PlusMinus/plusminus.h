#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLabel>

class plusminus : public QWidget{
	Q_OBJECT

	public:
		plusminus(QWidget *parent = nullptr);

	private slots:
		void OnPlus();
		void OnMinus();

	private:
		QLabel *lbl;
};