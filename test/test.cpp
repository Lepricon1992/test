#include <windows.h>

//Function Definition
void foo(void) {

	char *Foo = "This is the first thing we printed. \r\n";
	OutputDebugString(
		"This is the first thing we printed. \r\n");
	
	
}
struct projectile {
	// NOTE(Andrew): These are members, or"fields", of this stucture

	char unsigned IsThisOnfFire; // NOTE(Andrew):1 it's on fire ,0 it's not
	int Damage; //NOTE(Andrew):How much damage it does on impact
	int ParticlePerSecond; //NOTE(Andrew):For special effects
	short HowManyCooks; //NOTE(Andrew):Too many cooks?
	 
	// NOTE(Andrew)£º1 byte + 4 byte + 4 byte + 2 byte = 11 bytes. But actually it's 16 bytes
};


int WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
	/*NOTE(Andrew):
	char                 8bits   [-128,127]
	unsigned char        8bits   [0,255]
	
	short               16bits   [-2^16/2,2^16/2-1]
	short unsigned      16bits   [0,2^16]

	int                 32bits   
	unsigned int        32bits   [0,2^32]~=4 billion
	*/
	projectile Test;
	Test.IsThisOnfFire = 1;
	Test.Damage = 1; //NOTE(Andrew):fields of a stucture can be used anywhere after it's declared somewhere outside
	Test.ParticlePerSecond = 1;
	Test.HowManyCooks = 1;
	
	short *MrPointerMan = &Test.HowManyCooks;
	short *CastPointer = (short *)&Test;

	/*
	Note(Andrew): 
	Why is there always "204" in the memory?
	Because 204 = 0x000000cc in hexadecimal
	When using compiler for debugging, it always use "cc cc cc ... cc" at first, which helping you easily find out if your variable is or is not defined,ect.
	 */

	int sizeofChar = sizeof(char unsigned);
	int sizeofInt = sizeof(int);
	int sizeofProjectile = sizeof(projectile);

	unsigned char Test1;
	Test1 = 200;

	unsigned short Test2;
	Test2 = 500;

	projectile Projectiles[40];
	projectile *projectilePointer = Projectiles; 

	//Array is a pointer, the only difference occurs when using sizeof() function
	int SizeOfProjectile = sizeof(Projectiles); // 16*40
	int SizeOfProjectilePointer = sizeof(projectilePointer); //4

	Projectiles[10].Damage = 15;

	(projectilePointer + 10)->Damage = 20;
	/*
	previous line equals to :
	((projectile *)((char *)projectilePointer + 10 * sizeof(projectile)))->Damage = 20;
	*/

	projectile Test11;
	Test11.Damage=10;

	projectile *Test22;
	Test22->Damage=10;


}