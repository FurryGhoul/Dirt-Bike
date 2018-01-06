#pragma once
#include "Module.h"
#include "p2DynArray.h"
#include "Globals.h"
#include "Primitive.h"

#define MAX_SNAKE 2

struct PhysBody3D;
struct PhysMotor3D;

struct ShapeSize {
	float sizeX;
	float sizeY;
	float sizeZ;
};

struct Rotation {
	float	angle;
	vec3	axis;
};

class ModuleSceneIntro : public Module
{
public:
	ModuleSceneIntro(Application* app, bool start_enabled = true);
	~ModuleSceneIntro();

	bool Start();
	update_status Update(float dt);
	bool CleanUp();

	void CreateRoad();

	void OnCollision(PhysBody3D* body1, PhysBody3D* body2);

public:
	
	p2DynArray<Cube*> RoadCubes;
	p2DynArray<PhysBody3D*> bodyRoadCubes;
	
	p2DynArray<Cube*> barrierCubes;
	p2DynArray<PhysBody3D*> bodybarrierCubes;

	p2DynArray<Cylinder*> cylinders;
	p2DynArray<PhysBody3D*> bodycylinders;

	p2DynArray<Cube*> Jumps;
	p2DynArray<PhysBody3D*> bodyJumps;

	Cube* finish_1;
	PhysBody3D* bfinish_1;

	Cube* finish_2;
	PhysBody3D* bfinish_2;

	Cube* finish_3;
	PhysBody3D* bfinish_3;

	Cylinder* column_1;
	PhysBody3D* bcolumn_1;

	Cube* rotwall_1;
	PhysBody3D* brotwall_1;
};
