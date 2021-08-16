#include "plusminus.h"
#include <QGridLayout>

plusminus::plusminus(QWidget *parent):QWidget(parent){
	auto *plsBtn = new QPushButton("+", this);
	auto *mnsBtn = new QPushButton("-", this);
	lbl = new QLabel("0", this);

	auto *grid = new QGridLayout(this);
	grid->addWidget(plsBtn, 0, 0);
	grid->addWidget(mnsBtn, 0, 1);
	grid->addWidget(lbl, 1, 1);

	setLayout(grid);

	connect(plsBtn, &QPushButton::clicked, this, &plusminus::OnPlus);
	connect(mnsBtn, &QPushButton::clicked, this, &plusminus::OnMinus);

}

void plusminus::OnPlus(){
	int val = lbl->text().toInt();
	val++;
	lbl->setText(QString::number(val));
}

void plusminus::OnMinus(){
	int val = lbl->text().toInt();
	val--;
	lbl->setText(QString::number(val));
}