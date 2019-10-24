add_library(binutils STATIC "")
add_library(otherlib STATIC "")

# all libraries are defined at this point, so they can link each other
add_subdirectory(binutils)
add_subdirectory(otherlib)
