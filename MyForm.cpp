/*
 *
 *  ██████╗░░░░██████╗░
 *  ██╔══██╗░░░██╔══██╗
 *  ██████╦╝░░░██████╦╝
 *  ██╔══██╗░░░██╔══██╗
 *  ██████╦╝██╗██████╦╝
 *  ╚═════╝░╚═╝╚═════╝░
 *
 * IP_MASK 2.0
 * MyForm.cpp
 * BlankBuffoon
 *
 * Programmer: aterepin@yandex.ru
 *
 * Build: 15:05:2021
 * Testing: 15:05:2021
*/

#include "MyForm.h"
#include <Windows.h>
#include <cstring>


using namespace ipmaskvisual; // Название проекта
using namespace std;

// Инициализация формы
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}

