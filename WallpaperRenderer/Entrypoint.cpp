#include "Loader.h"
#include "Factory.h"
#include <Windows.h>
int main() {
	Loader* loader = reinterpret_cast<Loader*>(Factory::get().createObject(Factory::ControllerType::loader, LOADERINTERFACEVERSION));
	loader->Update();
	return 1;
}
/*��������� ����- ������� �����-���������� ����� �������������, ������� 1 callback ������� � ������������. ����� ���� � ������-���������� �������� ��� ����-�������*/