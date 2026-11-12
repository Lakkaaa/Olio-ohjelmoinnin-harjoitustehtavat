cmake_minimum_required(VERSION 3.16)

project(H3T2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(H3T2 main.cpp
    person.h person.cpp

    teacher.h teacher.cpp
    student.h student.cpp)

include(GNUInstallDirs)
install(TARGETS H3T2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
