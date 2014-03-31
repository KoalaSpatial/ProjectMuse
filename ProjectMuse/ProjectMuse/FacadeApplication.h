/////////////////////////////////////////////////////
/// 
/// 
/// 
/// 
/// 
/// 
/////////////////////////////////////////////////////

#pragma once

//Include My Code

//Include Other
#include <memory>

//Defines
#define unique(x) std::unique_ptr<x>

//Const

//Prototypes

//Class Prototypes
class FacadeResources;
class FacadeView;
class FacadeScene;
class Application;

//Class Declaration
class FacadeApplication
{
public:
	//Singleton specific
	static FacadeApplication* Instance();
	void erase();

	//Constructor
	FacadeApplication();
	void initialize();

	//Destructor
	~FacadeApplication();

	//R-only access

	//R-W access
	FacadeResources* getFacadeResources();
	FacadeView* getFacadeView();
	FacadeScene* getFacadeScene();

	//Setters
	void setFacadeResources(unique(FacadeResources));
	void setFacadeView(unique(FacadeView));
	void setFacadeScene(unique(FacadeScene));

	//Function
	void run();
	
	//Static Function

	//Operator Overload

	//Public Attribute

private:

	//Private Function

	//Private Attribute
	unique(Application) mApplication;
	unique(FacadeResources) mFacadeResources;
	unique(FacadeView) mFacadeView;
	unique(FacadeScene) mFacadeScene;

	//Singleton specific
	static FacadeApplication* _instance;
};