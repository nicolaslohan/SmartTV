cmake_minimum_required(VERSION 3.23)
project(SmartTV)

set(CMAKE_CXX_STANDARD 14)

add_executable(SmartTV main.cpp Pessoa.h Ator.h Diretor.h Producao.cpp Producao.h Filme.h Filme.cpp Serie.cpp Serie.h App.h Streaming.cpp Streaming.h Time.cpp Time.h SmartTV.cpp SmartTV.h)
