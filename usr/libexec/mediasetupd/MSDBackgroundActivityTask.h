//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MSDBackgroundActivityTask : NSObject
{
    _Bool _allowBattery;	// 8 = 0x8
    _Bool _repeats;	// 9 = 0x9
    _Bool _requireInexpensiveNetworkConnection;	// 10 = 0xa
    _Bool _requireNetworkConnection;	// 11 = 0xb
    NSString *_identifier;	// 16 = 0x10
    CDUnknownBlockType _activityBlock;	// 24 = 0x18
    double _interval;	// 32 = 0x20
    long long _qualityOfService;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010000a5f4
@property(nonatomic) _Bool requireNetworkConnection; // @synthesize requireNetworkConnection=_requireNetworkConnection;
@property(nonatomic) _Bool requireInexpensiveNetworkConnection; // @synthesize requireInexpensiveNetworkConnection=_requireInexpensiveNetworkConnection;
@property(nonatomic) _Bool repeats; // @synthesize repeats=_repeats;
@property(nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property(nonatomic) double interval; // @synthesize interval=_interval;
@property(nonatomic) _Bool allowBattery; // @synthesize allowBattery=_allowBattery;
@property(copy, nonatomic) CDUnknownBlockType activityBlock; // @synthesize activityBlock=_activityBlock;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)schedule;	// IMP=0x000000010000a360
- (void)invalidate;	// IMP=0x000000010000a314
- (void)checkIn;	// IMP=0x000000010000a1e8
- (id)initWithIdentifier:(id)arg1;	// IMP=0x000000010000a114

@end

