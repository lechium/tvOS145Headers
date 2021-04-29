//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSDictionary, NSError, NSMutableDictionary, NSString, NSURL, NSUUID;

@interface UserActivityToBTLEPayload : NSObject
{
    NSUUID *_uniqueIdentifier;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSDate *_when;	// 24 = 0x18
    NSData *_userInfoPayload;	// 32 = 0x20
    NSURL *_webpageURL;	// 40 = 0x28
    NSData *_streamsData;	// 48 = 0x30
    NSString *_teamID;	// 56 = 0x38
    NSString *_activityType;	// 64 = 0x40
    NSMutableDictionary *_additionalItems;	// 72 = 0x48
    NSError *_error;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000100050e50
@property(copy) NSError *error; // @synthesize error=_error;
@property(copy) NSString *activityType; // @synthesize activityType=_activityType;
@property(copy) NSString *teamID; // @synthesize teamID=_teamID;
@property(copy) NSData *streamsData; // @synthesize streamsData=_streamsData;
@property(copy) NSURL *webpageURL; // @synthesize webpageURL=_webpageURL;
@property(copy) NSData *userInfoPayload; // @synthesize userInfoPayload=_userInfoPayload;
@property(copy) NSDate *when; // @synthesize when=_when;
@property(copy) NSString *title; // @synthesize title=_title;
@property(copy) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (id)description;	// IMP=0x0000000100050a0c
- (id)encodeAsData;	// IMP=0x00000001000501b4
- (id)initWithData:(id)arg1;	// IMP=0x000000010004f864
- (void)addAdditionalItem:(id)arg1 forKey:(id)arg2;	// IMP=0x000000010004f750
@property(readonly, copy) NSDictionary *additionalItems;
- (id)initWithNSError:(id)arg1;	// IMP=0x000000010004f6bc
- (id)init:(id)arg1 title:(id)arg2 date:(id)arg3 userInfoPayload:(id)arg4 teamID:(id)arg5 activityType:(id)arg6;	// IMP=0x000000010004f504

@end

