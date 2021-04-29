//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKInternalRepresentation.h"

@class NSData, NSDate, NSDictionary;

@interface GKTurnBasedExchangeReplyInternal : GKInternalRepresentation
{
    NSDictionary *_localizableMessage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    NSDate *_replyDate;	// 24 = 0x18
    unsigned char _recipientIndex;	// 32 = 0x20
}

+ (id)secureCodedPropertyKeys;	// IMP=0x00000001001772f4
- (void).cxx_destruct;	// IMP=0x0000000100177540
@property(retain, nonatomic) NSDate *replyDate; // @synthesize replyDate=_replyDate;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSDictionary *localizableMessage; // @synthesize localizableMessage=_localizableMessage;
@property(nonatomic) unsigned char recipientIndex; // @synthesize recipientIndex=_recipientIndex;
- (void)updateWithCacheObject:(id)arg1;	// IMP=0x000000010018016c

@end

