//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface GKIDSRequestManager : NSObject
{
    NSMutableDictionary *_idsRequests;	// 8 = 0x8
}

+ (id)sharedManager;	// IMP=0x0000000100200c88
- (void).cxx_destruct;	// IMP=0x0000000100201934
@property(retain) NSMutableDictionary *idsRequests; // @synthesize idsRequests=_idsRequests;
- (void)processResponseForiCloudID:(id)arg1 withPlayerID:(id)arg2;	// IMP=0x0000000100201864
- (void)requestGKPlayerIDForiCloudIDs:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001002010bc
- (void)cancellRequestsforiCloudIDs:(id)arg1;	// IMP=0x0000000100200ffc
- (id)responseDictionaryQueue;	// IMP=0x0000000100200e40
- (void)dealloc;	// IMP=0x0000000100200b44
- (id)init;	// IMP=0x0000000100200ae0

@end

