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
};
