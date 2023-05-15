cmake_minimum_required(VERSION 3.0)
project(my_sdl_game LANGUAGES C CXX)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 14)
aux_source_directory(src SRC_DIR)
include_directories(include ext/SDL2/include)
add_executable(${PROJECT_NAME} ${SRC_DIR})
# SDL2
target_link_libraries(${PROJECT_NAME} ${CMAKE_CURRENT_SOURCE_DIR}/ext/SDL2/lib/SDL2main.lib)
target_link_libraries(${PROJECT_NAME} ${CMAKE_CURRENT_SOURCE_DIR}/ext/SDL2/lib/SDL2.lib)
target_link_libraries(${PROJECT_NAME} ${CMAKE_CURRENT_SOURCE_DIR}/ext/SDL2/dll/SDL2.dll)
# SDL2_ttf
target_link_libraries(${PROJECT_NAME} ${CMAKE_CURRENT_SOURCE_DIR}/ext/SDL2/lib/SDL2_ttf.lib)
target_link_libraries(${PROJECT_NAME} ${CMAKE_CURRENT_SOURCE_DIR}/ext/SDL2/dll/SDL2_ttf.dll)
# SDL2_image
target_link_libraries(${PROJECT_NAME} ${CMAKE_CURRENT_SOURCE_DIR}/ext/SDL2/lib/SDL2_image.lib)
target_link_libraries(${PROJECT_NAME} ${CMAKE_CURRENT_SOURCE_DIR}/ext/SDL2/dll/libtiff-5.dll)
target_link_libraries(${PROJECT_NAME} ${CMAKE_CURRENT_SOURCE_DIR}/ext/SDL2/dll/libwebp-7.dll)
target_link_libraries(${PROJECT_NAME} ${CMAKE_CURRENT_SOURCE_DIR}/ext/SDL2/dll/SDL2_image.dll)
# SDL2_mixer
target_link_libraries(${PROJECT_NAME} ${CMAKE_CURRENT_SOURCE_DIR}/ext/SDL2/lib/SDL2_mixer.lib)
target_link_libraries(${PROJECT_NAME} ${CMAKE_CURRENT_SOURCE_DIR}/ext/SDL2/dll/libmodplug-1.dll)
target_link_libraries(${PROJECT_NAME} ${CMAKE_CURRENT_SOURCE_DIR}/ext/SDL2/dll/libogg-0.dll)
target_link_libraries(${PROJECT_NAME} ${CMAKE_CURRENT_SOURCE_DIR}/ext/SDL2/dll/libopus-0.dll)
target_link_libraries(${PROJECT_NAME} ${CMAKE_CURRENT_SOURCE_DIR}/ext/SDL2/dll/libopusfile-0.dll)
target_link_libraries(${PROJECT_NAME} ${CMAKE_CURRENT_SOURCE_DIR}/ext/SDL2/dll/SDL2_mixer.dll)
# SDL2 or SFML is a problem
