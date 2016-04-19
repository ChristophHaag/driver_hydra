find_package(Sixense REQUIRED)

add_library (driver_hydra SHARED driver_hydra.cpp pch.cpp)

include_directories("${driver_hydra_SOURCE_DIR}/drivers/driver_hydra" ${SIXENSE_INCLUDE_DIRS})

find_library(OPENVR_LIB openvr_api "${OpenVR_SOURCE_DIR}/lib/linux${ARCH}")
MESSAGE ("Found libopenvr_api: ${OPENVR_LIB}")

target_compile_features(driver_hydra PRIVATE cxx_range_for)
target_link_libraries (driver_hydra LINK_PUBLIC openvr_api ${OPENVR_LIB} dl)
