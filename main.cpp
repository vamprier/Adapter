// Adapter.cpp : 定义控制台应用程序的入口点。
//

#include "Center.h"
#include "Forwords.h"
#include "ForeignCenter.h"
#include "Guards.h"
#include "Translater.h"

int main(int argc, char* argv[])
{
	Player* b = new Forwords("巴蒂尔");
	b->Attack();

	Player* m = new Guards("麦克格雷迪");
	m->Attack();

	Player* c = new Center("霍华德");
	c->Attack();
	c->Defence();

	Player* y = new Translater("姚明");
	y->Attack();
	y->Defence();

	cin.ignore();
	return 0;
}

