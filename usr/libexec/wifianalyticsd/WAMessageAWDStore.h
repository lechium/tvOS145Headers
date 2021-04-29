//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"
#import "WAMessageAWDSubmissionDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface WAMessageAWDStore : NSObject <NSSecureCoding, WAMessageAWDSubmissionDelegate>
{
    NSMutableDictionary *_uuidToMessageMap;	// 8 = 0x8
    NSMutableArray *_sortedByLastAccess;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_storeQueue;	// 24 = 0x18
    unsigned long long _storeSize;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100009db8
- (void).cxx_destruct;	// IMP=0x000000010000a294
@property unsigned long long storeSize; // @synthesize storeSize=_storeSize;
@property(retain) NSObject<OS_dispatch_queue> *storeQueue; // @synthesize storeQueue=_storeQueue;
@property(retain) NSMutableArray *sortedByLastAccess; // @synthesize sortedByLastAccess=_sortedByLastAccess;
@property(retain) NSMutableDictionary *uuidToMessageMap; // @synthesize uuidToMessageMap=_uuidToMessageMap;
- (void)messsageWasSubmittedWithUUID:(id)arg1;	// IMP=0x000000010000a0f8
- (_Bool)_removeMessageWithUUID:(id)arg1;	// IMP=0x0000000100009fbc
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100009e48
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100009dc0
- (void)clearMessageStore;	// IMP=0x0000000100009b40
- (void)_purgeIfNecessary;	// IMP=0x00000001000096b4
- (void)_insertInOrder:(id)arg1;	// IMP=0x0000000100009550
- (id)messageForUUID:(id)arg1;	// IMP=0x0000000100009180
- (void)updateMessage:(id)arg1;	// IMP=0x0000000100008a88
- (id)init;	// IMP=0x000000010000892c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
