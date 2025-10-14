#include "commands/DemoCommand.h"

DemoCommand::DemoCommand(units::voltage::volt_t voltage, Drivetrain *drivetrain) : m_drivetrain(drivetrain), m_voltage(voltage)
{
    AddRequirements(m_drivetrain);
}

// Called when the command is initially scheduled.
void DemoCommand::Initialize() 
{

}

// Called repeatedly when this Command is scheduled to run
void DemoCommand::Execute()
{
    m_timer++;
    frc::SmartDashboard::PutNumber("timer", m_timer);

    if (m_timer > 150)
    {
        m_drivetrain->SetMotorVoltage(0_V);
        m_timer = -150;
    }
    else if (m_timer < 0)
    {
        m_drivetrain->SetMotorVoltage(-12_V);
    }
    else if (m_timer == 0)
    {
        m_drivetrain->SetMotorVoltage(0_V);
    }
}

// Called once the command ends or is interrupted.
void DemoCommand::End(bool interrupted) 
{

}

// Returns true when the command should end.
bool DemoCommand::IsFinished()
{

}
