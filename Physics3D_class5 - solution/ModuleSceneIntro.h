#pragma once
#include "Module.h"
#include "p2DynArray.h"
#include "Globals.h"
#include "Primitive.h"

#define MAX_SNAKE 2

struct PhysBody3D;
struct PhysMotor3D;

class ModuleSceneIntro : public Module
{
public:
	ModuleSceneIntro(Application* app, bool start_enabled = true);
	~ModuleSceneIntro();

	bool Start();
	update_status Update(float dt);
	bool CleanUp();

	void OnCollision(PhysBody3D* body1, PhysBody3D* body2);

public:
	/*
	PhysBody3D* pb_snake[MAX_SNAKE];
	Sphere s_snake[MAX_SNAKE];

	PhysBody3D* pb_snake2[MAX_SNAKE];
	Sphere s_snake2[MAX_SNAKE];
	*/
	p2List<PhysBody3D*> Constraints;

	PhysBody3D* pb_chassis;
	Cube p_chassis;

	PhysBody3D* pb_wheel;
	Cylinder p_wheel;

	PhysBody3D* pb_wheel2;
	Cylinder p_wheel2;

	PhysMotor3D* left_wheel;
	PhysMotor3D* right_wheel;

	Cube* first_cube;
	PhysBody3D* ramp_1;

	Cube* second_cube;
	PhysBody3D* ramp_2;

	Cube* rect_1;
	PhysBody3D* body_rect_1;
	
	Cube* rect_2;
	PhysBody3D* body_rect_2;
	
	Cube* rect_3;
	PhysBody3D* body_rect_3;
	
	Cube* rect_4;
	PhysBody3D* body_rect_4;
	
	Cube* rect_5;
	PhysBody3D* body_rect_5;

	Cube* rect_6;
	PhysBody3D* body_rect_6;

	Cube* rect_7;
	PhysBody3D* body_rect_7;

	Cube* rect_8;
	PhysBody3D* body_rect_8;

	Cube* rect_9;
	PhysBody3D* body_rect_9;

	Cube* rect_10;
	PhysBody3D* body_rect_10;

	Cube* rect_11;
	PhysBody3D* body_rect_11;

	Cube* rect_12;
	PhysBody3D* body_rect_12;

	Cube* rect_13;
	PhysBody3D* body_rect_13;

	Cube* rect_14;
	PhysBody3D* body_rect_14;

	Cube* rect_15;
	PhysBody3D* body_rect_15;
	
	Cube* rect_16;
	PhysBody3D* body_rect_16;
	
	Cube* rect_17;
	PhysBody3D* body_rect_17;

	Cube* finish_1;
	PhysBody3D* bfinish_1;

	Cube* finish_2;
	PhysBody3D* bfinish_2;

	Cube* finish_3;
	PhysBody3D* bfinish_3;

	Cylinder* cylinder_1;
	PhysBody3D* bcylinder_1;

	Cylinder* cylinder_2;
	PhysBody3D* bcylinder_2;

	Cylinder* cylinder_3;
	PhysBody3D* bcylinder_3;

	Cylinder* cylinder_4;
	PhysBody3D* bcylinder_4;

	Cylinder* cylinder_5;
	PhysBody3D* bcylinder_5;

	Cube* barrier_1;
	PhysBody3D* bbarrier_1;

	Cube* barrier_2;
	PhysBody3D* bbarrier_2;

	Cube* barrier_3;
	PhysBody3D* bbarrier_3;

	Cube* barrier_4;
	PhysBody3D* bbarrier_4;

	Cube* barrier_5;
	PhysBody3D* bbarrier_5;

	Cube* barrier_6;
	PhysBody3D* bbarrier_6;

	Cube* barrier_7;
	PhysBody3D* bbarrier_7;

	Cube* barrier_8;
	PhysBody3D* bbarrier_8;

	Cube* barrier_9;
	PhysBody3D* bbarrier_9;

	Cube* barrier_10;
	PhysBody3D* bbarrier_10;

	Cube* barrier_11;
	PhysBody3D* bbarrier_11;

	Cube* barrier_12;
	PhysBody3D* bbarrier_12;

	Cube* barrier_13;
	PhysBody3D* bbarrier_13;

	Cube* barrier_14;
	PhysBody3D* bbarrier_14;

	Cube* barrier_15;
	PhysBody3D* bbarrier_15;

	Cube* barrier_16;
	PhysBody3D* bbarrier_16;

	Cube* barrier_17;
	PhysBody3D* bbarrier_17;

	Cube* barrier_18;
	PhysBody3D* bbarrier_18;

	Cube* barrier_19;
	PhysBody3D* bbarrier_19;

	Cube* barrier_20;
	PhysBody3D* bbarrier_20;

	Cube* barrier_21;
	PhysBody3D* bbarrier_21;

	Cube* barrier_22;
	PhysBody3D* bbarrier_22;

	Cube* barrier_23;
	PhysBody3D* bbarrier_23;

	Cube* barrier_24;
	PhysBody3D* bbarrier_24;

	Cube* barrier_25;
	PhysBody3D* bbarrier_25;

	Cube* barrier_26;
	PhysBody3D* bbarrier_26;

	Cube* barrier_27;
	PhysBody3D* bbarrier_27;

	Cube* barrier_28;
	PhysBody3D* bbarrier_28;

	Cube* barrier_29;
	PhysBody3D* bbarrier_29;

	Cube* barrier_30;
	PhysBody3D* bbarrier_30;

	Cube* barrier_31;
	PhysBody3D* bbarrier_31;

	Cube* barrier_32;
	PhysBody3D* bbarrier_32;

	Cube* barrier_33;
	PhysBody3D* bbarrier_33;

	Cube* barrier_34;
	PhysBody3D* bbarrier_34;

	Cube* barrier_35;
	PhysBody3D* bbarrier_35;

	Cube* Jump_1;
	PhysBody3D* bJump_1;

	Cube* Jump_2;
	PhysBody3D* bJump_2;

	Cube* Jump_3;
	PhysBody3D* bJump_3;

	Cube* Jump_4;
	PhysBody3D* bJump_4;

	Cube* Jump_5;
	PhysBody3D* bJump_5;

	Cube* Jump_6;
	PhysBody3D* bJump_6;

	Cylinder* column_1;
	PhysBody3D* bcolumn_1;

	Cube* rotwall_1;
	PhysBody3D* brotwall_1;

	Cylinder* column_2;
	PhysBody3D* bcolumn_2;

	Cube* rotwall_2;
	PhysBody3D* brotwall_2;

	Cylinder* column_3;
	PhysBody3D* bcolumn_3;

	Cube* rotwall_3;
	PhysBody3D* brotwall_3;
};
