#include <iostream>
#include <Windows.h>

int main() {
	short keyState;
	for (;;) {
		//keyState = GetAsyncKeyState(VK_LSHIFT);
		if (GetAsyncKeyState(VK_LSHIFT) && GetAsyncKeyState(VK_CONTROL)) {
			mouse_event(MOUSEEVENTF_LEFTDOWN, 0x0, 0x0, 0x1, NULL);
			std::cout << "down" << std::endl;
			mouse_event(MOUSEEVENTF_LEFTUP, 0x0, 0x0, 0x1, NULL);
			std::cout << "up" << std::endl;
			Sleep(1000);
		}
		//std::cout << std::hex << (GetAsyncKeyState(VK_LSHIFT) && GetAsyncKeyState(VK_CONTROL)) << std::endl << std::endl;
		Sleep(200);
	}
	return 0;
}