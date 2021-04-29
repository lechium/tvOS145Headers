//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCondition, NSData, NSError;

@interface HIDReportInfo : NSObject
{
    unsigned char _ID;	// 8 = 0x8
    unsigned char _type;	// 9 = 0x9
    _Bool _isValid;	// 10 = 0xa
    NSCondition *_commandCondition;	// 16 = 0x10
    long long _commandPending;	// 24 = 0x18
    NSError *_commandError;	// 32 = 0x20
    NSData *_commandValue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010001b60c
@property(copy, nonatomic) NSData *commandValue; // @synthesize commandValue=_commandValue;
@property(copy, nonatomic) NSError *commandError; // @synthesize commandError=_commandError;
@property(nonatomic) long long commandPending; // @synthesize commandPending=_commandPending;
@property(readonly, retain, nonatomic) NSCondition *commandCondition; // @synthesize commandCondition=_commandCondition;
@property(nonatomic) _Bool isValid; // @synthesize isValid=_isValid;
@property(readonly, nonatomic) unsigned char type; // @synthesize type=_type;
@property(readonly, nonatomic) unsigned char ID; // @synthesize ID=_ID;
- (id)initWithID:(unsigned char)arg1 type:(unsigned char)arg2;	// IMP=0x000000010001b51c

@end

