#pragma once

#include <numbers>

#include <hal/FRCUsageReporting.h>

#include <frc2/command/SubsystemBase.h>

#include <ctre/phoenix6/TalonFX.hpp>

#include "Constants.h"

class Drivetrain : public frc2::SubsystemBase
{
    public:

        explicit Drivetrain();

        void     Periodic() override;

        void     SetMotorVoltage(units::volt_t voltage);

    private:

        ctre::phoenix6::hardware::TalonFX m_Biscuit;
};
