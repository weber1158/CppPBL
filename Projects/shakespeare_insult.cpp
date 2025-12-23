// A C++ implementation of the MATLAB function `ShakespeareInsult` by Jos.

#include <iostream>
#include <ctime>

int main(){
    const std::string W1[] 
         = {"artless",
            "bawdy",
            "beslubbering",
            "bootless",
            "churlish",
            "cockered",
            "clouted",
            "craven",
            "currish",
            "dankish",
            "dissembling",
            "droning",
            "errant",
            "fawning",
            "fobbing",
            "froward",
            "frothy",
            "gleeking",
            "goatish",
            "gorbellied",
            "impertinent",
            "infectious",
            "jarring",
            "loggerheaded",
            "lumpish",
            "mammering",
            "mangled",
            "mewling",
            "paunchy",
            "pribbling",
            "puking",
            "puny",
            "qualling",
            "rank",
            "reeky",
            "roguish",
            "ruttish",
            "saucy",
            "spleeny",
            "spongy",
            "surly",
            "tottering",
            "unmuzzled",
            "vain",
            "venomed",
            "villainous",
            "warped",
            "wayward",
            "weedy",
            "yeasty"
        };
    const std::string W2[] 
        = {"base-court",
           "bat-fowling",
           "beef-witted",
           "beetle-headed",
           "boil-brained",
           "clapper-clawed",
           "clay-brained",
           "common-kissing",
           "crook-pated",
           "dismal-dreaming",
           "dizzy-eyed",
           "doghearted",
           "dread-bolted",
           "earth-vexing",
           "elf-skinned",
           "fat-kidneyed",
           "fen-sucked",
           "flap-mouthed",
           "fly-bitten",
           "folly-fallen",
           "fool-born",
           "full-gorged",
           "guts-griping",
           "half-faced",
           "hasty-witted",
           "hedge-born",
           "hell-hated",
           "idle-headed",
           "ill-breeding",
           "ill-nurtured",
           "knotty-pated",
           "milk-livered",
           "motley-minded",
           "onion-eyed",
           "plume-plucked",
           "pottle-deep",
           "pox-marked",
           "reeling-ripe",
           "rough-hewn",
           "rude-growing",
           "rump-fed",
           "shard-borne",
           "sheep-biting",
           "spur-galled",
           "swag-bellied",
           "tardy-gaited",
           "tickle-brained",
           "toad-spotted",
           "unchin-snouted",
           "weather-bitten"
        };
    const std::string W3[]
        = {"apple-john",
           "baggage",
           "barnacle",
           "bladder",
           "boar-pig",
           "bugbear",
           "bum-bailey",
           "canker-blossom",
           "clack-dish",
           "clotpole",
           "coxcomb",
           "codpiece",
           "death-token",
           "dewberry",
           "flap-dragon",
           "flax-wench",
           "flirt-gill",
           "foot-licker",
           "fustilarian",
           "giglet",
           "gudgeon",
           "haggard",
           "harpy",
           "hedge-pig",
           "horn-beast",
           "hugger-mugger",
           "joithead",
           "lewdster",
           "lout",
           "maggot-pie",
           "malt-worm",
           "mammet",
           "measle",
           "minnow",
           "miscreant",
           "moldwarp",
           "mumble-news",
           "nut-hook",
           "pigeon-egg",
           "pignut",
           "puttock",
           "pumpion",
           "ratsbane",
           "scut",
           "skainsmate",
           "strumpet",
           "varlot",
           "vassal",
           "whey-face",
           "wagtail"
        };

    srand(time(0));
    int i1 = std::rand() % 50;
    int i2 = std::rand() % 50;
    int i3 = std::rand() % 50;

    std::cout << "Thou " << W1[i1] << " " << W2[i2] << " " << W3[i3] << "!" << std::endl;

    return 0;
}

/* 
 * Reference:
 * Jos (10584) (2025). ShakespeareInsult (https://www.mathworks.com/matlabcentral/   
 *   fileexchange/68824-shakespeareinsult), MATLAB Central File Exchange. Retrieved 
 *   December 21, 2025.
 * 
 * Below is the copyright license for the MATLAB repository by Jos.
 * */

/*
Copyright (c) 2018, Jos (10584)
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

* Redistributions of source code must retain the above copyright notice, this
  list of conditions and the following disclaimer.

* Redistributions in binary form must reproduce the above copyright notice,
  this list of conditions and the following disclaimer in the documentation
  and/or other materials provided with the distribution
* Neither the name of  nor the names of its
  contributors may be used to endorse or promote products derived from this
  software without specific prior written permission.
THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE
FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/