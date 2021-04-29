//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, NSArray, NSNumber;

@interface IAPInfoItemsRequestResponse : NSObject
{
    _Bool _update;	// 8 = 0x8
    ACAccount *_account;	// 16 = 0x10
    NSArray *_addedIAPs;	// 24 = 0x18
    NSArray *_removedIAPs;	// 32 = 0x20
    NSNumber *_revision;	// 40 = 0x28
}

+ (id)newUpdateResponseWithAddedIAPs:(id)arg1 removedIAPs:(id)arg2 revision:(id)arg3 forAccount:(id)arg4;	// IMP=0x000000010008061c
+ (id)newRefreshResponseWithIAPs:(id)arg1 revision:(id)arg2 forAccount:(id)arg3;	// IMP=0x0000000100080584
- (void).cxx_destruct;	// IMP=0x0000000100080840
@property(readonly, getter=isUpdate) _Bool update; // @synthesize update=_update;
@property(readonly) NSNumber *revision; // @synthesize revision=_revision;
@property(readonly) NSArray *removedIAPs; // @synthesize removedIAPs=_removedIAPs;
@property(readonly) NSArray *addedIAPs; // @synthesize addedIAPs=_addedIAPs;
@property(readonly) ACAccount *account; // @synthesize account=_account;
- (id)_initWithAddedIAPs:(id)arg1 removedIAPs:(id)arg2 revision:(id)arg3 isUpdate:(_Bool)arg4 forAccount:(id)arg5;	// IMP=0x00000001000806d4

@end

