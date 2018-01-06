#include "Globals.h"
#include "Application.h"
#include "ModuleAudio.h"
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

	App->audio->PlayMusic("music/Song_1.ogg");
	

	App->camera->Move(vec3(1.0f, 1.0f, 0.0f));
	App->camera->LookAt(vec3(0, 0, 0));

	rect_1 = new Cube(12, 1, 28*2);
	rect_1->SetPos(-15, 0.99f, 15);
	rect_1->SetRotation(-45, { 0,1,0 });

	rect_2 = new Cube(12, 1, 156);
	rect_2->SetPos(-35, 1, 50);

	rect_3 = new Cube(12, 1, 24);
	rect_3->SetPos(-27.6f, 0.99, 133.6f);
	rect_3->SetRotation(45, { 0,1,0 });

	rect_4 = new Cube(12, 1, 24);
	rect_4->SetPos(-10.0f, 1, 141);
	rect_4->SetRotation(90, { 0,1,0 });

	rect_5 = new Cube(12, 1, 24);
	rect_5->SetPos(7.7f, 0.99, 133.6f);
	rect_5->SetRotation(-45, { 0,1,0 });

	rect_6 = new Cube(12,1,71);
	rect_6->SetPos(15.1, 1, 92.5f);

	rect_7 = new Cube(12, 1, 24);
	rect_7->SetPos(22.55f, 0.99, 51.4f);
	rect_7->SetRotation(-45, { 0,1,0 });

	rect_8 = new Cube(12, 1, 24);
	rect_8->SetPos(40.0f, 1, 44.1);
	rect_8->SetRotation(90, { 0,1,0 });

	rect_9 = new Cube(12, 1, 24);
	rect_9->SetPos(57.9f, 0.99, 51.4f);
	rect_9->SetRotation(45, { 0,1,0 });

	rect_10 = new Cube(12, 1, 100);
	rect_10->SetPos(65, 1, 107.0f);

	rect_11 = new Cube(12, 1, 24);
	rect_11->SetPos(57.9f, 0.99,162.4f);
	rect_11->SetRotation(-45, { 0,1,0 });

	rect_12 = new Cube(12, 1, 100);
	rect_12->SetPos(2, 1, 169.5f);
	rect_12->SetRotation(90, { 0,1,0 });

	rect_13 = new Cube(12, 1, 24);
	rect_13->SetPos(-53.9f, 0.99, 162.4f);
	rect_13->SetRotation(45, { 0,1,0 });

	rect_14 = new Cube(12, 1, 184.8f);
	rect_14->SetPos(-61, 1, 64.2f);

	rect_15 = new Cube(12, 1, 14);
	rect_15->SetPos(-57.0f, 0.99, -30.2f);
	rect_15->SetRotation(-45, { 0,1,0 });

	rect_16 = new Cube(12, 1, 14);
	rect_16->SetPos(-38.8f, 0.99, -30.2f);
	rect_16->SetRotation(45, { 0,1,0 });

	rect_17 = new Cube(12, 1, 14);
	rect_17->SetPos(-47.8f, 0.99, -34.0f);
	rect_17->SetRotation(90, { 0,1,0 });

	finish_1 = new Cube(2, 10, 1);
	finish_1->SetPos(-28, 5, 50);

	finish_2 = new Cube(2, 10, 1);
	finish_2->SetPos(-42, 5, 50);

	finish_3 = new Cube(12, 2, 1);
	finish_3->SetPos(-35, 10, 50);

	cylinder_1 = new Cylinder(2.0f, 12);
	cylinder_1->SetPos(15.1, 1, 105);

	cylinder_2 = new Cylinder(3.0f, 12);
	cylinder_2->SetPos(15.1, 0, 92.5f);

	cylinder_3 = new Cylinder(2.0f, 12);
	cylinder_3->SetPos(15.1, 1, 80);

	cylinder_4 = new Cylinder(3.0f, 12);
	cylinder_4->SetPos(15.1, 0, 115);

	cylinder_5 = new Cylinder(2.0f, 12);
	cylinder_5->SetPos(15.1, 1, 70);

	Jump_1 = new Cube(12, 1, 10);
	Jump_1->SetPos(-35, 1, 70);
	Jump_1->SetRotation(-20, { 1,0,0 });

	Jump_2 = new Cube(12, 1, 10);
	Jump_2->SetPos(-35, 2.8, 80);

	Jump_3 = new Cube(12, 1, 10);
	Jump_3->SetPos(-35, 1, 90);
	Jump_3->SetRotation(20, { 1,0,0 });

	Jump_4 = new Cube(10, 1, 12);
	Jump_4->SetPos(20, 1, 169.5f);
	Jump_4->SetRotation(-20, { 0,0,1 });

	Jump_5 = new Cube(20, 1, 12);
	Jump_5->SetPos(2, 2.8, 169.5f);

	Jump_6 = new Cube(10, 1, 12);
	Jump_6->SetPos(-14, 1, 169.5f);
	Jump_6->SetRotation(20, { 0,0,1 });


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
	body_rect_13 = App->physics->AddBody(*rect_13, 0.0f);
	body_rect_14 = App->physics->AddBody(*rect_14, 0.0f);
	body_rect_15 = App->physics->AddBody(*rect_15, 0.0f);
	body_rect_16 = App->physics->AddBody(*rect_16, 0.0f);
	body_rect_17 = App->physics->AddBody(*rect_17, 0.0f);
	
	bfinish_1 = App->physics->AddBody(*finish_1, 0.0f);
	bfinish_2 = App->physics->AddBody(*finish_2, 0.0f);
	bfinish_3 = App->physics->AddBody(*finish_3, 0.0f);

	bcylinder_1= App->physics->AddBody(*cylinder_1, 0.0f);
	bcylinder_2 = App->physics->AddBody(*cylinder_2, 0.0f);
	bcylinder_3 = App->physics->AddBody(*cylinder_3, 0.0f);
	bcylinder_4 = App->physics->AddBody(*cylinder_4, 0.0f);
	bcylinder_5 = App->physics->AddBody(*cylinder_5, 0.0f);

	bJump_1 = App->physics->AddBody(*Jump_1, 0.0f);
	bJump_2 = App->physics->AddBody(*Jump_2, 0.0f);
	bJump_3 = App->physics->AddBody(*Jump_3, 0.0f);
	bJump_4 = App->physics->AddBody(*Jump_4, 0.0f);
	bJump_5 = App->physics->AddBody(*Jump_5, 0.0f);
	bJump_6 = App->physics->AddBody(*Jump_6, 0.0f);

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
	Color plane_color(200, 100, 100);
	Plane p(0, 1, 0, 0);
	p.axis = true;
	p.color = Red;
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
	rect_13->Render();
	rect_14->Render();
	rect_15->Render();
	rect_16->Render();
	rect_17->Render();

	finish_1->Render();
	finish_2->Render();
	finish_3->Render();

	cylinder_1->Render();
	cylinder_2->Render();
	cylinder_3->Render();
	cylinder_4->Render();
	cylinder_5->Render();

	Jump_1->Render();
	Jump_2->Render();
	Jump_3->Render();
	Jump_4->Render();
	Jump_5->Render();
	Jump_6->Render();

	float i = 1;
	++i;

	return UPDATE_CONTINUE;
}

void ModuleSceneIntro::OnCollision(PhysBody3D* body1, PhysBody3D* body2)
{
}

