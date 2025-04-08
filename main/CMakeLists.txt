# See the build system documentation in IDF programming guide
# for more information about component CMakeLists.txt files.

set(component_srcs 
    "main.c"
    "../app_modules/application/syssm/src/syssm.c"
    "../app_modules/device_drivers/ir_switch/src/ir_switch.c"
    "../app_modules/infrastructure/lib/services/src/extended_services.c"
)


idf_component_register(
    SRCS "${component_srcs}"         # list the source files of this component
	INCLUDE_DIRS "../app_modules/application/syssm/inc"
	             "../app_modules/device_drivers/ir_switch/inc"
	             "../app_modules/infrastructure/config/inc"
	             "../app_modules/infrastructure/lib/services/inc"
    PRIV_INCLUDE_DIRS   # optional, add here private include directories
    REQUIRES            # optional, list the public requirements (component names)
    PRIV_REQUIRES       # optional, list the private requirements
)


