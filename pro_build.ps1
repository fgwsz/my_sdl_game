if(Test-Path -Path build){
    rm build -Recurse
}
mkdir build
cd build
cmake -G"MinGW Makefiles" ..
cmake --build .
cd ..
./build/my_sdl_game.exe
