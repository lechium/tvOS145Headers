//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ENGroupID, NSData;

@interface IDSMPConversationGroupEntry : NSObject
{
    NSData *_publicKeyData;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    NSData *_signature;	// 24 = 0x18
    ENGroupID *_groupID;	// 32 = 0x20
    NSData *_forwardingTicket;	// 40 = 0x28
}

+ (id)entryFromPublicDataRepresentation:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100165684
- (void).cxx_destruct;	// IMP=0x00000001001660c8
@property(retain, nonatomic) NSData *forwardingTicket; // @synthesize forwardingTicket=_forwardingTicket;
@property(retain, nonatomic) ENGroupID *groupID; // @synthesize groupID=_groupID;
@property(retain, nonatomic) NSData *signature; // @synthesize signature=_signature;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSData *publicKeyData; // @synthesize publicKeyData=_publicKeyData;
- (id)description;	// IMP=0x0000000100165d54
- (id)publicDataRepresentationWithError:(id *)arg1;	// IMP=0x0000000100165a1c
- (id)initWithStableGroupID:(id)arg1 groupServerEntry:(id)arg2;	// IMP=0x0000000100165424

@end

