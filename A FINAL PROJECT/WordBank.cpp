#include "WordBank.h"
#include <ctime>

WordBank::WordBank() {
	lastWord = "";
	srand(time(0));
	bank.push_back("donkey");
	bank.push_back("walrus");
	bank.push_back("orange");
	bank.push_back("apple");
	bank.push_back("phone");
	bank.push_back("excellent");
	bank.push_back("engine");
	bank.push_back("ball");
	bank.push_back("letter");
	bank.push_back("pen");
	bank.push_back("disk");
	bank.push_back("dice");
	bank.push_back("cable");
	bank.push_back("gum");
	bank.push_back("wire");
	bank.push_back("memory");
	bank.push_back("computer");
	bank.push_back("tablet");
	bank.push_back("table");
	bank.push_back("photo");
	bank.push_back("paste");
	bank.push_back("wireless");
	bank.push_back("telephone");
	bank.push_back("label");
	bank.push_back("marker");
	bank.push_back("map");
	bank.push_back("penguin");
	bank.push_back("apostrophe");
	bank.push_back("grammar");
	bank.push_back("test");
	bank.push_back("exam");
	bank.push_back("metal");
	bank.push_back("video");
	bank.push_back("bill");
	bank.push_back("mouse");
	bank.push_back("keyboard");
	bank.push_back("addition");
	bank.push_back("subtraction");
	bank.push_back("modulus");
	bank.push_back("operator");
	bank.push_back("divide");
	bank.push_back("multiply");
	bank.push_back("split");
	bank.push_back("candy");
	bank.push_back("elderly");
	bank.push_back("internet");
	bank.push_back("chrome");
	bank.push_back("google");
	bank.push_back("music");
	bank.push_back("art");
	bank.push_back("disk");
	bank.push_back("accelerate");
	bank.push_back("stapler");
	bank.push_back("source");
	bank.push_back("code");
	bank.push_back("result");
	bank.push_back("referral");
	bank.push_back("suspend");
	bank.push_back("screws");
	bank.push_back("power");
	bank.push_back("electricity");
	bank.push_back("wall");
	bank.push_back("history");
	bank.push_back("mathematics");
	bank.push_back("rabbit");
	bank.push_back("window");
	bank.push_back("snow");
	bank.push_back("day");
	bank.push_back("night");
	bank.push_back("bank");
	bank.push_back("invite");
	bank.push_back("repair");
	bank.push_back("tickets");
	bank.push_back("sign");
	bank.push_back("egg");
	bank.push_back("door");
	bank.push_back("hair");
	bank.push_back("teeth");
	bank.push_back("eyes");
	bank.push_back("legs");
	bank.push_back("hands");
	bank.push_back("fingers");
	bank.push_back("knees");
	bank.push_back("toes");
	bank.push_back("feet");
	bank.push_back("foot");
	bank.push_back("davison");
	bank.push_back("community");
	bank.push_back("friends");
	bank.push_back("family");
	bank.push_back("acquaintances");
	bank.push_back("follow");
	bank.push_back("draft");
	bank.push_back("update");
}

string WordBank::getWord() {
	string word = bank[rand() % bank.size()];
	if (word != lastWord) {
		lastWord = word;
		return word;
	}
	else {
		return getWord();
	}
}