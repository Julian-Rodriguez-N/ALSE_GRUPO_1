cmake_minimum_required( VERSION 3.1 )
project( Meteo_Proyecto )

find_package(Qt5Core CONFIG REQUIRED)
find_package(Qt5Widgets CONFIG REQUIRED)

INCLUDE_DIRECTORIES(${Qt5Widgets_INCLUDE_DIRS} ${Qt5Core_INCLUDE_DIRS} )

set( CMAKE_AUTOMOC ON )
set( CMAKE_AUTOUIC ON )

add_executable( ${PROJECT_NAME} main.cpp meteoeci_gui.cpp meteoeci_gui.h meteoeci_gui.ui sensor.h sensor.cpp db_local.h db_local.cpp registro.h registro.cpp registro.ui)
target_link_libraries ( ${PROJECT_NAME} Qt5::Core Qt5::Widgets sqlite3 )
