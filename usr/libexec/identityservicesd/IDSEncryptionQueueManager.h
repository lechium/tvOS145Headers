//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDSEncryptionQueue;

@interface IDSEncryptionQueueManager : NSObject
{
    IDSEncryptionQueue *_syncQueue;	// 8 = 0x8
    IDSEncryptionQueue *_defaultQueue;	// 16 = 0x10
    IDSEncryptionQueue *_urgentQueue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010019b47c
@property(retain, nonatomic) IDSEncryptionQueue *urgentQueue; // @synthesize urgentQueue=_urgentQueue;
@property(retain, nonatomic) IDSEncryptionQueue *defaultQueue; // @synthesize defaultQueue=_defaultQueue;
@property(retain, nonatomic) IDSEncryptionQueue *syncQueue; // @synthesize syncQueue=_syncQueue;
- (id)_queueForPriority:(long long)arg1;	// IMP=0x000000010019b2e4
- (id)syncQueueForPriority:(long long)arg1;	// IMP=0x000000010019b2ac
- (id)asyncQueueForPriority:(long long)arg1;	// IMP=0x000000010019b274
- (id)init;	// IMP=0x000000010019b108

@end

