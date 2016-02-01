cmake_minimum_required( VERSION 2.6 )
project( ProtoAlpha )

set( CMAKE_AUTOMOC ON )

set( AUTOMOC_TARGETS_FOLDER ${CMAKE_BINARY_DIR}/gen/cpp )

set( SRC

    src/alpha/Main.cpp
    src/alpha/internal/qt/Window.cpp
)

set( CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/build/linux_x86 )

set( BASEPATH "${CMAKE_SOURCE_DIR}" )

set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -std=c++0x" )


include_directories(
        ${INCLUDE_DIRECTORIES}
        ${CMAKE_BINARY_DIR}/ext/ChaosCore/include/
        src/
)

find_package( Qt5Core REQUIRED )
find_package( Qt5Gui REQUIRED )
find_package( Qt5Widgets REQUIRED )

link_directories(
        ${LINK_DIRECTORIES}
        ${CMAKE_BINARY_DIR}/ext/ChaosCore/lib
)


add_executable( ProtoAlpha ${SRC} )


target_link_libraries( ProtoAlpha
    chaoscore_base
    chaoscore_gfx
    Qt5::Core
    Qt5::Gui
    Qt5::Widgets
)

