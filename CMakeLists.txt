cmake_minimum_required(VERSION 3.5)
project(dna_profiler VERSION 0.1 LANGUAGES CXX )


### Executável
# Diretório contendo os .hpp
include_directories( include )

add_executable( dna_profiler
                src/bancodedados.cpp
                src/processador.cpp
                src/interface.cpp
                src/sequencia.cpp
                src/dna.cpp
                src/dna_profiler.cpp)

# The end