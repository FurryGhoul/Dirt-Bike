#include "Globals.h"
#include "Application.h"
#include "ModuleSceneIntro.h"
#include "Primitive.h"
#include "PhysBody3D.h"

ModuleSceneIntro::ModuleSceneIntro(Application* app, bool start_enabled) : Module(app, start_enabled)
{
}

ModuleSceneIntro::~ModuleSceneIntro()
{}

// Load assets
bool ModuleSceneIntro::Start()
{
	LOG("Loading Intro assets");
	bool ret = true;

	App->camera->Move(vec3(1.0f, 1.0f, 0.0f));
	App->camera->LookAt(vec3(0, 0, 0));

	first_cube=new Cube(10, 1, 5);
	first_cube->SetPos(0, 1, 10);
	first_cube->SetRotation(-35, { 1,0,0 });	
	
	second_cube = new Cube(10, 1, 5);
	second_cube->SetPos(0, 1, 15);
	second_cube->SetRotation(35, { 1,0,0 });

	ramp_1 =App->physics->AddBody(*first_cube,0.0f);
	ramp_2 = App->physics->AddBody(*second_cube, 0.0f);
	
	return ret;
}

// Load assets
bool ModuleSceneIntro::CleanUp()
{
	LOG("Unloading Intro scene");

	return true;
}

// Update
update_status ModuleSceneIntro::Update(float dt)
{
	Plane p(0, 1, 0, 0);
	p.axis = true;
	p.Render();

	first_cube->Render();
	second_cube->Render();

	float i = 1;
	++i;

	return UPDATE_CONTINUE;
}

void ModuleSceneIntro::OnCollision(PhysBody3D* body1, PhysBody3D* body2)
{
}

