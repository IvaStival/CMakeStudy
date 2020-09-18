add_library(Math mysqrt.cpp)

target_include_directories(Math INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})

install(TARGETS Math DESTINATION lib)
install(FILES Math.h DESTINATION include)


