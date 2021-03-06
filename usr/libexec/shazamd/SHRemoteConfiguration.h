//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AMSBag, AMSBagValue, SHFeatureFlags;

__attribute__((visibility("hidden")))
@interface SHRemoteConfiguration : NSObject
{
    SHFeatureFlags *_featureFlags;	// 8 = 0x8
    AMSBag *_amsBag;	// 16 = 0x10
    AMSBagValue *_featureFlagsBagValue;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x000000010000ec14
- (void).cxx_destruct;	// IMP=0x000000010000f06c
@property(retain, nonatomic) AMSBagValue *featureFlagsBagValue; // @synthesize featureFlagsBagValue=_featureFlagsBagValue;
@property(retain, nonatomic) AMSBag *amsBag; // @synthesize amsBag=_amsBag;
@property(readonly, nonatomic) _Bool handleNotificationDefaultActionsLocally;
@property(retain, nonatomic) SHFeatureFlags *featureFlags; // @synthesize featureFlags=_featureFlags;
- (void)populateFeatureFlags;	// IMP=0x000000010000ee70
- (void)populateRemoteConfiguration;	// IMP=0x000000010000ede4
- (id)initWithBag:(id)arg1;	// IMP=0x000000010000ed40

@end

