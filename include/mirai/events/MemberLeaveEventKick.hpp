#pragma once
#ifndef mirai_cpp_events_MemberLeaveEventKick_hpp_H_
#define mirai_cpp_events_MemberLeaveEventKick_hpp_H_

#include "mirai/third-party/nlohmann/json.hpp"
#include "event_interface.hpp"
#include "mirai/defs/group_member.hpp"
#include <optional>
using std::optional;
using std::nullopt;

namespace Cyan
{
	/**
	 * \brief 群成员被踢出群事件
	 */
	class MemberLeaveEventKick : public EventBase
	{
	public:
		GroupMember Member;
		std::optional<GroupMember> Operator;

		static MiraiEvent GetMiraiEvent()
		{
			return MiraiEvent::MemberLeaveEventKick;
		}
		
		virtual bool Set(const json& j) override
		{
			this->Member.Set(j["member"]);
			if (!j["operator"].is_null())
			{
				GroupMember tmp;
				tmp.Set(j["operator"]);
				Operator = tmp;
			}
			return true;
		}
		virtual json ToJson() const override
		{
			json j = json::object();
			j["type"] = "MemberLeaveEventKick";
			j["member"] = this->Member.ToJson();
			j["operator"] = (Operator != std::nullopt) ? this->Operator->ToJson() : nullptr;
			return j;
		}
	};

}

#endif