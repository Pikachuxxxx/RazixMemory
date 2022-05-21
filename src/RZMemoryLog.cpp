#include "RZMemoryLog.h"

#include <sstream>
#include <iomanip>

namespace Razix {

    std::shared_ptr<spdlog::logger> RZMemoryLog::s_MemoryLogger;

    void RZMemoryLog::StartUp()
    {
        //--------------------------------------------------------------------------------------

        std::stringstream memLoggerName;
        memLoggerName << std::setw(18) << std::left << "\033[35mRazix Memory\033[0m";

        spdlog::set_pattern(" %n %^ [%T] :: %v %$");

        s_MemoryLogger = spdlog::stdout_color_mt(memLoggerName.str());
        s_MemoryLogger->set_level(spdlog::level::trace);
        RAZIX_MEMORY_INFO("Starting Up Razix Memory Logger");
        RAZIX_MEMORY_WARN("Starting Up Razix Memory Logger");
        RAZIX_MEMORY_TRACE("Starting Up Razix Memory Logger");
        RAZIX_MEMORY_ERROR("Starting Up Razix Memory Logger");
    }

    void RZMemoryLog::Shutdown()
    {
        RAZIX_MEMORY_ERROR("Shutting down Memory Logger");
        s_MemoryLogger.reset();
        spdlog::shutdown();
    }

}    // namespace Razix