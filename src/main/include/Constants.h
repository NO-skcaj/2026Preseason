#pragma once

#pragma region Includes
#include <iostream>
#include <numbers>
#include <string>

#include <frc/smartdashboard/SmartDashboard.h>
#include <frc/geometry/Translation2d.h>
#include <frc/trajectory/TrapezoidProfile.h>

#include <units/acceleration.h>
#include <units/angle.h>
#include <units/angular_acceleration.h>
#include <units/angular_jerk.h>
#include <units/angular_velocity.h>
#include <units/current.h>
#include <units/length.h>
#include <units/time.h>
#include <units/velocity.h>
#include <units/voltage.h>
#pragma endregion

#pragma region ConstantsDrivetrain
namespace ConstantsDrivetrain
{
    constexpr auto MotorCanId = 43;
}
#pragma #endregion

#pragma region ConstantsController
namespace ConstantsController
{
    constexpr auto DriverControllerUsbPort =   0;
    constexpr auto JoystickOperatorUsbPort =   1;

    constexpr auto JoystickStrafeIndex     =   0;
    constexpr auto JoystickForwardIndex    =   1;
    constexpr auto JoystickAngleIndex      =   2;  // 4 for xbox controller, 2 for extreme 3d controller(stick controller)
    constexpr auto JoystickThrottleIndex   =   3;

    constexpr auto ThrottleMinimum         = 0.5;

    constexpr auto JoystickDeadZone        = 0.0;
    constexpr auto JoystickRotateDeadZone  = 0.08;
}
#pragma endregion

#pragma region ConstantsExtreme3D
namespace ConstantsExtreme3D
{
    constexpr auto HandleTrigger    =  1;
    constexpr auto HandleSide       =  2;
    constexpr auto HandleLowerLeft  =  3;
    constexpr auto HandleLowerRight =  4;
    constexpr auto HandleUpperLeft  =  5;
    constexpr auto HandleUpperRight =  6;
    constexpr auto Handle7          =  7;
    constexpr auto Handle8          =  8;
    constexpr auto Handle9          =  9;
    constexpr auto Handle10         = 10;
    constexpr auto Handle11         = 11;
    constexpr auto Handle12         = 12;
    }
#pragma endregion

#pragma region ConstantsXBox
namespace ConstantsXBox
{
    constexpr auto A                 =   1;
    constexpr auto B                 =   2;
    constexpr auto X                 =   3;
    constexpr auto Y                 =   4;
    constexpr auto LeftBumper        =   5;
    constexpr auto RightBumper       =   6;
    constexpr auto Back              =   7;
    constexpr auto Start             =   8;
    constexpr auto LeftStickButton   =   9;
    constexpr auto RightStickButton  =  10;

    constexpr auto Pov_0             =   0;
    constexpr auto Pov_45            =  45;
    constexpr auto Pov_90            =  90;
    constexpr auto Pov_135           = 135;
    constexpr auto Pov_180           = 180;
    constexpr auto Pov_225           = 225;
    constexpr auto Pov_270           = 270;
    constexpr auto Pov_315           = 315;
}
#pragma endregion
