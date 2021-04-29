//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AXVoiceOverActivity, SCRCThreadKey;

@interface VOTOutputComponent : NSObject
{
    unsigned long long _currentOutputActionID;	// 8 = 0x8
    SCRCThreadKey *_threadKey;	// 16 = 0x10
    AXVoiceOverActivity *_lastUsedActivity;	// 24 = 0x18
    double _lastUsedActivityTime;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010000e2d0
@property(nonatomic) double lastUsedActivityTime; // @synthesize lastUsedActivityTime=_lastUsedActivityTime;
@property(retain, nonatomic) AXVoiceOverActivity *lastUsedActivity; // @synthesize lastUsedActivity=_lastUsedActivity;
- (_Bool)stringIsInSupportedCharacters:(id)arg1;	// IMP=0x000000010000e2a4
- (id)determineLanguageForEvent:(id)arg1;	// IMP=0x000000010000e1e0
- (id)determineLanguageForAction:(id)arg1 overrideLanguage:(id)arg2 targetLanguage:(id)arg3;	// IMP=0x000000010000dfb8
- (void)notifyActionComplete:(id)arg1;	// IMP=0x000000010000de50
- (void)notifyRangeWillOutput:(struct _NSRange)arg1 container:(id)arg2;	// IMP=0x000000010000dcfc
- (void)handleEvent:(id)arg1;	// IMP=0x000000010000dcf8
- (void)preprocessAction:(id)arg1;	// IMP=0x000000010000dcf4
- (void)setCurrentOutputActionID:(unsigned long long)arg1;	// IMP=0x000000010000dcec
- (id)determineActivityForAction:(id)arg1;	// IMP=0x000000010000d9ac
- (double)outputMutedActivityLastToggleTime;	// IMP=0x000000010010b7e8
- (id)outputMutedActivityValue:(id)arg1;	// IMP=0x000000010010b7c4
- (_Bool)determineOutputMutedForActivity:(id)arg1;	// IMP=0x000000010000d7ec
- (void)performAction:(id)arg1 owner:(id)arg2;	// IMP=0x000000010000d640
- (id)init;	// IMP=0x000000010000d5d0

@end

