//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class DMDPayloadMetadata, NSDictionary;

@interface DMDPayload : NSManagedObject
{
}

- (id)description;	// IMP=0x00000001000532e8
- (id)identifier;	// IMP=0x000000010005328c

// Remaining properties
@property(retain, nonatomic) DMDPayloadMetadata *metadata; // @dynamic metadata;
@property(copy, nonatomic) NSDictionary *payloadDictionary; // @dynamic payloadDictionary;

@end

