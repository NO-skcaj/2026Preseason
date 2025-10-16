// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "commands/ChassisDrive.h"

ChassisDrive::ChassisDrive(units::voltage::volt_t voltage, Drivetrain *drivetrain) : m_drivetrain(drivetrain), m_voltage(voltage)
{
    AddRequirements(m_drivetrain);
}

// Called when the command is initially scheduled.
void ChassisDrive::Initialize() 
{

}

// Called repeatedly when this Command is scheduled to run
void ChassisDrive::Execute()
{
    m_drivetrain->SetMotorVoltage(0_V);
}

// Called once the command ends or is interrupted.
void ChassisDrive::End(bool interrupted) 
{

}

// Returns true when the command should end.
bool ChassisDrive::IsFinished() 
{
    return false;
}
