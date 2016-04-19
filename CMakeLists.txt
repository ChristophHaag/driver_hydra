cmake_minimum_required (VERSION 2.8.11)
project (driver_hydra)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${driver_hydra_SOURCE_DIR}/cmake")

#TODO:
set(SIXENSE_SEARCH_DIRS "~/sixenseSDK_linux_OSX" CACHE FILEPATH "Sixense SDK path")

add_subdirectory (drivers/driver_hydra)
#add_subdirectory (tools/hydra_monitor)
