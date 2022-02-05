//
// Created by DAOCa on 05/02/2022.
//

#ifndef AMBER_LOG_H
#define AMBER_LOG_H


#include "Common.h"

#include <spdlog/spdlog.h>
#include <spdlog/sinks/stdout_color_sinks.h>
#include <spdlog/fmt/ostr.h>



namespace Amber
{

    class Log
    {

        static std::shared_ptr<spdlog::logger> s_AmberLogger;

        static std::shared_ptr<spdlog::logger> s_DevLogger;

    public:

        static void Initialize();

        inline static std::shared_ptr<spdlog::logger>& AmberLogger()
        {
            return s_AmberLogger;
        }

        inline static std::shared_ptr<spdlog::logger>& DevLogger()
        {
            return s_DevLogger;
        }

    };

}



#define AMBER_ERROR(...) ::Amber::Log::AmberLogger()->error(__VA_ARGS__)
#define AMBER_WARN(...) ::Amber::Log::AmberLogger()->warn(__VA_ARGS__)
#define AMBER_INFO(...) ::Amber::Log::AmberLogger()->info(__VA_ARGS__)
#define AMBER_TRACE(...) ::Amber::Log::AmberLogger()->trace(__VA_ARGS__)
#define AMBER_FATAL(...) ::Amber::Log::AmberLogger()->fatal(__VA_ARGS__)

#define DEV_ERROR(...) ::Amber::Log::DevLogger()->error(__VA_ARGS__)
#define DEV_WARN(...) ::Amber::Log::DevLogger()->warn(__VA_ARGS__)
#define DEV_INFO(...) ::Amber::Log::DevLogger()->info(__VA_ARGS__)
#define DEV_TRACE(...) ::Amber::Log::DevLogger()->trace(__VA_ARGS__)
#define DEV_FATAL(...) ::Amber::Log::DevLogger()->fatal(__VA_ARGS__)



#endif //AMBER_LOG_H
