cmake_minimum_required(VERSION 3.23)
project(SmartTV)

set(CMAKE_CXX_STANDARD 14)

add_executable(SmartTV main.cpp App.h Pessoa.h Ator.h Diretor.h Producao.cpp Producao.h Filme.cpp Filme.h Serie.cpp Serie.h Streaming.cpp Streaming.h)
