cmake_minimum_required(VERSION 3.10)
project(Livraria)

set(CMAKE_CXX_STANDARD 11)

include_directories(.)

add_executable(Livraria
        audiobook.cpp
        audiobook.h
        ebook.cpp
        ebook.h
        impresso.cpp
        impresso.h
        livro.cpp
        livro.h
        main.cpp)
