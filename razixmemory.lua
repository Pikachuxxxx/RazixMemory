-- Razix Engine vendor Common Inlcudes 
include 'Scripts/premake/common/vendor_includes.lua'

project "RazixMemory"
    language "C++"
    kind "StaticLib"

    files
    {
        "src/**.h",
        "src/**.c",
        "src/**.cpp",
        "include/**.h"
    }

    sysincludedirs
    {
        "./include",
        "%{IncludeDir.spdlog}"
    }

     includedirs
    {
        "./include",
        "%{IncludeDir.spdlog}"
    }

    links
    {
        "spdlog"
    }

    filter "system:windows"
        cppdialect "C++17"
        staticruntime "off"
        systemversion "latest"

    filter "configurations:Debug"
        defines { "RAZIX_DEBUG", "_DEBUG" }
        symbols "On"
        runtime "Debug"
        optimize "Off"

    filter "configurations:Release"
        defines { "RAZIX_RELEASE" }
        optimize "Speed"
        symbols "On"
        runtime "Release"

    filter "configurations:Distribution"
        defines { "RAZIX_DISTRIBUTION" }
        symbols "Off"
        optimize "Full"
