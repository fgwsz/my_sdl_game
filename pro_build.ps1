if(Test-Path -Path build){}else{
    mkdir build
}
cd build
if(Test-Path -Path res){}else{
    mkdir res
}
cmake -G"MinGW Makefiles" ..
cmake --build .
cd ..
cp ext/SDL2/dll/*.dll build/
cp res/* build/res/
./build/my_sdl_game.exe
