//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ADPeerInfo, AFCommandExecutionInfo;

@interface ADCommandExecutionContext : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    AFCommandExecutionInfo *_info;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001002cb304
@property(readonly, copy, nonatomic) AFCommandExecutionInfo *info;
- (id)description;	// IMP=0x00000001002cb210
@property(readonly, nonatomic) ADPeerInfo *originPeerInfo;
@property(readonly, nonatomic) _Bool isFromRemote;
- (void)updateInfoUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001002cb050
- (id)initWithInfo:(id)arg1;	// IMP=0x00000001002cafcc

@end

