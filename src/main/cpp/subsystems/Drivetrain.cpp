#include "subsystems/Drivetrain.h"

#pragma region Drivetrain (constructor)
/// @brief The Constructor for the Drivetrain class.
Drivetrain::Drivetrain() : m_Biscuit{ConstantsDrivetrain::MotorCanId, "rio"}
{
    // Usage reporting for MAXSwerve template
    HAL_Report(HALUsageReporting::kResourceType_RobotDrive, HALUsageReporting::kRobotDriveSwerve_MaxSwerve);
}
#pragma endregion

#pragma region Periodic
/// @brief This method will be called once periodically.
void Drivetrain::Periodic()
{

}
#pragma endregion

#pragma #region SetMotorVoltage
/// @brief Method to set the voltage for the drivetrain motors.
void Drivetrain::SetMotorVoltage(units::volt_t voltage)
{
    m_Biscuit.SetVoltage(voltage);
}
#pragma endregion