#pragma once

#include "ROSBaseMsg.h"
#include "std_msgs/Header.h"

namespace ROSMessages {
	namespace sensor_msgs {
		class JointState : public FROSBaseMsg {
		public:
			JointState() {
				_MessageType = "sensor_msgs/JointState";
			}

			/**# This is a message that holds data to describe the state of a set of torque controlled joints.
			#
			# The state of each joint(revolute or prismatic) is defined by :
			#  * the position of the joint (rad or m),
			#  * the velocity of the joint (rad/s or m/s) and
			#  * the effort that is applied in the joint (Nm or N).
			#
			# Each joint is uniquely identified by its name
			# The header specifies the time at which the joint states were recorded.All the joint states
			# in one message have to be recorded at the same time.
			#
			# This message consists of a multiple arrays, one for each part of the joint state.
			# The goal is to make each of the fields optional.When e.g.your joints have no
			# effort associated with them, you can leave the effort array empty.
			#
			# All arrays in this message should have the same size, or be empty.
			# This is the only way to uniquely associate the joint name with the correct
			# states.
			*/
			ROSMessages::std_msgs::Header header;

			TArray<FString> name;		// the joint name
			TArray<double> position;	// the position of the joint (rad or m),
			TArray<double> velocity;	// the velocity of the joint (rad/s or m/s)
			TArray<double> effort;		// the effort that is applied in the joint (Nm or N)
		};
	}
}
