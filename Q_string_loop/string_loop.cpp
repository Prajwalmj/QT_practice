#include<QTextStream>

int main(){
	QTextStream out(stdout);

	QString s1("There are many stars");

	for(QChar qc:s1){
		out << qc << " "; 
	}

	out << endl;

	for(QChar *it=s1.begin(); it!=s1.end(); ++it){
		out<< *it << " "; 
	}

	out << endl;
	for(int i=0; i<s1.size(); i++){
		out<< s1.at(i) << " "; 
	}

	out << endl;

	return 0;
}