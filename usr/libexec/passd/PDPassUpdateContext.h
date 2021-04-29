//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSData, NSDate, NSString;

@interface PDPassUpdateContext : NSObject <NSSecureCoding>
{
    NSString *_passUniqueIdentifier;	// 8 = 0x8
    NSString *_serialNumber;	// 16 = 0x10
    NSString *_authenticationToken;	// 24 = 0x18
    NSString *_lastModifiedTag;	// 32 = 0x20
    NSDate *_lastModifiedDate;	// 40 = 0x28
    long long _lastModifiedSource;	// 48 = 0x30
    NSData *_manifestHash;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100171f64
- (void).cxx_destruct;	// IMP=0x0000000100172484
@property(retain, nonatomic) NSData *manifestHash; // @synthesize manifestHash=_manifestHash;
@property(nonatomic) long long lastModifiedSource; // @synthesize lastModifiedSource=_lastModifiedSource;
@property(retain, nonatomic) NSDate *lastModifiedDate; // @synthesize lastModifiedDate=_lastModifiedDate;
@property(retain, nonatomic) NSString *lastModifiedTag; // @synthesize lastModifiedTag=_lastModifiedTag;
@property(retain, nonatomic) NSString *authenticationToken; // @synthesize authenticationToken=_authenticationToken;
@property(retain, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(retain, nonatomic) NSString *passUniqueIdentifier; // @synthesize passUniqueIdentifier=_passUniqueIdentifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100172154
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100171f6c

@end

