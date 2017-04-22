#include "Mst.h"
Mst::Mst(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

void Mst::btnOkClick()
{
	//获取输入并构建图
	QString strInput = ui.textEdit_input->toPlainText().trimmed();
	vector<Edge> v;
	QStringList strlist = strInput.split("\n");
	for (int i = 0; i < strlist.length(); i++)
	{
		QStringList list = strlist[i].split(" ");
		v.push_back(Edge(list[0].toInt(), list[1].toInt(), list[2].toInt()));
	}

	//输出图
	Graph* graph = new Graph(v);
	graph->show(ui.label_graph);

	//释放内存
	delete graph;
}

void Mst::btnKrusalClick()
{
	//获取输入并构建图
	QString strInput = ui.textEdit_input->toPlainText().trimmed();
	vector<Edge> v;
	QStringList strlist = strInput.split("\n");
	for (int i = 0; i < strlist.length(); i++)
	{
		QStringList list = strlist[i].split(" ");
		v.push_back(Edge(list[0].toInt(), list[1].toInt(), list[2].toInt()));
	}

	//计算并输出
	Graph* graph = new Graph(v);
	graph->show(ui.label_graph);
	Graph* result = graph->getMst_Kruskal();
	result->show(ui.label_result);
	ui.textEdit_result->setText(result->toString());
	ui.label_sum->setText("Mst: " + QString::number(result->getSum(), 10) + "(Kruskal)");

	//释放内存
	delete result;
	delete graph;
}

void Mst::btnPrimClick()
{

	//获取输入并构建图
	QString strInput = ui.textEdit_input->toPlainText().trimmed();
	vector<Edge> v;
	QStringList strlist = strInput.split("\n");
	for (int i = 0; i < strlist.length(); i++)
	{
		QStringList list = strlist[i].split(" ");
		v.push_back(Edge(list[0].toInt(), list[1].toInt(), list[2].toInt()));
	}

	//计算并输出
	Graph* graph = new Graph(v);
	graph->show(ui.label_graph);
	Graph* result = graph->getMst_Prim();
	result->show(ui.label_result);
	ui.textEdit_result->setText(result->toString());
	ui.label_sum->setText("Mst: " + QString::number(result->getSum(), 10)+"(Prim)");

	//释放内存
	delete result;
	delete graph;
}


void Mst::btnRandClick()
{
	ui.textEdit_input->setText("1 3 3\n1 15 7\n1 4 2\n3 15 5\n4 2 1\n4 10 3\n2 9 2\n2 6 8\n10 6 7\n5 11 3\n6 7 4\n7 12 3\n12 14 5\n2 13 5\n9 8 6\n5 8 4\n8 12 3\n9 13 1");
}
void Mst::btnSaveClick()
{

	QString fileName = QFileDialog::getSaveFileName(this,
		tr("Load from file"),
		"",
		tr("txt (*.txt)"));

	if (!fileName.isNull())
	{
		ofstream file;
		file.open(fileName.toStdString(), ios::out);
		file << ui.textEdit_input->toPlainText().toStdString();
		file.close();
		QMessageBox::information(this, "notice", "Save!");
	}

}
void Mst::btnLoadClick()
{
	QString file_name = QFileDialog::getOpenFileName(this,
		tr("Sava file"),
		"",
		tr("txt (*.txt)"),
		0);
	if (!file_name.isNull())
	{
		fstream  file;
		file.open(file_name.toStdString(), ios::in);
		char tmp[100];
		QString qstr;
		while (file.getline(tmp, 100))
			qstr.append(tmp).append("\n");
		ui.textEdit_input->setText(qstr);
		file.close();
	}

}