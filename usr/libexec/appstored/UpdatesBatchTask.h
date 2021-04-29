//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "Task.h"

@class NSArray, NSMutableArray, NSString, XPCRequestToken;

@interface UpdatesBatchTask : Task
{
    NSArray *_apps;	// 8 = 0x8
    NSString *_logKey;	// 16 = 0x10
    XPCRequestToken *_requestToken;	// 24 = 0x18
    NSMutableArray *_updates;	// 32 = 0x20
    _Bool _userInitiated;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100239b98
- (void)_logDeferred:(id)arg1;	// IMP=0x00000001002396ac
- (void)_handleUpdatesResponse:(id)arg1 forAccount:(id)arg2;	// IMP=0x00000001002392cc
- (void)_enumerateAppsByAccountUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100238ec4
@property(readonly, nonatomic) NSArray *updates;
- (void)main;	// IMP=0x0000000100238930
- (id)initWithApps:(id)arg1 context:(id)arg2;	// IMP=0x00000001002387fc

@end

