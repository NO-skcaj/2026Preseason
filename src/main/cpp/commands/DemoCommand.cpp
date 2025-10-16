#include "commands/DemoCommand.h"

DemoCommand::DemoCommand(units::voltage::volt_t voltage, Drivetrain *drivetrain) : m_drivetrain(drivetrain), m_voltage(voltage)
{
    AddRequirements(m_drivetrain);
}

// Called when the command is initially scheduled.
void DemoCommand::Initialize() 
{
    // Start the timer at -150 to allow 150 cycles of -12V before switching to 0V
    m_timer = -150;
}

// Called repeatedly when this Command is scheduled to run
void DemoCommand::Execute()
{
    m_timer++;
    frc::SmartDashboard::PutNumber("timer", m_timer);

    if (m_timer > 150)
    {
        m_voltage = 12_V;

    }
    else if (m_timer < 0)
    {
        m_voltage = -12_V;
    }
    else if (m_timer == 0)
    {
        m_voltage = 0_V;
    }

    m_drivetrain->SetMotorVoltage(m_voltage);
}

// Called once the command ends or is interrupted.
void DemoCommand::End(bool interrupted) 
{
    m_drivetrain->SetMotorVoltage(0_V);
}

// Returns true when the command should end.
bool DemoCommand::IsFinished()
{
    if (m_timer > 300)
        return true;

    return false;
}
