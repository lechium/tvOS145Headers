//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface ErrorHandlerSession : NSObject
{
    long long _sessionID;	// 8 = 0x8
    NSMutableDictionary *_sessionProperties;	// 16 = 0x10
}

@property(copy, nonatomic) NSDictionary *sessionProperties; // @synthesize sessionProperties=_sessionProperties;
@property(readonly, nonatomic) long long sessionIdentifier; // @synthesize sessionIdentifier=_sessionID;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001001b7bfc
- (unsigned long long)hash;	// IMP=0x00000001001b7bf4
- (id)valueForSessionProperty:(id)arg1;	// IMP=0x00000001001b7bd0
- (void)setValue:(id)arg1 forSessionProperty:(id)arg2;	// IMP=0x00000001001b7b5c
- (void)dealloc;	// IMP=0x00000001001b7b14
- (id)init;	// IMP=0x00000001001b7a80

@end
