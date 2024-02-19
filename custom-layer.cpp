#include "includes.h"
#include "custom-layer.hpp"
#include "mod_utils.hpp"
#include <MinHook.h>
#include <gd.h>

void ToMorritowCode::customButtonCallBack(CCObject*) { // flalert uwu
    auto flalert = gd::FLAlertLayer::create(nullptr, "Imagen2", "ok", nullptr, "Name: EdgaBot Corrompido\n By: Edgajuman and Picrew");
    flalert->show();
}

void ToMorritowCode::customButtonCallBack1(CCObject*) { // flalert uwu
    auto flalert = gd::FLAlertLayer::create(nullptr, "Imagen5", "ok", nullptr, "Name: EdgaBot Guy\n By: SomeGuy");
    flalert->show();
}

void ToMorritowCode::customButtonCallBack2(CCObject*) { // flalert uwu
    auto flalert = gd::FLAlertLayer::create(nullptr, "Imagen4", "ok", nullptr, "Name: E~aBot\n By: Springsito4k");
    flalert->show();
}

void ToMorritowCode::customButtonCallBack3(CCObject*) { // flalert uwu
    auto flalert = gd::FLAlertLayer::create(nullptr, "Imagen3", "ok", nullptr, "Name: EdgaBot 2.0\n By: Edgajuman");
    flalert->show();
}

void ToMorritowCode::customButtonCallBack4(CCObject*) { // flalert uwu
    auto flalert = gd::FLAlertLayer::create(nullptr, "Imagen7", "ok", nullptr, "Name: ChedgaBot\n By: Alex");
    flalert->show();
}

void ToMorritowCode::customButtonCallBack5(CCObject*) { // flalert uwu
    auto flalert = gd::FLAlertLayer::create(nullptr, "Imagen1", "ok", nullptr, "Name: EdgaBot clasico\n By: CapCut");
    flalert->show();
}

void ToMorritowCode::customButtonCallBack6(CCObject*) { // flalert uwu
    auto flalert = gd::FLAlertLayer::create(nullptr, "Imagen6", "ok", nullptr, "Name: EdgaBot Mations\n By: Chile Mations");
    flalert->show();
}

void Links::Link1(CCObject* object) {
    LPCWSTR a = L"https://www.youtube.com/channel/UCJ73MdeBMcrLuSRE-A5TQqg";
    ShellExecuteW(NULL, L"open", a, NULL, NULL, SW_SHOWNORMAL);
}

ToMorritowCode* ToMorritowCode::create() {
    auto ret = new ToMorritowCode();
    if (ret && ret->init()) {
        ret->autorelease();
    } else {
        delete ret;
        ret = nullptr;
    }
    return ret;
}

