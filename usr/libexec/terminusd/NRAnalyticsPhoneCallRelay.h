//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NRAnalytics.h"

@interface NRAnalyticsPhoneCallRelay : NRAnalytics
{
    unsigned long long _phoneCallRelayStart;	// 16 = 0x10
    unsigned long long _phoneCallRelayEnd;	// 24 = 0x18
}

@property(nonatomic) unsigned long long phoneCallRelayEnd; // @synthesize phoneCallRelayEnd=_phoneCallRelayEnd;
@property(nonatomic) unsigned long long phoneCallRelayStart; // @synthesize phoneCallRelayStart=_phoneCallRelayStart;
- (void)submit;	// IMP=0x000000010009e500

@end

