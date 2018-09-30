//#include "lib.h"
#include <iostream>
#include <string>
#include <string_view>
#include <spdlog/sinks/stdout_sinks.h>

int main(int argc, char *argv[])
{
    auto logger = spdlog::stdout_logger_mt("console");
    if (argc > 1) {
        int isVersionRequired = std::string(argv[1]).compare(std::string_view("-v")) == 0;
	if (isVersionRequired) {
	    logger->info("version {} was started", 12);
	}
    } else {
	logger->info("Hello, world\n");
    }
    return 0;
}
