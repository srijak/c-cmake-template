add_subdirectory(shelf)

#--- executable
file(GLOB SRC_SOURCES ./ *.c *.h)
add_executable(peaches ${SRC_SOURCES})

target_link_libraries(peaches shelf)

