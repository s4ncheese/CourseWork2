#include "MiscComponents.h"
#include <string>

#ifndef DATA_ASCII
#define DATA_ASCII
const std::string TUIComponent::title = R"(
Monks And Dragons

1. Start a game
2. Configure Settings
)";

const std::string TUIComponent::TreasureRoom = R"(

*******************************************************************************
          |                   |                  |                     |
 _________|________________.=""_;=.______________|_____________________|_______
|                   |  ,-"_,=""     `"=.|                  |
|___________________|__"=._o`"-._        `"=.______________|___________________
          |                `"=._o`"=._      _`"=._                     |
 _________|_____________________:=._o "=._."_.-="'"=.__________________|_______
|                   |    __.--" , ; `"=._o." ,-"""-._ ".   |
|___________________|_._"  ,. .` ` `` ,  `"-._"-._   ". '__|___________________
          |           |o`"=._` , "` `; .". ,  "-._"-._; ;              |
 _________|___________| ;`-.o`"=._; ." ` '`."\` . "-._ /_______________|_______
|                   | |o;    `"-.o`"=._``  '` " ,__.--o;   |
|___________________|_| ;     (#) `-.o `"=.`_.--"_o.-; ;___|___________________
____/______/______/___|o;._    "      `".o|o_.--"    ;o;____/______/______/____
/______/______/______/_"=._o--._        ; | ;        ; ;/______/______/______/_
____/______/______/______/__"=._o--._   ;o|o;     _._;o;____/______/______/____
/______/______/______/______/____"=._o._; | ;_.--"o.--"_/______/______/______/_
____/______/______/______/______/_____"=.o|o_.--""___/______/______/______/____
/______/______/______/______/______/______/______/______/______/______/______/-
*******************************************************************************
)";
const std::string TUIComponent::MonsterRoom = R"(
    .
           b   A
           $b  Vb.
           '$b  V$b.
            $$b  V$$b.
            '$$b. V$$$$oooooooo.         ..
             '$$P* V$$$$$""**$$$b.    .o$$P
              " .oooZ$$$$b..o$$$$$$$$$$$$C
              .$$$$$$$$$$$$$$$$$$$$$$$$$$$b.
              $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
        .o$$$o$$$$$$$$P""*$$$$$$$$$P"""*$$$P
       .$$$**$$$$P"q$C    "$$$b        .$$P
       $$P   "$$$b  "$ . .$$$$$b.      *"
       $$      $$$.     "***$$$$$$$b. A.
       V$b   . Z$$b.  .       "*$$$$$b$$:
        V$$.  "*$$$b.  b.         "$$$$$
         "$$b     "*$.  *b.         "$$$b
           "$$b.     "L  "$$o.        "*"     .ooo..
             "*$$o.        "*$$o.          .o$$$$$$$$b.
                 "*$$b.       "$$b.       .$$$$$*"   ""*.
                    "*$$o.      "$$$o.    $$$$$'
                       "$$o       "$$$b.  "$$$$   ...oo..
                         "$b.      "$$$$b. "$$$$$$$P*"""""
                        . "$$       "$$$$b  "$$$$P"
                         L."$.      .$$$$$.  $$$$
          ..              $$$;      o$$$$$$  $$$$
       . $.l              "$$'    .$$$$$$$P  $$$P
     .I .$b b '.           "P   .P*""*$$$$;  $$$
   .$P  $$o ". ".  .        " ."      $$$$   $$;
  .$$;  $$$. "A "$. ".       '       o$$$P  .$P
 .$$$b  $$$$. *$. "$$$$o.          .$$$$P   $"
.$$$$$  $$$$$. "$$o."**$$$$o.'  .o$$$$P"    P
$$P"$$b $$$$$$o  "*$$$$boooooc$$$$$$$P"   .
$$  $$$."$$$"*$$.   "$$$$$$$$$$$$$$$$C  .o"
I"  $P"$."$$b. "*$.    "**$$$$$*"*$$$$$$$"
'   $  "$."$$$.   ""'              "*$$*
    $.   "."$$$$o        mls
    "I       "$$$$b. .
                "$$$b."$o.
                  "*$$."$$$o.
                    "$$o $$$$b.
                     '$$o'$$$$$b.
                      '$$.'$$$**$o
                       '$$.$$$. '$$
                        $$; $$$o. "$.
                        "$: $$ "*o  ".
                     L   $$ $P    l  '.
                     $. .$$ $;
                     ;$.$$P $
                     "$$$$ P'
                      $$$;:
                      $$P
                     o$P
                     $P
                     I'
)";

const std::string TUIComponent::EmptyRoom = R"(
____________________________________________________________________
| **  **  **  **  **  **  **  **  **  **  **  **  **  **  **  **  ** |
|\__/\__/\__/\__/\__/\__/\__/\__/\__/\__/\__/\__/\__/\__/\__/\__/\__/|
|!!!!!!!!!!!!}                                          {!!!!!!!!!!!!|
|!!!!!!!!!!!}                                            {!!!!!!!!!!!|
|!!!!!!!!!!}                                              {!!!!!!!!!!|
|!!!!!!!!!}                  |   |                         {!!!!!!!!!|
|!!!!!!!!}                  /     \             _           {!!!!!!!!|
|!!!!!!!}                  =========           /_\           {!!!!!!!|
|!!!!!!}          .===.     |.....|     .===.   |             {!!!!!!|
|!!!!!!}_________o.....o____|:___:|____o.....o__|_____________{!!!!!!|
|!!!!!!}         |=====|    =======    |=====| _|_            {!!!!!!|
|,-,!!.-,                                                    ,-.!!,-,|
/'`~ \/' ~`\================================================/`~ '\/ ~`'\
)";
const std::string TUIComponent::AsciiLevel=R"(
__   __            _    _               _____ _
\ \ / /           | |  | |             |_   _| |
 \ V /___  _   _  | |  | | ___  _ __     | | | |__   ___
  \ // _ \| | | | | |/\| |/ _ \| '_ \    | | | '_ \ / _ \
  | | (_) | |_| | \  /\  / (_) | | | |   | | | | | |  __/
  \_/\___/ \__,_|  \/  \/ \___/|_| |_|   \_/ |_| |_|\___|


            _      _____ _   _ _____ _
           | |    |  ___| | | |  ___| |
           | |    | |__ | | | | |__ | |
           | |    |  __|| | | |  __|| |
           | |____| |___\ \_/ / |___| |____
           \_____/\____/ \___/\____/\_____/
)";

const std::string TUIComponent::AsciiTitle = R"(
___  ___            _     ___            _______
|  \/  |           | |   / _ \          | |  _  \
| .  . | ___  _ __ | | _/ /_\ \_ __   __| | | | |_ __ __ _  __ _  ___  _ __  ___
| |\/| |/ _ \| '_ \| |/ /  _  | '_ \ / _` | | | | '__/ _` |/ _` |/ _ \| '_ \/ __|
| |  | | (_) | | | |   <| | | | | | | (_| | |/ /| | | (_| | (_| | (_) | | | \__ \
\_|  |_/\___/|_| |_|_|\_\_| |_/_| |_|\__,_|___/ |_|  \__,_|\__, |\___/|_| |_|___/
                                                            __/ |
                                                           |___/

  _         _             _
 / |    ___| |_ __ _ _ __| |_    __ _    __ _  __ _ _ __ ___   ___
 | |   / __| __/ _` | '__| __|  / _` |  / _` |/ _` | '_ ` _ \ / _ \
 | |_  \__ \ || (_| | |  | |_  | (_| | | (_| | (_| | | | | | |  __/
 |_(_) |___/\__\__,_|_|   \__|__\__,_|  \__, |\__,_|_| |_| |_|\___|_   _   _
 |___ \     / ___|___  _ __  / _(_) __ _|___/_ _ __ ___   ___  ___| |_| |_(_)_ __   __ _ ___
   __) |   | |   / _ \| '_ \| |_| |/ _` | | | | '__/ _ \ / __|/ _ \ __| __| | '_ \ / _` / __|
  / __/ _  | |__| (_) | | | |  _| | (_| | |_| | | |  __/ \__ \  __/ |_| |_| | | | | (_| \__ \
 |_____(_)  \____\___/|_| |_|_| |_|\__, |\__,_|_|  \___| |___/\___|\__|\__|_|_| |_|\__, |___/
                                   |___/                                           |___/


)";
#endif
