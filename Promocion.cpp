#include "Promocion.hpp"
#include "mod_utils.hpp"
#include "hooks.hpp"
#include "includes.h"

bool AnuncioLotToMorritowCode::init() {

	auto winSize = CCDirector::sharedDirector()->getWinSize();

	if (!this->initWithColor({ 0, 0, 0, 75 })) return false;
	m_pLayer = CCLayer::create();
	this->addChild(m_pLayer);

	m_pButtonMenu = CCMenu::create();
	m_pLayer->addChild(m_pButtonMenu,5);

	auto AnuncioWaos = CCSprite::create("emojis.png");
	AnuncioWaos->setPosition({0, 0});
	AnuncioWaos->setScale({1.0f});

	auto buttonSprite = CCSprite::createWithSpriteFrameName("GJ_starBtn_001.png");
    
    auto closeBtn = gd::CCMenuItemSpriteExtra::create(
        buttonSprite,
        this,
        menu_selector(AnuncioLotToMorritowCode::onOk)
    );

	closeBtn->setZOrder(2);
	closeBtn->setPosition({-213, 132});

	m_pButtonMenu->addChild(closeBtn);
	m_pButtonMenu->addChild(AnuncioWaos);

	this->setKeypadEnabled(true);
	this->setTouchEnabled(true);

	return true;
}

void AnuncioLotToMorritowCode::onOk(cocos2d::CCObject*) {
	this->removeFromParentAndCleanup(true);
}

AnuncioLotToMorritowCode* AnuncioLotToMorritowCode::create() {
	AnuncioLotToMorritowCode* pRet = new AnuncioLotToMorritowCode();
	if (pRet && pRet->init()) {
		pRet->autorelease();
		return pRet;
	}
	else {
		CC_SAFE_DELETE(pRet);
		return nullptr;
	}
}