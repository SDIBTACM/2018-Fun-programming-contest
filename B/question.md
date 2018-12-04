# Problem B

## Title
苗童大作战之亲友团

## Description
在开始比赛前，童童决定邀请她的亲友团来给自己打气，童童的最多可以邀请 n 个人，可是其中有些人与其他人关系不太好，要知道内部不和可是会出大问题的。为了打造一个融洽的亲友团，童童都快急哭了。

这里我们用一个数组 a 表示童童的将要邀请的名单，如果 a[i] + a[j](i != j) 为素数，则表示第 i 个人和第 j 个人相处融洽，否则代表他们关系不好，你能告诉童童这个亲友团的最大人数吗？要求团内每个人跟其他人都相处融洽。

为了不要使亲友团太孤单，请不要只邀请 1 个人

## Input
第一行是一个整数 n (1 < n ≤ 10000)

第二行是a[0], a[1], ... , a[n-1] 共 n 个整数 (1 ≤ ai, aj ≤ 20000)

## OutPut
输出一个整数，代表童童可邀请的最大人数。

## Sample InPut
3  
2 3 5

## Sample OutPut
2