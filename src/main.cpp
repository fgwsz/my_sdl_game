#include"main.h"
#include<iostream>
#include<fstream>
#include<string>
#include<filesystem>
int main(int argc, char* argv[])
{
    // const int WIDTH=640;
    // const int HEIGHT=480;
    // SDL_Window* window=NULL;
    // SDL_Renderer* renderer=NULL;

    // SDL_Init(SDL_INIT_VIDEO);
    // window=SDL_CreateWindow("SDL2 Test",SDL_WINDOWPOS_UNDEFINED,SDL_WINDOWPOS_UNDEFINED,WIDTH,HEIGHT,SDL_WINDOW_SHOWN);
    // renderer=SDL_CreateRenderer(window,-1,SDL_RENDERER_ACCELERATED|SDL_RENDERER_PRESENTVSYNC);

    // SDL_DestroyRenderer(renderer);
    // SDL_DestroyWindow(window);
    // SDL_Quit();

    ::std::filesystem::path project_exe_path(::std::string((char*)(argv[0])));
    ::std::cout<<"project_exe_path:"<<project_exe_path.string()<<::std::endl;
    auto project_root_path = project_exe_path.parent_path();
    ::std::cout<<"project_root_path:"<<project_root_path.string()<<::std::endl;
    auto project_res_path=project_root_path/"res";
    ::std::cout<<"project_res_path:"<<project_res_path.string()<<::std::endl;

    ::std::ifstream ifs(project_res_path/"hello.txt");
    ::std::string line;
    if(ifs){
        ::std::getline(ifs,line);
        ::std::cout<<line<<::std::endl;
    }
    ifs.close();
    ::std::system("pause");

    return 0;
}
