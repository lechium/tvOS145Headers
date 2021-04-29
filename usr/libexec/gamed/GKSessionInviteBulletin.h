//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKSessionBulletin.h"

@class NSString, NSURL;

@interface GKSessionInviteBulletin : GKSessionBulletin
{
    NSURL *_sessionURL;	// 104 = 0x68
    NSString *_senderName;	// 112 = 0x70
    NSString *_userMessage;	// 120 = 0x78
}

+ (void)loadBulletinsForPushNotification:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100116ddc
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100116dd4
- (void).cxx_destruct;	// IMP=0x00000001001186f4
@property(retain, nonatomic) NSString *userMessage; // @synthesize userMessage=_userMessage;
@property(retain, nonatomic) NSString *senderName; // @synthesize senderName=_senderName;
@property(retain, nonatomic) NSURL *sessionURL; // @synthesize sessionURL=_sessionURL;
- (void)assembleBulletin;	// IMP=0x00000001001185ec
- (void)handleAction:(id)arg1;	// IMP=0x0000000100118308
- (void)handleAcceptAction;	// IMP=0x0000000100117fd8
- (id)assembledMessage;	// IMP=0x0000000100117e1c
- (id)aggregateDictionaryKey;	// IMP=0x0000000100117e0c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100117bb4
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100117940
- (id)initWithPushNotification:(id)arg1;	// IMP=0x0000000100117638

@end
