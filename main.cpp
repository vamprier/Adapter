// Adapter.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "Center.h"
#include "Forwords.h"
#include "ForeignCenter.h"
#include "Guards.h"
#include "Translater.h"

int main(int argc, char* argv[])
{
	Player* b = new Forwords("�͵ٶ�");
	b->Attack();

	Player* m = new Guards("��˸��׵�");
	m->Attack();

	Player* c = new Center("������");
	c->Attack();
	c->Defence();

	Player* y = new Translater("Ҧ��");
	y->Attack();
	y->Defence();

	cin.ignore();
	return 0;
}

