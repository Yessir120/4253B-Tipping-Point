#include "main.h"

// CONTROLLER
Controller master(ControllerId::master); 

// MOTORS
Motor leftTop(18, true, AbstractMotor::gearset::blue, AbstractMotor::encoderUnits::rotations);
Motor leftMiddle(19, true, AbstractMotor::gearset::blue, AbstractMotor::encoderUnits::rotations);
Motor leftBottom(20, false, AbstractMotor::gearset::blue, AbstractMotor::encoderUnits::rotations);
Motor rightTop(11, false, AbstractMotor::gearset::blue, AbstractMotor::encoderUnits::rotations);
Motor rightMiddle(12, false, AbstractMotor::gearset::blue, AbstractMotor::encoderUnits::rotations);
Motor rightBottom(13, true, AbstractMotor::gearset::blue, AbstractMotor::encoderUnits::rotations);
Motor lift(4, true, AbstractMotor::gearset::green, AbstractMotor::encoderUnits::degrees);
Motor roller(9, false, AbstractMotor::gearset::blue, AbstractMotor::encoderUnits::degrees);
MotorGroup leftDrive({leftTop, leftMiddle, leftBottom});
MotorGroup rightDrive({rightTop, rightMiddle, rightBottom});

// SENSORS
IMU imu(3);
pros::Vision vision_sensor (17, pros::E_VISION_ZERO_CENTER);

// PNEUMATICS
Pneumatics mogo('E');
Pneumatics mogoClamp('F');
Pneumatics claw('D');
Pneumatics wings('H');

// SUBSYSTEM CONTROLLERS
std::shared_ptr<ChassisController> chassis = ChassisControllerBuilder()
	.withMotors(leftDrive, rightDrive)
	.withDimensions({AbstractMotor::gearset::blue, 5.0/3.0}, {{3.25_in, 38.5_cm}, imev5BlueTPR})
	.build();

std::shared_ptr<AsyncPositionController<double, double>> liftController = AsyncPosControllerBuilder()
	.withMotor(lift)
	.withGains({0.007, 0.0, 0.000075}) 
	.build();

std::shared_ptr<AsyncMotionProfiler> profiler = AsyncMotionProfilerBuilder()
	.withOutput(chassis)
	.withProfiler(std::make_unique<SCurveMotionProfile>(constraint))
	.withVelocityController(leftMotorController, rightMotorController)
	.build();

// PID CONTROLLERS
std::shared_ptr<IterativePosPIDController> turnPID = std::make_shared<IterativePosPIDController>(0.05, 0.01, 0.00065, 0, TimeUtilFactory::withSettledUtilParams(2, 2, 100_ms)); // #TODO - Tune Constant

std::shared_ptr<IterativePosPIDController> visionPID = std::make_shared<IterativePosPIDController>(0.01, 0.0, 0.0002, 0, TimeUtilFactory::withSettledUtilParams(5, 2, 100_ms)); // #TODO - Tune Constant

std::shared_ptr<IterativePosPIDController> movePID = std::make_shared<IterativePosPIDController>(0.1, 0.0, 0.002, 0, TimeUtilFactory::withSettledUtilParams(2, 2, 100_ms));

std::shared_ptr<IterativePosPIDController> headingPID = std::make_shared<IterativePosPIDController>(0.118, 0, 0, 0, TimeUtilFactory::createDefault());

// MOTION PROFILE CONSTANTS
ProfileConstraint constraint({4.5_ftps, 9_ftps2, 20_ftps3});
FFVelocityController leftMotorController(0.187, 0.04, 0.025, 2.5, 0.3);
FFVelocityController rightMotorController(0.1915, 0.043, 0.02, 2.5, 0.1);