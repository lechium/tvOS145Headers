/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:56 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPRecordSaveRequestConflictLoserUpdate, NSMutableArray, NSString, CKDPRecord, CKDPRequestedFields, CKDPRecordSaveRequestShareIdUpdate;

@interface CKDPRecordSaveRequest : PBRequest <NSCopying> {

	CKDPRecordSaveRequestConflictLoserUpdate* _conflictLoserUpdate;
	NSMutableArray* _conflictLosersToResolves;
	NSString* _etag;
	NSMutableArray* _fieldsToDeleteIfExistOnMerges;
	NSString* _parentChainProtectionInfoTag;
	CKDPRecord* _record;
	NSString* _recordProtectionInfoTag;
	CKDPRequestedFields* _requestedFields;
	int _saveSemantics;
	NSString* _shareEtag;
	CKDPRecordSaveRequestShareIdUpdate* _shareIDUpdate;
	NSString* _zoneProtectionInfoTag;
	BOOL _merge;
	SCD_Struct_CK4 _has;

}

@property (nonatomic,readonly) BOOL hasRecord; 
@property (nonatomic,retain) CKDPRecord * record;                                                         //@synthesize record=_record - In the implementation block
@property (assign,nonatomic) BOOL hasMerge; 
@property (assign,nonatomic) BOOL merge;                                                                  //@synthesize merge=_merge - In the implementation block
@property (nonatomic,retain) NSMutableArray * fieldsToDeleteIfExistOnMerges;                              //@synthesize fieldsToDeleteIfExistOnMerges=_fieldsToDeleteIfExistOnMerges - In the implementation block
@property (nonatomic,readonly) BOOL hasEtag; 
@property (nonatomic,retain) NSString * etag;                                                             //@synthesize etag=_etag - In the implementation block
@property (nonatomic,readonly) BOOL hasConflictLoserUpdate; 
@property (nonatomic,retain) CKDPRecordSaveRequestConflictLoserUpdate * conflictLoserUpdate;              //@synthesize conflictLoserUpdate=_conflictLoserUpdate - In the implementation block
@property (assign,nonatomic) BOOL hasSaveSemantics; 
@property (assign,nonatomic) int saveSemantics;                                                           //@synthesize saveSemantics=_saveSemantics - In the implementation block
@property (nonatomic,readonly) BOOL hasZoneProtectionInfoTag; 
@property (nonatomic,retain) NSString * zoneProtectionInfoTag;                                            //@synthesize zoneProtectionInfoTag=_zoneProtectionInfoTag - In the implementation block
@property (nonatomic,readonly) BOOL hasRecordProtectionInfoTag; 
@property (nonatomic,retain) NSString * recordProtectionInfoTag;                                          //@synthesize recordProtectionInfoTag=_recordProtectionInfoTag - In the implementation block
@property (nonatomic,retain) NSMutableArray * conflictLosersToResolves;                                   //@synthesize conflictLosersToResolves=_conflictLosersToResolves - In the implementation block
@property (nonatomic,readonly) BOOL hasShareEtag; 
@property (nonatomic,retain) NSString * shareEtag;                                                        //@synthesize shareEtag=_shareEtag - In the implementation block
@property (nonatomic,readonly) BOOL hasShareIDUpdate; 
@property (nonatomic,retain) CKDPRecordSaveRequestShareIdUpdate * shareIDUpdate;                          //@synthesize shareIDUpdate=_shareIDUpdate - In the implementation block
@property (nonatomic,readonly) BOOL hasParentChainProtectionInfoTag; 
@property (nonatomic,retain) NSString * parentChainProtectionInfoTag;                                     //@synthesize parentChainProtectionInfoTag=_parentChainProtectionInfoTag - In the implementation block
@property (nonatomic,readonly) BOOL hasRequestedFields; 
@property (nonatomic,retain) CKDPRequestedFields * requestedFields;                                       //@synthesize requestedFields=_requestedFields - In the implementation block
+(id)options;
+(Class)fieldsToDeleteIfExistOnMergeType;
+(Class)conflictLosersToResolveType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(NSString *)etag;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setEtag:(NSString *)arg1 ;
-(BOOL)hasEtag;
-(CKDPRecord *)record;
-(void)setRecord:(CKDPRecord *)arg1 ;
-(NSString *)shareEtag;
-(void)setShareEtag:(NSString *)arg1 ;
-(CKDPRequestedFields *)requestedFields;
-(void)setRequestedFields:(CKDPRequestedFields *)arg1 ;
-(BOOL)hasRequestedFields;
-(void)setZoneProtectionInfoTag:(NSString *)arg1 ;
-(BOOL)hasZoneProtectionInfoTag;
-(NSString *)zoneProtectionInfoTag;
-(BOOL)hasRecord;
-(void)addFieldsToDeleteIfExistOnMerge:(id)arg1 ;
-(void)addConflictLosersToResolve:(id)arg1 ;
-(unsigned long long)fieldsToDeleteIfExistOnMergesCount;
-(void)clearFieldsToDeleteIfExistOnMerges;
-(id)fieldsToDeleteIfExistOnMergeAtIndex:(unsigned long long)arg1 ;
-(void)setConflictLoserUpdate:(CKDPRecordSaveRequestConflictLoserUpdate *)arg1 ;
-(void)setRecordProtectionInfoTag:(NSString *)arg1 ;
-(unsigned long long)conflictLosersToResolvesCount;
-(void)clearConflictLosersToResolves;
-(id)conflictLosersToResolveAtIndex:(unsigned long long)arg1 ;
-(void)setShareIDUpdate:(CKDPRecordSaveRequestShareIdUpdate *)arg1 ;
-(void)setParentChainProtectionInfoTag:(NSString *)arg1 ;
-(void)setMerge:(BOOL)arg1 ;
-(void)setHasMerge:(BOOL)arg1 ;
-(BOOL)hasMerge;
-(BOOL)hasConflictLoserUpdate;
-(int)saveSemantics;
-(void)setSaveSemantics:(int)arg1 ;
-(void)setHasSaveSemantics:(BOOL)arg1 ;
-(BOOL)hasSaveSemantics;
-(id)saveSemanticsAsString:(int)arg1 ;
-(int)StringAsSaveSemantics:(id)arg1 ;
-(BOOL)hasRecordProtectionInfoTag;
-(BOOL)hasShareEtag;
-(BOOL)hasShareIDUpdate;
-(BOOL)hasParentChainProtectionInfoTag;
-(BOOL)merge;
-(NSMutableArray *)fieldsToDeleteIfExistOnMerges;
-(void)setFieldsToDeleteIfExistOnMerges:(NSMutableArray *)arg1 ;
-(CKDPRecordSaveRequestConflictLoserUpdate *)conflictLoserUpdate;
-(NSString *)recordProtectionInfoTag;
-(NSMutableArray *)conflictLosersToResolves;
-(void)setConflictLosersToResolves:(NSMutableArray *)arg1 ;
-(CKDPRecordSaveRequestShareIdUpdate *)shareIDUpdate;
-(NSString *)parentChainProtectionInfoTag;
@end

