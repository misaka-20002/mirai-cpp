#include <iostream>
#include <mirai.hpp>

int main()
{
	using namespace std;
	using namespace Cyan;
	system("chcp 65001");
	MiraiBot bot("127.0.0.1", 539);
	while (true)
	{
		try
		{
			bot.Auth("INITKEY7A3O1a9v", 1589588851qq);
			break;
		}
		catch (const std::exception& ex)
		{
			cout << ex.what() << endl;
		}
		MiraiBot::SleepSeconds(1);
	}
	cout << "成功登录 bot。" << endl;

	FriendImage img = bot.UploadFriendImage("D:\\test.png");
	GroupImage gImg = bot.UploadGroupImage("D:\\test.png");
	TempImage tImg = bot.UploadTempImage("D:\\test.png");

	bot.OnFriendMessageReceived(
		[&](FriendMessage fm)
		{
			try
			{
				fm.Reply(MessageChain().FlashImage(img));
				fm.Reply(MessageChain().Poke("SixSixSix"));
			}
			catch (const std::exception& ex)
			{
				cout << ex.what() << endl;
			}
		});

	bot.OnGroupMessageReceived(
		[&](GroupMessage gm)
		{
			try
			{
				gm.Reply(MessageChain().FlashImage(img));
			}
			catch (const std::exception& ex)
			{
				cout << ex.what() << endl;
			}
		});

	bot.OnTempMessageReceived(
		[&](TempMessage gm)
		{
			try
			{
				gm.Reply(MessageChain().Image(tImg));
			}
			catch (const std::exception& ex)
			{
				cout << ex.what() << endl;
			}
		});

	try
	{
		bot.EventLoop();
	}
	catch (const std::exception& ex)
	{
		cout << ex.what() << endl;
	}

	return 0;
}