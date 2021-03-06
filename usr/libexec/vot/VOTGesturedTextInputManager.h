//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "VOTAppLauncherDelegate-Protocol.h"

@class NSDictionary, NSString, VOTAppLauncher, VOTElement;
@protocol VOTGesturedTextInputManagerDelegate;

@interface VOTGesturedTextInputManager : NSObject <VOTAppLauncherDelegate>
{
    _Bool _active;	// 8 = 0x8
    id <VOTGesturedTextInputManagerDelegate> _delegate;	// 16 = 0x10
    long long _rotorType;	// 24 = 0x18
    NSDictionary *_localizedWebRotorMap;	// 32 = 0x20
    VOTAppLauncher *_appLauncher;	// 40 = 0x28
    VOTElement *_appLauncherManitorElement;	// 48 = 0x30
    NSString *_currentInputString;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000010005c7c0
@property(copy, nonatomic) NSString *currentInputString; // @synthesize currentInputString=_currentInputString;
@property(retain, nonatomic) VOTElement *appLauncherManitorElement; // @synthesize appLauncherManitorElement=_appLauncherManitorElement;
@property(retain, nonatomic) VOTAppLauncher *appLauncher; // @synthesize appLauncher=_appLauncher;
@property(retain, nonatomic) NSDictionary *localizedWebRotorMap; // @synthesize localizedWebRotorMap=_localizedWebRotorMap;
@property(nonatomic) long long rotorType; // @synthesize rotorType=_rotorType;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(nonatomic) __weak id <VOTGesturedTextInputManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)appLauncher:(id)arg1 didLaunchAppOrNil:(id)arg2;	// IMP=0x000000010005c5b8
- (void)appLauncher:(id)arg1 didFilterApps:(id)arg2 didSwitchAppFocus:(id)arg3 withPrefix:(id)arg4;	// IMP=0x000000010005c2c8
- (unsigned long long)_numberOfCharactersToDeleteStartingAtIndex:(unsigned long long)arg1 toDesiredLength:(unsigned long long)arg2 fromString:(id)arg3;	// IMP=0x000000010005c19c
- (unsigned long long)_numberOfCharactersToDeleteToDesiredLength:(unsigned long long)arg1 fromString:(id)arg2;	// IMP=0x000000010005c12c
- (void)_updateLocalizedResources;	// IMP=0x000000010005be50
- (_Bool)_processLaunchEvent:(id)arg1 forElement:(id)arg2;	// IMP=0x000000010005bb1c
- (_Bool)_processRawInputEvent:(id)arg1 forElement:(id)arg2 withAttributes:(id)arg3;	// IMP=0x000000010005b874
- (_Bool)_performWordBackspaceForElement:(id)arg1;	// IMP=0x000000010005b6f0
- (void)_deleteFromCurrentInputStringIfNeeded;	// IMP=0x000000010005b5c0
- (_Bool)_processWebRotorEvent:(id)arg1;	// IMP=0x000000010005b4b0
- (void)eventFactoryDidBeginSplitGesture:(id)arg1;	// IMP=0x000000010005b4ac
- (id)hintForAppLaunch;	// IMP=0x000000010005b4a4
- (_Bool)shouldAllowRotorEvents;	// IMP=0x000000010005b49c
- (void)didInputWordBackspace;	// IMP=0x000000010005b498
- (void)didInputBackspace;	// IMP=0x000000010005b494
- (_Bool)performNextBrailleTableCommand;	// IMP=0x000000010005b48c
- (_Bool)performNextKeyboardLanguage;	// IMP=0x000000010005b484
- (_Bool)performCustomWordBackspace;	// IMP=0x000000010005b47c
- (_Bool)performCustomBackspace;	// IMP=0x000000010005b474
- (void)applyPreviousSuggestionToElement:(id)arg1;	// IMP=0x000000010010db60
- (void)applyNextSuggestionToElement:(id)arg1;	// IMP=0x000000010010db30
- (_Bool)isNextBrailleTableEvent:(id)arg1;	// IMP=0x000000010010db04
- (_Bool)isNextKeyboardLanguageEvent:(id)arg1;	// IMP=0x000000010010dad8
- (_Bool)isLaunchAppEvent:(id)arg1;	// IMP=0x000000010010daac
- (_Bool)isPreviousSuggestionEvent:(id)arg1;	// IMP=0x000000010010da80
- (_Bool)isNextSuggestionEvent:(id)arg1;	// IMP=0x000000010010da54
- (_Bool)isReturnKeyEvent:(id)arg1;	// IMP=0x000000010010da28
- (_Bool)isWordBackspaceEvent:(id)arg1;	// IMP=0x000000010010d9fc
- (_Bool)isBackspaceEvent:(id)arg1;	// IMP=0x000000010010d9d0
- (_Bool)isSpaceEvent:(id)arg1;	// IMP=0x000000010010d9a4
- (void)clearCurrentString;	// IMP=0x000000010005b460
- (id)currentString;	// IMP=0x000000010005b454
- (void)sendCarriageReturnForElement:(id)arg1;	// IMP=0x000000010005b41c
- (void)pressReturnKeyForElement:(id)arg1;	// IMP=0x000000010005b3e4
- (void)inputSpaceForElement:(id)arg1;	// IMP=0x000000010005b370
- (_Bool)processEvent:(id)arg1;	// IMP=0x000000010005ad78
- (id)currentElementAttributes;	// IMP=0x000000010005ac14
- (void)updateWithString:(id)arg1;	// IMP=0x000000010005a31c
- (long long)valueChangeOriginator;	// IMP=0x000000010010d97c
- (void)appendString:(id)arg1;	// IMP=0x000000010005a27c
- (_Bool)processTapWithFingerCount:(unsigned long long)arg1;	// IMP=0x000000010005a1fc
- (id)init;	// IMP=0x000000010005a178

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

