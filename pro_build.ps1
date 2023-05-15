if(Test-Path -Path build){}else{
    mkdir build
}
cd build
cmake -G"MinGW Makefiles" ..
cmake --build .
cd ..
cp ext/SDL2/dll/*.dll build/
./build/my_sdl_game.exe
