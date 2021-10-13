cmake_minimum_required(VERSION 3.8.0)
project(cmake_project)

# 执行文件输出目录
SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

# 库输出目录
SET(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

# 添加头文件位置
include_directories(${PROJECT_SOURCE_DIR}/include)

# 编译动态动态库
add_library(libmymath SHARED ${PROJECT_SOURCE_DIR}/src/add.c ${PROJECT_SOURCE_DIR}/src/sub.c)

# 动态库项目目录
link_directories(${PROJECT_SOURCE_DIR}/lib)
# 动态库名称
link_libraries(libmymath)

# 编译执行文件
add_executable(main ${PROJECT_SOURCE_DIR}/src/main.c)
