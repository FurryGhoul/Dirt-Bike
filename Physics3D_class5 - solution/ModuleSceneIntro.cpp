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

	rect_1 = new Cube(8, 1, 28*2);
	rect_1->SetPos(-15, 0.99f, 15);
	rect_1->SetRotation(-45, { 0,1,0 });

	rect_2 = new Cube(8, 1, 156);
	rect_2->SetPos(-35, 1, 50);

	rect_3 = new Cube(8, 1, 24);
	rect_3->SetPos(-27.6f, 0.99, 133.6f);
	rect_3->SetRotation(45, { 0,1,0 });

	rect_4 = new Cube(8, 1, 24);
	rect_4->SetPos(-10.0f, 1, 141);
	rect_4->SetRotation(90, { 0,1,0 });

	rect_5 = new Cube(8, 1, 24);
	rect_5->SetPos(7.7f, 0.99, 133.6f);
	rect_5->SetRotation(-45, { 0,1,0 });

	rect_6 = new Cube(8,1,71);
	rect_6->SetPos(15.1, 1, 92.5f);

	rect_7 = new Cube(8, 1, 24);
	rect_7->SetPos(22.55f, 0.99, 51.4f);
	rect_7->SetRotation(-45, { 0,1,0 });

	rect_8 = new Cube(8, 1, 24);
	rect_8->SetPos(40.0f, 1, 44.1);
	rect_8->SetRotation(90, { 0,1,0 });

	rect_9 = new Cube(8, 1, 24);
	rect_9->SetPos(57.9f, 0.99, 51.4f);
	rect_9->SetRotation(45, { 0,1,0 });

	rect_10 = new Cube(8, 1, 100);
	rect_10->SetPos(65, 1, 107.0f);

	rect_11 = new Cube(8, 1, 24);
	rect_11->SetPos(57.9f, 0.99,162.4f);
	rect_11->SetRotation(-45, { 0,1,0 });

	rect_12 = new Cube(8, 1, 100);
	rect_12->SetPos(2, 1, 169.5f);
	rect_12->SetRotation(90, { 0,1,0 });

	body_rect_1= App->physics->AddBody(*rect_1, 0.0f);
	body_rect_2 = App->physics->AddBody(*rect_2, 0.0f);
	body_rect_3= App->physics->AddBody(*rect_3, 0.0f);
	body_rect_4= App->physics->AddBody(*rect_4, 0.0f);
	body_rect_5 = App->physics->AddBody(*rect_5, 0.0f);
	body_rect_6 = App->physics->AddBody(*rect_6, 0.0f);
	body_rect_7 = App->physics->AddBody(*rect_7, 0.0f);
	body_rect_8 = App->physics->AddBody(*rect_8, 0.0f);
	body_rect_9 = App->physics->AddBody(*rect_9, 0.0f);
	body_rect_10 = App->physics->AddBody(*rect_10, 0.0f);
	body_rect_11 = App->physics->AddBody(*rect_11, 0.0f);
	body_rect_12 = App->physics->AddBody(*rect_12, 0.0f);
	
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

	/*first_cube->Render();
	second_cube->Render();*/
	rect_1->Render();
	rect_2->Render();
	rect_3->Render();
	rect_4->Render();
	rect_5->Render();
	rect_6->Render();
	rect_7->Render();
	rect_8->Render();
	rect_9->Render();
	rect_10->Render();
	rect_11->Render();
	rect_12->Render();

	float i = 1;
	++i;

	return UPDATE_CONTINUE;
}

void ModuleSceneIntro::OnCollision(PhysBody3D* body1, PhysBody3D* body2)
{
}
