#pragma once
#include <memory>
#include <vector>


#include "ControllerHelpers.h"
#include "SwitchVirtualGamepadHandler.h"

namespace syscon::controllers
{
    bool IsAtControllerLimit();

    Result Insert(std::unique_ptr<IController>&& controllerPtr);
    std::vector<std::unique_ptr<SwitchVirtualGamepadHandler>>& Get();
    Mutex& GetScopedLock();

    // void Remove(void Remove(bool (*func)(std::unique_ptr<SwitchVirtualGamepadHandler> a)));;

    void Initialize();
    void Reset();
    void Exit();
} // namespace syscon::controllers