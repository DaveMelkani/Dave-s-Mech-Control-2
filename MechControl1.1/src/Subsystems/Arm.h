/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once
#include "../Robot.h"
#include "OI.h"


#include "Commands/moveArm.h"
#include "WPILib.h"
#include "ctre/Phoenix.h"
#include "../RobotMap.h"

class Arm : public frc::Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities

public:
	Arm();
	~Arm();
	void InitDefaultCommand() override;
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;
	void moveArm(double leftValue);
};

