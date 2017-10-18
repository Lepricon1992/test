#include <windows.h>

//Function Definition
void foo(void) {

	char *Foo = "This is the first thing we printed. \r\n";
	OutputDebugString(
		"This is the first thing we printed. \r\n");
	
	
}

int WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
	int a;
	a = 5;
	a = 5 + a;
	
	
	foo();

}