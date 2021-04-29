//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface DMDEventSubscriptionManager : NSObject
{
    CDUnknownBlockType _eventsHandler;	// 8 = 0x8
    NSMutableDictionary *_eventSubscriptionsByIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100044034
@property(retain, nonatomic) NSMutableDictionary *eventSubscriptionsByIdentifier; // @synthesize eventSubscriptionsByIdentifier=_eventSubscriptionsByIdentifier;
@property(copy, nonatomic) CDUnknownBlockType eventsHandler; // @synthesize eventsHandler=_eventsHandler;
- (id)eventStatusesByPayloadIdentifierSinceStartDate:(id)arg1 organizationIdentifier:(id)arg2;	// IMP=0x0000000100043dc8
- (_Bool)setEventSubscriptionRegistrations:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000438b8
- (id)init;	// IMP=0x0000000100043854

@end

