//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSpeechFoundation/CSPolicy.h>

@interface CSSelfTriggerDetectorEnabledPolicyGibraltar : CSPolicy
{
    CSPolicy *_voiceTriggerEnabledPolicy;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010004f788
@property(retain, nonatomic) CSPolicy *voiceTriggerEnabledPolicy; // @synthesize voiceTriggerEnabledPolicy=_voiceTriggerEnabledPolicy;
- (void)_addSelfTriggerDetectorEnabledConditions;	// IMP=0x000000010004f4a8
- (void)_subscribeEventMonitors;	// IMP=0x000000010004f454
- (id)init;	// IMP=0x000000010004f2dc

@end
