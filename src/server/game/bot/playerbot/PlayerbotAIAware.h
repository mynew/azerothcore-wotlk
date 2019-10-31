#pragma once
class PlayerbotAI;

namespace BotAI
{
    class PlayerbotAIAware 
    {
    public:
        PlayerbotAIAware(PlayerbotAI* const ai) : ai(ai) { }

    protected:
        PlayerbotAI* ai;
    };
}
