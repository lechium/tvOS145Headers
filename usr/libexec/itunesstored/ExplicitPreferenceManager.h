//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ExplicitPreferenceManager : NSObject
{
}

+ (id)sharedManager;	// IMP=0x0000000100188cc8
- (_Bool)explicitPreferencesDisabled:(char *)arg1;	// IMP=0x0000000100188c98
- (void)setExplicitPreferencesDisabled:(_Bool)arg1;	// IMP=0x0000000100188c5c
- (_Bool)lastChangeInducingBagExplicitOff:(char *)arg1;	// IMP=0x0000000100188c2c
- (void)setLastChangeInducingBagExplicitOff:(_Bool)arg1;	// IMP=0x0000000100188bf0
- (id)init;	// IMP=0x0000000100188110

@end

