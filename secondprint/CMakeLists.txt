add_library(secondprint SHARED secondprint.c)
target_link_libraries(secondprint PUBLIC myprint)
target_include_directories(secondprint INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})