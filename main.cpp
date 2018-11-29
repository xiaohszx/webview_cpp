#include <iostream>
#include <algorithm>
#define WEBVIEW_WINAPI
#define WEBVIEW_IMPLEMENTATION
#include "webview.hpp"
void* get_ptr(std::size_t size)
{
	return malloc(size * sizeof(char));
}
void use(void* ptr)
{

}
int WINAPI WinMain(HINSTANCE hInt, HINSTANCE hPrevInst, LPSTR lpCmdLine,
	int nCmdShow) 
{
	//webview("Minimal webview example",
	//	"https://www.baidu.com", 800, 600, 1);
	webUI ui("test","http://192.168.0.13:62543/",800,600,false);
	ui.eval_js("test_js()");
	ui.run();
	KEEP_RUN()
	std::cin.get();
	return 0;
}
//int main()
//{
//	//auto ptr = get_ptr(1024 * 1024 * 1024);
//	//char* beg = (char*)ptr;
//	//std::for_each(beg, beg+ (1024 * 1024 * 1024-1),[](char& iter) {
//	//	iter = '1';
//	//});
//	std::cin.get();
//	//free(ptr);
//	return 0;
//}