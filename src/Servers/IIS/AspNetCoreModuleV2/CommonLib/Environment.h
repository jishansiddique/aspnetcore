// Copyright (c) .NET Foundation. All rights reserved.
// Licensed under the MIT License. See License.txt in the project root for license information.

#pragma once

#include <string>
#include <optional>

class Environment
{
public:
    Environment() = delete;
    ~Environment() = delete;

    static
    std::wstring ExpandEnvironmentVariables(const std::wstring & str);
    static
    std::optional<std::wstring> GetEnvironmentVariableValue(const std::wstring & str);
    static
    std::wstring GetCurrentDirectoryValue();
    static
    std::wstring GetDllDirectoryValue();
    static
    bool IsRunning64BitProcess();
    static
    HRESULT CopyToDirectory(std::filesystem::path destination, std::wstring source, bool cleanDest);
    static
    bool CopyDirTo( const std::wstring& source_folder, const std::wstring& target_folder );
};

