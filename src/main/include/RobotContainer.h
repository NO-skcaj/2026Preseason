#pragma once

#pragma region Includes
#include <utility>

#include <frc/filter/SlewRateLimiter.h>
#include <frc/Joystick.h>
#include <frc/MathUtil.h>
#include <frc/PowerDistribution.h>
#include <frc/smartdashboard/SmartDashboard.h>
#include <frc/smartdashboard/SendableChooser.h>
#include <frc/trajectory/Trajectory.h>
#include <frc/trajectory/TrajectoryGenerator.h>
#include <frc/XboxController.h>

#include <frc2/command/button/JoystickButton.h>
#include <frc2/command/button/POVButton.h>
#include <frc2/command/Command.h>
#include <frc2/command/InstantCommand.h>
#include <frc2/command/ParallelRaceGroup.h>
#include <frc2/command/RunCommand.h>
#include <frc2/command/SwerveControllerCommand.h>

// Subsystems
#include "subsystems/Drivetrain.h"

// Commands
#include "commands/AutonomousDoNothing.h"
#include "commands/ChassisDrive.h"
#include "commands/DemoCommand.h"

#include "Constants.h"
#pragma endregion

/// @brief Class to instantiate the robot subsystems and commands along with the operator controls
class RobotContainer
{
    public:

        // Method that returns a pointer to the singleton instance of the RobotContainer class
        static RobotContainer  *GetInstance();

        // Method to get a pointer to the selected autonomous command
        frc2::Command          *GetAutonomousCommand();


        // Methods to get a reference to the robot joysticks
        frc::Joystick               *GetDriverController();
        frc::XboxController         *GetOperatorController();
        frc::PowerDistribution *GetPowerDistribution();

    private:

        // Private class constructor to configure the robot and SmartDashboard configuration
        RobotContainer();

        // Method to bind the joystick controls to the robot commands
        void ConfigureButtonBindings();

        // Singleton reference to the class (returned by the GetInstance Method)
        static RobotContainer                *m_robotContainer;

        // Instantiate the robot subsystems
        Drivetrain                            m_drivetrain;

        // Joysticks
        frc::Joystick                         m_driverController{ConstantsController::DriverControllerUsbPort};
        frc::XboxController                   m_operatorController{ConstantsController::JoystickOperatorUsbPort};
        // Autonomous command chooser
        frc::SendableChooser<frc2::Command*>  m_autonomousChooser;

        frc::PowerDistribution                m_powerDistribution;
};
