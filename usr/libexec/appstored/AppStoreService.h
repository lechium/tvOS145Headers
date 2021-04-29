//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASDAppStoreServiceProtocol-Protocol.h"

@protocol OS_dispatch_queue;

@interface AppStoreService : NSObject <ASDAppStoreServiceProtocol>
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
}

+ (id)defaultService;	// IMP=0x00000001000cc2ec
- (void).cxx_destruct;	// IMP=0x00000001000cc6d4
- (id)_currentClient;	// IMP=0x00000001000cc650
- (void)launchAppStoreWithURL:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000cc358
- (id)init;	// IMP=0x00000001000cc264

@end

