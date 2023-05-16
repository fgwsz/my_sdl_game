#include"main.h"
#include<iostream>
#include<fstream>
#include<string>
#include<filesystem>
#include"noncopyable.h"
#include"singleton.hpp"
#include"project_path.h"
class SDL final:public Singleton<SDL>{
friend class Singleton<SDL>;
private:
    SDL(){
        ::std::cout<<"SDL Init!"<<::std::endl;
        SDL_Init(SDL_INIT_EVERYTHING);
    }
public:
    ~SDL(){
        ::std::cout<<"SDL Quit!"<<::std::endl;
        SDL_Quit();
    }
    int exec(int argc,char* argv[]);
};
int main(int argc, char* argv[]){
    project_exe_path=::std::filesystem::path(::std::string((char*)(argv[0])));
    project_root_path=project_exe_path.parent_path();
    project_res_path=project_root_path/"res";
    return SDL::getInstance().exec(argc,argv);
}
int SDL::exec(int argc, char* argv[])
{
    const int WIDTH=640;
    const int HEIGHT=480;
    SDL_Window* window=NULL;
    SDL_Renderer* renderer=NULL;

    window=SDL_CreateWindow("SDL2 Test",SDL_WINDOWPOS_UNDEFINED,SDL_WINDOWPOS_UNDEFINED,WIDTH,HEIGHT,SDL_WINDOW_SHOWN);
    renderer=SDL_CreateRenderer(window,-1,SDL_RENDERER_ACCELERATED|SDL_RENDERER_PRESENTVSYNC);

    ::std::ifstream ifs(project_res_path/"data.txt");
    ::std::string line;
    while(ifs){
        ::std::getline(ifs,line);
        ::std::cout<<line<<::std::endl;
    }
    ifs.close();
    ::std::system("pause");

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    return 0;
}
