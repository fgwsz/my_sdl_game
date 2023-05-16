cmake_minimum_required(VERSION 3.0)
project(my_sdl_game LANGUAGES C CXX)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
aux_source_directory(src SRC_DIR)
include_directories(
    include
    ext/SDL2/include # SDL2
)
add_executable(${PROJECT_NAME} ${SRC_DIR})
# SDL2
# SDL2main.lib must be first to link
target_link_libraries(${PROJECT_NAME} ${CMAKE_CURRENT_SOURCE_DIR}/ext/SDL2/lib/SDL2main.lib)
target_link_libraries(${PROJECT_NAME} ${CMAKE_CURRENT_SOURCE_DIR}/ext/SDL2/lib/SDL2.lib)
target_link_libraries(${PROJECT_NAME} ${CMAKE_CURRENT_SOURCE_DIR}/ext/SDL2/lib/SDL2_ttf.lib)
target_link_libraries(${PROJECT_NAME} ${CMAKE_CURRENT_SOURCE_DIR}/ext/SDL2/lib/SDL2_image.lib)
target_link_libraries(${PROJECT_NAME} ${CMAKE_CURRENT_SOURCE_DIR}/ext/SDL2/lib/SDL2_mixer.lib)
