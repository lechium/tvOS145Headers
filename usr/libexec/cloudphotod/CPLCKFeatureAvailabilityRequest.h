//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import "CKCodeOperationMessageMutation-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSMutableArray, NSString;

@interface CPLCKFeatureAvailabilityRequest : PBRequest <CKCodeOperationMessageMutation, NSCopying>
{
    NSMutableArray *_features;	// 8 = 0x8
}

+ (Class)featuresType;	// IMP=0x000000010008ee24
- (void).cxx_destruct;	// IMP=0x000000010008f840
@property(retain, nonatomic) NSMutableArray *features; // @synthesize features=_features;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010008f6f4
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010008f63c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010008f4c4
- (void)copyTo:(id)arg1;	// IMP=0x000000010008f3f0
- (void)writeTo:(id)arg1;	// IMP=0x000000010008f2c4
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010008f2bc
- (id)dictionaryRepresentation;	// IMP=0x000000010008eee4
@property(readonly, copy) NSString *description;
- (id)featuresAtIndex:(unsigned long long)arg1;	// IMP=0x000000010008ee0c
- (unsigned long long)featuresCount;	// IMP=0x000000010008edf4
- (void)addFeatures:(id)arg1;	// IMP=0x000000010008ed80
- (void)clearFeatures;	// IMP=0x000000010008ed68
- (void)substituteRecordTransports:(id)arg1;	// IMP=0x000000010008ac60
- (id)extractRecordTransports;	// IMP=0x000000010008ac54

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

