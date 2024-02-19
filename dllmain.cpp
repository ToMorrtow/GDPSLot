#include <random>
#include "includes.h"
#include "custom-layer.hpp"
#include "hooks.hpp"
#include "mod_utils.hpp"
#include "LoadingLayer.hpp"
#include <windows.h>
#include <shellapi.h>
#include <gd.h>
#include "Promocion.hpp"

class TeamGDPSWow : public cocos2d::CCLayer {
public:
    void flalertmodxdd(cocos2d::CCObject* pSender) {
        auto GM = gd::GameManager::sharedState();
        auto code = "ToMorritowCode";
        gd::FLAlertLayer::create(nullptr, "ToMorritow Mod", "https://discord.gg/THmJJ75Kcc", nullptr, code)->show();
    }
};

bool (__thiscall* MenuLayer_init)(CCLayer* self);
bool __fastcall MenuLayer_init_H(CCLayer* self, void*) {

    if (!MenuLayer_init(self)) return false;

    // CCCreatorLayer de todos los botones
    auto allBtns = reinterpret_cast<CCMenu*>(self->getChildren()->objectAtIndex(0));

    auto allBtns1 = reinterpret_cast<gd::CCMenuItemSpriteExtra*>(allBtns->getChildren()->objectAtIndex(0));

    auto VersusButton = reinterpret_cast<gd::CCMenuItemSpriteExtra*>(allBtns1->getChildren()->objectAtIndex(0));
    //auto Botton1 = reinterpret_cast<gd::CCMenuItemSpriteExtra*>(allBtns->getChildren()->objectAtIndex(1));
    //auto Botton2 = reinterpret_cast<gd::CCMenuItemSpriteExtra*>(allBtns->getChildren()->objectAtIndex(2));
    //auto Botton3 = reinterpret_cast<gd::CCMenuItemSpriteExtra*>(allBtns->getChildren()->objectAtIndex(3));
    //auto Botton4 = reinterpret_cast<gd::CCMenuItemSpriteExtra*>(allBtns->getChildren()->objectAtIndex(4));
    //auto Botton5 = reinterpret_cast<gd::CCMenuItemSpriteExtra*>(allBtns->getChildren()->objectAtIndex(5));
    //auto Botton6 = reinterpret_cast<gd::CCMenuItemSpriteExtra*>(allBtns->getChildren()->objectAtIndex(6));

    VersusButton->setPosition({ -100, -100 });

    // Tus botones custom GJ_gauntletsBtn_001.png digo GJ_versusBtn_001.png xddd

    auto buttonwSprite = CCSprite::createWithSpriteFrameName("GJ_versusBtn_001.png");
    
    auto buttonw = gd::CCMenuItemSpriteExtra::create(
        buttonwSprite,
        self,
        menu_selector(ToMorritowCode::switchToToMorritowCodeButton)
    );

    buttonw->setPosition({435, 256.5});
    buttonwSprite->setScale(0.85f);

    //self->addChild(buttonw);

    auto menu = CCMenu::create();
    menu->addChild(buttonw);
    //menu->addChild(Botton1);
    //menu->addChild(Botton2);
    //menu->addChild(Botton3);
    //menu->addChild(Botton4);
    //menu->addChild(Botton5);
    //menu->addChild(Botton6);
    menu->setPosition({0, 0});
    menu->setScale({1.0f});
    self->addChild(menu);

    return true;
}

class ToMorritowCodw {
public:
    void Anuncio(cocos2d::CCObject* pSender) { { AnuncioLotToMorritowCode::create()->show(); } }

};

bool (__thiscall* GatoSexoLayer_init)(CCLayer* self);
bool __fastcall GatoSexoLayer_init_H(CCLayer* self, void*) {

    if (!GatoSexoLayer_init(self)) return false;

    auto LogoSpritexdd = reinterpret_cast<CCMenu*>(self->getChildren()->objectAtIndex(3));

    LogoSpritexdd->runAction(CCRepeatForever::create(CCSequence::create(
    CCEaseSineInOut::create(CCScaleTo::create(1.0f, 1.07f)), 
    CCEaseSineInOut::create(CCScaleTo::create(1.0, 1.0f)), nullptr)));

    auto button1 = gd::CCMenuItemSpriteExtra::create(

        CCLabelBMFont::create("and TeamWowTime", "bigFont.fnt"),
        self,
        menu_selector(Links::Link1)
    );

    button1->setPosition({281, 535});
    button1->setScale(0.750f);

    auto buttonwSprite = CCSprite::createWithSpriteFrameName("GJ_moreGamesBtn_001.png");
    
    auto buttonw = gd::CCMenuItemSpriteExtra::create(
        buttonwSprite,
        self,
        menu_selector(ToMorritowCodw::Anuncio)
    );

    auto testxdddw = reinterpret_cast<CCMenu*>(self->getChildren()->objectAtIndex(7));
    auto testpwxddd = reinterpret_cast<gd::CCMenuItemSpriteExtra*>(testxdddw->getChildren()->objectAtIndex(0));
    testpwxddd->setPosition({ 100, 100 });

    buttonwSprite->setScale({0.9f});

    auto menuwaos = CCMenu::create();
    menuwaos->addChild(button1);
    menuwaos->setPosition({0, 0});
    menuwaos->setScale({0.375f});

    self->addChild(menuwaos);

    auto MenuNews = CCMenu::create();
    MenuNews->addChild(buttonw);
    MenuNews->setPosition({527, 45});
    MenuNews->setScale({1.0f});
    self->addChild(MenuNews);


    
    return true;
}

const char* (__thiscall* LoadingLayer_getString_org)(LoadingLayer*);
const char* __fastcall LoadingLayer_getString_h(LoadingLayer* self, void*) {

    const char* s[1] = {
    "Bienvenido A Left of Time 2.2\n TeamWowTime"};

    srand(time(NULL));

    return s[rand() % 1];

}

DWORD WINAPI thread_func(void* hModule) {

    LoadLibrary("SaiModPack.dll");
    LoadLibrary("ToMorritowCode.dll");

    MH_Initialize();

    auto base = reinterpret_cast<uintptr_t>(GetModuleHandle(0));

    MH_CreateHook( // MenuLayer
        reinterpret_cast<void*>(base + 0x4DE40),
        reinterpret_cast<void*>(&MenuLayer_init_H),
        reinterpret_cast<void**>(&MenuLayer_init)
    );

    MH_CreateHook(
        reinterpret_cast<void*>(base + 0x1907b0),
        reinterpret_cast<void*>(&GatoSexoLayer_init_H),
        reinterpret_cast<void**>(&GatoSexoLayer_init)
    );

    MH_CreateHook(
        reinterpret_cast<void*>(base + 0x18cf40),
        reinterpret_cast<void*>(&LoadingLayer_getString_h),
        reinterpret_cast<void**>(&LoadingLayer_getString_org)
    );

    MH_EnableHook(MH_ALL_HOOKS);

    return 0;
}

BOOL APIENTRY DllMain(HMODULE handle, DWORD reason, LPVOID reserved) {
    if (reason == DLL_PROCESS_ATTACH) {
        auto h = CreateThread(0, 0, thread_func, handle, 0, 0);
        if (h)
            CloseHandle(h);
        else
            return FALSE;
    }
    return TRUE;
}