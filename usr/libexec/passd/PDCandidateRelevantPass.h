//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSSet, NSString;

@interface PDCandidateRelevantPass : NSObject
{
    _Bool _hasLocations;	// 8 = 0x8
    NSString *_uniqueIdentifier;	// 16 = 0x10
    NSString *_passTypeIdentifier;	// 24 = 0x18
    NSString *_serialNumber;	// 32 = 0x20
    NSData *_manifestHash;	// 40 = 0x28
    long long _style;	// 48 = 0x30
    NSDate *_relevantDate;	// 56 = 0x38
    NSString *_organizationName;	// 64 = 0x40
    NSSet *_embeddedBeacons;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000010020753c
@property(nonatomic) _Bool hasLocations; // @synthesize hasLocations=_hasLocations;
@property(copy, nonatomic) NSSet *embeddedBeacons; // @synthesize embeddedBeacons=_embeddedBeacons;
@property(copy, nonatomic) NSString *organizationName; // @synthesize organizationName=_organizationName;
@property(copy, nonatomic) NSDate *relevantDate; // @synthesize relevantDate=_relevantDate;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(copy, nonatomic) NSData *manifestHash; // @synthesize manifestHash=_manifestHash;
@property(copy, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(copy, nonatomic) NSString *passTypeIdentifier; // @synthesize passTypeIdentifier=_passTypeIdentifier;
@property(copy, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (unsigned long long)hash;	// IMP=0x0000000100207480
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100207418

@end

