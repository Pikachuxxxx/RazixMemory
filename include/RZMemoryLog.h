#pragma once

#pragma warning(disable : 26812)
#include <spdlog/fmt/ostr.h>
#include <spdlog/sinks/stdout_color_sinks.h>
#include <spdlog/spdlog.h>

#include <memory>

namespace Razix {
    /** 
        * The Engine wide Logging system
        * @birief Used for various Engine and Client sub-systems to report statuses, errors and other information
        */
    class RZMemoryLog
    {
    public:
        /* Starts Up the Logging system */
        static void StartUp();
        /* Shuts down the Logging system */
        static void Shutdown();

        static std::shared_ptr<spdlog::logger>& GetMemoryLogger() { return s_MemoryLogger; }

    private:
        static std::shared_ptr<spdlog::logger> s_MemoryLogger;
    };
}    // namespace Razix

// Strip out the logging system in the distribution build
#ifndef RAZIX_DISTRIBUTION

    // Memory Logging
    #define RAZIX_MEMORY_TRACE(...) ::Razix::RZMemoryLog::GetMemoryLogger()->trace(__VA_ARGS__)
    #define RAZIX_MEMORY_INFO(...)  ::Razix::RZMemoryLog::GetMemoryLogger()->info(__VA_ARGS__)
    #define RAZIX_MEMORY_WARN(...)  ::Razix::RZMemoryLog::GetMemoryLogger()->warn(__VA_ARGS__)
    #define RAZIX_MEMORY_ERROR(...) ::Razix::RZMemoryLog::GetMemoryLogger()->error(__VA_ARGS__)
#else
    // Memory Logging
    #define RAZIX_MEMORY_TRACE(...)
    #define RAZIX_MEMORY_INFO(...) 
    #define RAZIX_MEMORY_WARN(...) 
    #define RAZIX_MEMORY_ERROR(...)
#endif