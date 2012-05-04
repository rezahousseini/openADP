cmake_minimum_required(VERSION 2.6)
project(openADP)

# The version number.
set(openADP_VERSION_MAJOR 0)
set(openADP_VERSION_MINOR 0)

include_directories(
"${PROJECT_SOURCE_DIR}/src/abstract"
"${PROJECT_SOURCE_DIR}/src/interface/octave"
"${PROJECT_SOURCE_DIR}/src/model"
"${PROJECT_SOURCE_DIR}/src/optimizer"
"${PROJECT_SOURCE_DIR}/src/parameter"
"${PROJECT_SOURCE_DIR}/src/simulator"
"${PROJECT_SOURCE_DIR}/src/solver"
"${PROJECT_SOURCE_DIR}/src/stepsize"
"${PROJECT_SOURCE_DIR}/src/utilities"
"${PROJECT_SOURCE_DIR}/src/valuefunction"
)

add_subdirectory(src)

add_executable(openadp openadp.cpp)
target_link_libraries(openadp model optimizer parameter simulator solver stepsize valuefunction octave abstract)
