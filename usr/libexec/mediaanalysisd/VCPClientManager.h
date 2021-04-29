//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol OS_dispatch_queue;

@interface VCPClientManager : NSObject
{
    NSObject<OS_dispatch_queue> *_managementQueue;	// 8 = 0x8
    NSMutableSet *_clientHandlers;	// 16 = 0x10
}

+ (id)sharedManager;	// IMP=0x0000000100008588
- (void).cxx_destruct;	// IMP=0x0000000100008934
- (void)removeClientHandler:(id)arg1;	// IMP=0x00000001000087bc
- (void)addClientHandler:(id)arg1;	// IMP=0x00000001000085f4
- (id)init;	// IMP=0x00000001000084f4

@end

