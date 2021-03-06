# Problem C

## Title
苗童大作战之怪物猎人

## Description
苗苗又开始玩一些游戏，这次是RPG游戏。在游戏中，苗苗接受了一个任务：杀死童童所控制的怪物。怪物具有一定的生命值 h2 和一定的攻击力 a2 。苗苗现在拥有 h1 生命值。 此外，她还有两个技能:

1. 燃烧卡路里（Burn my calories），使用此技能，苗苗将会回复 c1 点生命值。  
2. 天马流星拳（Pegasus Ryuseiken），使用此技能，苗苗将会对怪物造成 a1 点伤害。

战斗包括多个回合。在每个回合的开始阶段，苗苗可以使用 技能1 或者 技能2，因为苗苗尚未完全领悟到魔法的精髓，所以每回合她只能释放一次技能 。接下来，如果战斗尚未结束，怪物会攻击苗苗，将会对她的造成 a2 点伤害 。当苗苗（或怪物）的生命值降至 0 或更低时，战斗结束。在苗苗释放技能后，战斗可能会结束。

当然，苗苗想想尽快赢得这场战斗。所以她想制定一个策略：让她以最少的回合数赢得战斗。

策略必须是有效的：在杀死怪物之前，苗苗的生命值必须大于0；并且苗苗在释放最后一次技能后，怪物的生命值必须为0或更低。你可以认为苗苗的技能没有使用次数限制，而且她总能获胜。

你能帮助苗苗制定策略吗？

## Input
第一行包含三个整数h1, a1, c1 (1 ≤ h1, a1 ≤ 100，2 ≤ c1 ≤ 100)

第二行包含两个整数h2, a2 (1 ≤ h2 ≤ 100, 1 ≤ a2 < c1)

## Output
在第一行打印一个整数，代表赢得战斗所需的最少回合数。

然后打印n行。如果苗苗在第i回合使用了技能1，那么第i行输出"Burn my calories!!!!"，如果她使用了技能2则输出"Pegasus Ryuseiken!!!!"。

输出不含双引号。如果有多个最佳解决方案，请打印其中任何一个。

## Sample Input
10 6 100  
17 5

## Sample Output
4  
Pegasus Ryuseiken!!!!  
Burn my calories!!!!  
Pegasus Ryuseiken!!!!  
Pegasus Ryuseiken!!!!  

## Sample Input
11 6 100  
12 5

## Sample Output
2  
Pegasus Ryuseiken!!!!  
Pegasus Ryuseiken!!!!  
