//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_source;

@interface watchedServiceInfo : NSObject
{
    int _ourFD;	// 8 = 0x8
    int _theirPID;	// 12 = 0xc
    unsigned long long _heartbeatRef;	// 16 = 0x10
    NSString *_hostID;	// 24 = 0x18
    NSString *_descriptionOverride;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_procExitSource;	// 40 = 0x28
}

+ (int)processWatchCommand:(id)arg1;	// IMP=0x0000000100004f2c
- (void).cxx_destruct;	// IMP=0x0000000100005a48
@property(retain, nonatomic) NSObject<OS_dispatch_source> *procExitSource; // @synthesize procExitSource=_procExitSource;
@property(retain, nonatomic) NSString *descriptionOverride; // @synthesize descriptionOverride=_descriptionOverride;
@property(retain, nonatomic) NSString *hostID; // @synthesize hostID=_hostID;
@property(nonatomic) int theirPID; // @synthesize theirPID=_theirPID;
@property(nonatomic) int ourFD; // @synthesize ourFD=_ourFD;
@property(nonatomic) unsigned long long heartbeatRef; // @synthesize heartbeatRef=_heartbeatRef;
- (_Bool)hasHeartbeatRef:(unsigned long long)arg1 pid:(int)arg2;	// IMP=0x000000010000597c
- (void)logService:(const char *)arg1;	// IMP=0x00000001000058d0
- (id)description;	// IMP=0x000000010000584c
- (void)invalidate;	// IMP=0x00000001000056b8
- (void)dealloc;	// IMP=0x0000000100005640
- (id)initWithWatchCommand:(id)arg1;	// IMP=0x000000010000509c

@end

