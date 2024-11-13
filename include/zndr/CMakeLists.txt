target_sources(
    zunder
    PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/zndrinfo.h
    ${CMAKE_CURRENT_LIST_DIR}/zunder.h
)

add_subdirectory(component)
add_subdirectory(data)
add_subdirectory(entity)
add_subdirectory(system)
