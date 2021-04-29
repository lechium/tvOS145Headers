//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface SECC2MPCloudKitInfo : PBCodable <NSCopying>
{
    unsigned long long _reportClientOperationFrequency;	// 8 = 0x8
    unsigned long long _reportClientOperationFrequencyBase;	// 16 = 0x10
    unsigned long long _reportOperationGroupFrequency;	// 24 = 0x18
    unsigned long long _reportOperationGroupFrequencyBase;	// 32 = 0x20
    NSString *_clientBundleId;	// 40 = 0x28
    NSMutableArray *_clientOperations;	// 48 = 0x30
    NSString *_clientProcessVersion;	// 56 = 0x38
    NSString *_container;	// 64 = 0x40
    NSString *_environment;	// 72 = 0x48
    NSMutableArray *_operationGroups;	// 80 = 0x50
    _Bool _anonymous;	// 88 = 0x58
    struct {
        unsigned int reportClientOperationFrequency:1;
        unsigned int reportClientOperationFrequencyBase:1;
        unsigned int reportOperationGroupFrequency:1;
        unsigned int reportOperationGroupFrequencyBase:1;
        unsigned int anonymous:1;
    } _has;	// 92 = 0x5c
}

+ (Class)clientOperationType;	// IMP=0x000000010013ea70
+ (Class)operationGroupType;	// IMP=0x000000010013ea64
- (void).cxx_destruct;	// IMP=0x000000010013e348
@property(nonatomic) unsigned long long reportClientOperationFrequencyBase; // @synthesize reportClientOperationFrequencyBase=_reportClientOperationFrequencyBase;
@property(nonatomic) unsigned long long reportClientOperationFrequency; // @synthesize reportClientOperationFrequency=_reportClientOperationFrequency;
@property(retain, nonatomic) NSMutableArray *clientOperations; // @synthesize clientOperations=_clientOperations;
@property(nonatomic) unsigned long long reportOperationGroupFrequencyBase; // @synthesize reportOperationGroupFrequencyBase=_reportOperationGroupFrequencyBase;
@property(nonatomic) unsigned long long reportOperationGroupFrequency; // @synthesize reportOperationGroupFrequency=_reportOperationGroupFrequency;
@property(retain, nonatomic) NSMutableArray *operationGroups; // @synthesize operationGroups=_operationGroups;
@property(nonatomic) _Bool anonymous; // @synthesize anonymous=_anonymous;
@property(retain, nonatomic) NSString *environment; // @synthesize environment=_environment;
@property(retain, nonatomic) NSString *container; // @synthesize container=_container;
@property(retain, nonatomic) NSString *clientBundleId; // @synthesize clientBundleId=_clientBundleId;
@property(retain, nonatomic) NSString *clientProcessVersion; // @synthesize clientProcessVersion=_clientProcessVersion;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010013def8
- (unsigned long long)hash;	// IMP=0x000000010013dd34
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010013dac4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010013d718
- (void)copyTo:(id)arg1;	// IMP=0x000000010013d478
- (void)writeTo:(id)arg1;	// IMP=0x000000010013d184
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010013d17c
- (id)dictionaryRepresentation;	// IMP=0x000000010013cc00
- (id)description;	// IMP=0x000000010013cb4c
@property(nonatomic) _Bool hasReportClientOperationFrequencyBase;
@property(nonatomic) _Bool hasReportClientOperationFrequency;
- (id)clientOperationAtIndex:(unsigned long long)arg1;	// IMP=0x000000010013ca80
- (unsigned long long)clientOperationsCount;	// IMP=0x000000010013ca68
- (void)addClientOperation:(id)arg1;	// IMP=0x000000010013c9f4
- (void)clearClientOperations;	// IMP=0x000000010013c9dc
@property(nonatomic) _Bool hasReportOperationGroupFrequencyBase;
@property(nonatomic) _Bool hasReportOperationGroupFrequency;
- (id)operationGroupAtIndex:(unsigned long long)arg1;	// IMP=0x000000010013c904
- (unsigned long long)operationGroupsCount;	// IMP=0x000000010013c8ec
- (void)addOperationGroup:(id)arg1;	// IMP=0x000000010013c878
- (void)clearOperationGroups;	// IMP=0x000000010013c860
@property(nonatomic) _Bool hasAnonymous;
@property(readonly, nonatomic) _Bool hasEnvironment;
@property(readonly, nonatomic) _Bool hasContainer;
@property(readonly, nonatomic) _Bool hasClientBundleId;
@property(readonly, nonatomic) _Bool hasClientProcessVersion;

@end

