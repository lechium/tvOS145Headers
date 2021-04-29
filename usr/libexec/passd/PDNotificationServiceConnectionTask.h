//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PDNetworkConnectionTask.h"

@class PDNotificationService;

@interface PDNotificationServiceConnectionTask : PDNetworkConnectionTask
{
    PDNotificationService *_notificationService;	// 8 = 0x8
    long long _taskType;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001001af0b8
- (void).cxx_destruct;	// IMP=0x00000001001b0118
@property(readonly, nonatomic) long long taskType; // @synthesize taskType=_taskType;
@property(retain, nonatomic) PDNotificationService *notificationService; // @synthesize notificationService=_notificationService;
- (_Bool)pertainsToNotificationService:(id)arg1;	// IMP=0x00000001001b006c
- (_Bool)matchesTask:(id)arg1;	// IMP=0x00000001001afd84
- (long long)actionForActiveTask:(id)arg1;	// IMP=0x00000001001afd0c
- (unsigned long long)numberOfBackoffLevels;	// IMP=0x00000001001afcfc
- (const CDStruct_316206b0 *)backoffLevels;	// IMP=0x00000001001afcf0
- (id)bodyDictionary;	// IMP=0x00000001001afce8
- (id)headerFields;	// IMP=0x00000001001afb9c
- (id)queryFields;	// IMP=0x00000001001afb94
- (id)endpointComponents;	// IMP=0x00000001001afb8c
- (id)method;	// IMP=0x00000001001afb84
- (id)request;	// IMP=0x00000001001af210
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001001af16c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001001af0c0
- (id)initWithNotificationService:(id)arg1;	// IMP=0x00000001001af038

@end

