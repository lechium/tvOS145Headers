//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FAFamilyCircleOperation.h"

@class NSNumber;

@interface FARemoveFamilyMemberOperation : FAFamilyCircleOperation
{
    NSNumber *_dsidOfMemberToRemove;	// 8 = 0x8
    CDUnknownBlockType _removeMemberCompletionHandler;	// 16 = 0x10
}

+ (id)urlEndpoint;	// IMP=0x0000000100002c78
- (void).cxx_destruct;	// IMP=0x000000010000303c
@property(copy) CDUnknownBlockType removeMemberCompletionHandler; // @synthesize removeMemberCompletionHandler=_removeMemberCompletionHandler;
@property(readonly, copy) NSNumber *dsidOfMemberToRemove; // @synthesize dsidOfMemberToRemove=_dsidOfMemberToRemove;
- (void)didFailWithError:(id)arg1;	// IMP=0x0000000100002f84
- (void)didReceivePropertyListResponse:(id)arg1;	// IMP=0x0000000100002f00
- (id)urlRequest;	// IMP=0x0000000100002d7c
- (id)initWithAccount:(id)arg1 dsidOfMemberToRemove:(id)arg2;	// IMP=0x0000000100002c84

@end