bool ToMorritowCode::init() {

    auto label = CCLabelBMFont::create("The Museum", "bigFont.fnt"); // Text Basic

    label->setPosition({294, 278});
    label->setRotation(0);
    label->setScale({0.723f});

    addChild(label);

    auto CustomSprite = CCSprite::create("imagen1.png"); // Alert Flalert
    CustomSprite->setScale(0.500f);

    auto buttonMenu = CCMenu::create();
    auto CustomButton = gd::CCMenuItemSpriteExtra::create(CustomSprite, this, menu_selector(ToMorritowCode::customButtonCallBack));
    buttonMenu->setPosition({150 , 120});
    buttonMenu->setScale(0.500f);
    buttonMenu->addChild(CustomButton);
    this->addChild(buttonMenu);

    auto ImagenSprite = CCSprite::create("imagen2.png"); // Alert Flalert
    ImagenSprite->setScale(0.500f);

    auto ImagenMenu = CCMenu::create();
    auto ImagenButton = gd::CCMenuItemSpriteExtra::create(ImagenSprite, this, menu_selector(ToMorritowCode::customButtonCallBack1));
    ImagenMenu->setPosition({105 , 4.100});
    ImagenMenu->setScale(0.500f);
    ImagenMenu->addChild(ImagenButton);
    this->addChild(ImagenMenu);

    auto ImagenSprite2 = CCSprite::create("imagen3.png"); // Alert Flalert
    ImagenSprite2->setScale(0.500f);

    auto ImagenMenu2 = CCMenu::create();
    auto ImagenButton2 = gd::CCMenuItemSpriteExtra::create(ImagenSprite2, this, menu_selector(ToMorritowCode::customButtonCallBack2));
    ImagenMenu2->setPosition({-151.740 , -46.500});
    ImagenMenu2->setScale(0.146f);
    ImagenMenu2->addChild(ImagenButton2);
    this->addChild(ImagenMenu2);

    auto ImagenSprite3 = CCSprite::create("imagen4.png"); // Alert Flalert
    ImagenSprite3->setScale(0.500f);

    auto ImagenMenu3 = CCMenu::create();
    auto ImagenButton3 = gd::CCMenuItemSpriteExtra::create(ImagenSprite3, this, menu_selector(ToMorritowCode::customButtonCallBack3));
    ImagenMenu3->setPosition({306.090 , 126});
    ImagenMenu3->setScale(0.500f);
    ImagenMenu3->addChild(ImagenButton3);
    this->addChild(ImagenMenu3);

    auto ImagenSprite4 = CCSprite::create("imagen5.png"); // Alert Flalert
    ImagenSprite4->setScale(0.500f);

    auto ImagenMenu4 = CCMenu::create();
    auto ImagenButton4 = gd::CCMenuItemSpriteExtra::create(ImagenSprite4, this, menu_selector(ToMorritowCode::customButtonCallBack4));
    ImagenMenu4->setPosition({302 , -9});
    ImagenMenu4->setScale(0.353f);
    ImagenMenu4->addChild(ImagenButton4);
    this->addChild(ImagenMenu4);

    auto ImagenSprite5 = CCSprite::create("imagen6.jpg"); // Alert Flalert
    ImagenSprite5->setScale(0.500f);

    auto ImagenMenu5 = CCMenu::create();
    auto ImagenButton5 = gd::CCMenuItemSpriteExtra::create(ImagenSprite5, this, menu_selector(ToMorritowCode::customButtonCallBack5));
    ImagenMenu5->setPosition({-70.210 , 85.900});
    ImagenMenu5->setScale(0.260f);
    ImagenMenu5->addChild(ImagenButton5);
    this->addChild(ImagenMenu5);

    auto ImagenSprite6 = CCSprite::create("imagen7.png"); // Alert Flalert
    ImagenSprite6->setScale(0.500f);

    auto ImagenMenu6 = CCMenu::create();
    auto ImagenButton6 = gd::CCMenuItemSpriteExtra::create(ImagenSprite6, this, menu_selector(ToMorritowCode::customButtonCallBack6));
    ImagenMenu6->setPosition({111 , -57});
    ImagenMenu6->setScale(0.110f);
    ImagenMenu6->addChild(ImagenButton6);
    this->addChild(ImagenMenu6);

    auto menuwaos = CCMenu::create();
    menuwaos->addChild(ImagenMenu);
    menuwaos->addChild(ImagenMenu2);
    menuwaos->addChild(ImagenMenu3);
    menuwaos->addChild(ImagenMenu4);
    menuwaos->addChild(ImagenMenu5);
    menuwaos->addChild(ImagenMenu6);
    menuwaos->setPosition({0, 0});
    addChild(menuwaos);

    auto ToMorritowLabel = CCLabelBMFont::create("Mod by ToMorritow", "goldFont.fnt");
    ToMorritowLabel->setScale(0.550f);

    auto TextToMorritwButton = CCMenuItemSpriteExtra::create(ToMorritowLabel, this, menu_selector(ToMorritowCode::onIconClicked));
	TextToMorritwButton->setTag(1);
	TextToMorritwButton->setPosition({284, 13});

    auto menu2 = CCMenu::create();
    menu2->addChild(TextToMorritwButton);
    menu2->setPosition({0, 0});
    addChild(menu2);

    gd::GameManager::sharedState()->fadeInMusic("menuLoop2.mp3"); // change of song on layer

    auto backgroundSprite = CCSprite::create("Museum.jpg"); // bg ( background )
    
    auto winSize = CCDirector::sharedDirector()->getWinSize();
    auto size = backgroundSprite->getContentSize();

    backgroundSprite->setScaleX(winSize.width / size.width);
    backgroundSprite->setScaleY(winSize.height / size.height);
    
    backgroundSprite->setAnchorPoint({0, 0});
    
    backgroundSprite->setColor({100, 100, 100});
    
    backgroundSprite->setZOrder(-1);
    addChild(backgroundSprite);

    auto button = gd::CCMenuItemSpriteExtra::create(

        CCSprite::createWithSpriteFrameName("GJ_arrow_01_001.png"),
        this,
        menu_selector(ToMorritowCode::backButtonCallback)
    );

    auto menu = CCMenu::create();
    menu->addChild(button);

    menu->setPosition({25, winSize.height - 25});

    addChild(menu);

    setKeypadEnabled(true);

    return true;
}

void ToMorritowCode::onIconClicked(cocos2d::CCObject* pSender)
{

	switch(pSender->getTag())
	{
		// Info Badges
		case 1:
			ProfilePage::create(94, false)->show();
		break;
	}
}


void ToMorritowCode::keyBackClicked() {
    CCDirector::sharedDirector()->popSceneWithTransition(0.5f, PopTransition::kPopTransitionFade);
}

void ToMorritowCode::backButtonCallback(CCObject* object) {
    keyBackClicked();
}

void ToMorritowCode::switchToToMorritowCodeButton(CCObject* object) {

    auto layer = ToMorritowCode::create();
    auto scene = CCScene::create();
    scene->addChild(layer);
    auto transition = CCTransitionFade::create(0.5f, scene);
    CCDirector::sharedDirector()->pushScene(transition);
}