#include <iostream>
#include <Windows.h>

int main() {
	for (;;) {
		if (GetAsyncKeyState(VK_LSHIFT) && GetAsyncKeyState(VK_CONTROL)) {
			mouse_event(MOUSEEVENTF_LEFTDOWN, 0x0, 0x0, 0x1, NULL);
			std::cout << "down" << std::endl;
			mouse_event(MOUSEEVENTF_LEFTUP, 0x0, 0x0, 0x1, NULL);
			std::cout << "up" << std::endl;
			Sleep(1000);
		}
		Sleep(200);
	}
	return 0;
}