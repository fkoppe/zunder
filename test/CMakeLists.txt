macro(zndr_test_add filename)
   add_executable(${filename} ${filename}.c)
   target_link_libraries(${filename} PRIVATE zunder)
   add_test(NAME "zndr_${filename}" COMMAND $<TARGET_FILE:${filename}>)
endmacro(zndr_test_add)

#-----

#-----
