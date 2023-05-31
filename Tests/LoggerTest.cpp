#include <gtest/gtest.h>
#include "Monk.h"
#include "Logger.h"
#include "Level1.h"
#include "RoomNavigator.h"
#include "SubjectInstance.h"
#include <fstream>

Subject SubjectInstance::subject{};
TEST(LoggerTest, LogCurrentRoomWhileNavigatingRoomsLevel1
){
Monk *m = new Monk{};
auto *lvl = new Level1{};

TraverseLogger tvl{};
SubjectInstance::subject.
addObserver(&tvl);

RoomNavigator nvgn(m, dynamic_cast<Level *>(lvl), true);
nvgn.

getNextRoom();

nvgn.

getNextRoom();

std::string requiredContent = R"(traversal: Visited Empty Room
traversal: Visited Monster room
traversal: Visited Treasure Room
)";

std::string fileContent;
std::ifstream file;
file.open("traverse.txt");
std::stringstream strStream;
strStream << file.

rdbuf();

fileContent = strStream.str();
ASSERT_EQ(requiredContent, fileContent
);

}