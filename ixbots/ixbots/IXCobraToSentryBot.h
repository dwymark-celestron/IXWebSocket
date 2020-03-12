/*
 *  IXCobraToSentryBot.h
 *  Author: Benjamin Sergeant
 *  Copyright (c) 2019 Machine Zone, Inc. All rights reserved.
 */
#pragma once

#include <ixcobra/IXCobraConfig.h>
#include <string>

namespace ix
{
    int cobra_to_sentry_bot(const CobraConfig& config,
                            const std::string& channel,
                            const std::string& filter,
                            const std::string& dsn,
                            bool verbose,
                            bool strict,
                            size_t maxQueueSize,
                            bool enableHeartbeat,
                            int runtime);
} // namespace ix