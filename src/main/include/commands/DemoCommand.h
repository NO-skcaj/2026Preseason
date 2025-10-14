#pragma once

#include <frc2/command/Command.h>
#include <frc2/command/CommandHelper.h>

#include "subsystems/Drivetrain.h"

class DemoCommand : public frc2::CommandHelper<frc2::Command, DemoCommand>
{
    public:

        DemoCommand(units::voltage::volt_t voltage, Drivetrain *drivetrain);

        void Initialize()          override;
        void Execute()             override;
        void End(bool interrupted) override;
        bool IsFinished()          override;

    private:

        Drivetrain            *m_drivetrain;

        units::voltage::volt_t m_voltage;

        int                    m_timer = 0;
};
