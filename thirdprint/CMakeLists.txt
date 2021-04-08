add_library(thirdprint SHARED thirdprint.c)
target_link_libraries(thirdprint PUBLIC myprint)
target_include_directories(thirdprint
        PRIVATE ../aux_thirdprint
        INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})