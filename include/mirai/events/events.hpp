#pragma once
#ifndef mirai_cpp_events_events_hpp_H_
#define mirai_cpp_events_events_hpp_H_

// 消息事件
#include "Message.hpp"
#include "FriendMessage.hpp"
#include "GroupMessage.hpp"
#include "TempMessage.hpp"
#include "StrangerMessage.hpp"
#include "OtherClientMessage.hpp"
// 机器人相关事件
#include "BotOnlineEvent.hpp"
#include "BotOfflineEventActive.hpp"
#include "BotOfflineEventForce.hpp"
#include "BotOfflineEventDropped.hpp"
#include "BotReloginEvent.hpp"
// 好友相关事件
#include "NewFriendRequestEvent.hpp"
#include "FriendRecallEvent.hpp"
#include "FriendInputStatusChangedEvent.hpp"
#include "FriendNickChangedEvent.hpp"
// 群组相关事件
#include "GroupRecallEvent.hpp"
#include "GroupMuteAllEvent.hpp"
#include "MemberCardChangeEvent.hpp"
#include "MemberSpecialTitleChangeEvent.hpp"
#include "MemberJoinRequestEvent.hpp"
#include "MemberJoinEvent.hpp"
#include "MemberLeaveEventKick.hpp"
#include "MemberLeaveEventQuit.hpp"
#include "MemberMuteEvent.hpp"
#include "MemberUnmuteEvent.hpp"
#include "BotMuteEvent.hpp"
#include "BotUnmuteEvent.hpp"
#include "BotJoinGroupEvent.hpp"
#include "BotLeaveEventActive.hpp"
#include "BotLeaveEventKick.hpp"
#include "BotInvitedJoinGroupRequestEvent.hpp"
#include "GroupNameChangeEvent.hpp"
#include "GroupEntranceAnnouncementChangeEvent.hpp"
#include "GroupAllowAnonymousChatEvent.hpp"
#include "GroupAllowConfessTalkEvent.hpp"
#include "GroupAllowMemberInviteEvent.hpp"
#include "BotGroupPermissionChangeEvent.hpp"
#include "MemberPermissionChangeEvent.hpp"
#include "MemberHonorChangeEvent.hpp"
// 其他事件
#include "NudgeEvent.hpp"
// 一些定义
#include "event_processer.hpp"
#include "mirai_event.hpp"
#include "event_interface.hpp"
// 指令事件
#include "Command.hpp"

#endif // !mirai_cpp_events_events_hpp_H_
