//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FAFamilyCircleOperation.h"

@interface FAFetchFollowupOperation : FAFamilyCircleOperation
{
    CDUnknownBlockType _fetchFollowupCompletionHandler;	// 8 = 0x8
}

+ (id)urlEndpoint;	// IMP=0x0000000100008078
- (void).cxx_destruct;	// IMP=0x0000000100008368
@property(copy) CDUnknownBlockType fetchFollowupCompletionHandler; // @synthesize fetchFollowupCompletionHandler=_fetchFollowupCompletionHandler;
- (void)didFailWithError:(id)arg1;	// IMP=0x000000010000820c
- (void)didReceivePropertyListResponse:(id)arg1;	// IMP=0x0000000100008128
- (id)initWithAccount:(id)arg1 urlSession:(id)arg2;	// IMP=0x0000000100008084

@end
