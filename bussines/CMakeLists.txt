set(BUSSINES_CPP_FILES Produto.cpp Pedido.cpp Cliente.cpp 
    Malha.cpp Gola.cpp SilkScreen.cpp Transfer.cpp Camisa.cpp)

add_library(bussines STATIC ${BUSSINES_CPP_FILES} )
target_link_libraries(bussines Qt5::Core )