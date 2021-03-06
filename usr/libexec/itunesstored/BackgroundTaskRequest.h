//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_xpc_object;

@interface BackgroundTaskRequest : NSObject
{
    NSObject<OS_xpc_object> *_job;	// 8 = 0x8
    NSString *_requestIdentifier;	// 16 = 0x10
}

+ (id)wifiAvailableRequest;	// IMP=0x0000000100173348
+ (id)pluggedInRequest;	// IMP=0x00000001001732b0
+ (id)networkAvailableRequest;	// IMP=0x0000000100173218
- (void).cxx_destruct;	// IMP=0x0000000100173414
@property(copy, nonatomic) NSString *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
- (id)valueForBackgroundTaskAgentKey:(const char *)arg1;	// IMP=0x00000001001733f4
- (void)setValue:(id)arg1 forBackgroundTaskAgentKey:(const char *)arg2;	// IMP=0x00000001001733e8
- (id)copyBackgroundTaskAgentJob;	// IMP=0x00000001001733e0
- (id)initWithBackgroundTaskAgentJob:(id)arg1;	// IMP=0x00000001001731a0
- (id)init;	// IMP=0x0000000100173138

@end

