/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:29 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CPLRecordChangeDiffTracker, NSString, CPLScopedIdentifier, NSDate, NSData;

@interface CPLRecordChange : NSObject <NSSecureCoding, NSCopying> {

	CPLRecordChangeDiffTracker* _attachedDiffTracker;
	NSString* _uploadIdentifier;
	BOOL _shouldNotTrustCloudCache;
	BOOL _shouldFilterDefaultValuesForNewProperties;
	BOOL _isSparseFullChange;
	BOOL _shouldOnlyUploadNewResources;
	BOOL _didCacheRealResourceSizeInStorage;
	unsigned long long _cachedRealResourceSizeInStorage;
	BOOL _inTrash;
	BOOL _inExpunged;
	BOOL _serverRecordIsCorrupted;
	CPLScopedIdentifier* _scopedIdentifier;
	NSDate* _recordModificationDate;
	unsigned long long _changeType;
	NSDate* _dateDeleted;
	CPLScopedIdentifier* _resourceCopyFromScopedIdentifier;
	NSString* _realIdentifier;
	NSData* _recordChangeData;

}

@property (nonatomic,copy) NSString * realIdentifier;                                           //@synthesize realIdentifier=_realIdentifier - In the implementation block
@property (nonatomic,copy) NSData * recordChangeData;                                           //@synthesize recordChangeData=_recordChangeData - In the implementation block
@property (assign,nonatomic) BOOL serverRecordIsCorrupted;                                      //@synthesize serverRecordIsCorrupted=_serverRecordIsCorrupted - In the implementation block
@property (nonatomic,copy) CPLScopedIdentifier * scopedIdentifier;                              //@synthesize scopedIdentifier=_scopedIdentifier - In the implementation block
@property (nonatomic,copy) NSDate * recordModificationDate;                                     //@synthesize recordModificationDate=_recordModificationDate - In the implementation block
@property (assign,nonatomic) unsigned long long changeType;                                     //@synthesize changeType=_changeType - In the implementation block
@property (nonatomic,copy) NSDate * dateDeleted;                                                //@synthesize dateDeleted=_dateDeleted - In the implementation block
@property (nonatomic,copy) CPLScopedIdentifier * resourceCopyFromScopedIdentifier;              //@synthesize resourceCopyFromScopedIdentifier=_resourceCopyFromScopedIdentifier - In the implementation block
@property (assign,nonatomic) BOOL inTrash;                                                      //@synthesize inTrash=_inTrash - In the implementation block
@property (assign,nonatomic) BOOL inExpunged;                                                   //@synthesize inExpunged=_inExpunged - In the implementation block
@property (nonatomic,copy) NSString * identifier; 
+(BOOL)supportsSecureCoding;
+(BOOL)cplShouldIgnorePropertyForCoding:(id)arg1 ;
+(BOOL)cplShouldIgnorePropertyForEquality:(id)arg1 ;
+(id)cplAdditionalSecureClassesForProperty:(id)arg1 ;
+(Class)classForStoredClassName:(id)arg1 forCPLArchiver:(id)arg2 ;
+(BOOL)shouldReallyQuarantineRecord;
+(id)descriptionForDirection:(unsigned long long)arg1 ;
+(id)newRecord;
+(id)newRecordInScopeWithIdentifier:(id)arg1 ;
+(id)newRecordWithScopedIdentifier:(id)arg1 ;
+(id)newChangeWithScopedIdentifier:(id)arg1 changeType:(unsigned long long)arg2 ;
+(id)newDeleteChangeWithScopedIdentifier:(id)arg1 ;
+(id)newChangeWithType:(unsigned long long)arg1 ;
+(long long)maxInlineDataSize;
+(id)descriptionForChangeType:(unsigned long long)arg1 ;
+(id)_descriptionForChangeType:(unsigned long long)arg1 isSparseFullChange:(BOOL)arg2 onlyUploadNewResources:(BOOL)arg3 ;
+(/*^block*/id)equalityBlockForDirection:(unsigned long long)arg1 ;
+(/*^block*/id)copyPropertyBlockForDirection:(unsigned long long)arg1 ;
+(id)newChangeWithIdentifier:(id)arg1 changeType:(unsigned long long)arg2 ;
+(id)newRecordWithIdentifier:(id)arg1 ;
+(id)newDeleteChangeWithIdentifier:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)redactedDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(unsigned long long)changeType;
-(BOOL)isDelete;
-(void)setChangeType:(unsigned long long)arg1 ;
-(void)clearIdentifiers;
-(id)resources;
-(void)setResources:(id)arg1 ;
-(id)secondaryIdentifier;
-(CPLScopedIdentifier *)scopedIdentifier;
-(BOOL)supportsDeletion;
-(BOOL)supportsDirectDeletion;
-(id)propertiesDescription;
-(/*^block*/id)checkDefaultValueBlockForPropertyWithSelector:(SEL)arg1 ;
-(long long)dequeueOrder;
-(id)propertiesForChangeType:(unsigned long long)arg1 ;
-(id)resourceForType:(unsigned long long)arg1 ;
-(void)copyDerivativesFromRecordIfPossible:(id)arg1 ;
-(BOOL)supportsResources;
-(BOOL)supportsResourceType:(unsigned long long)arg1 ;
-(BOOL)isResourceTypeAGeneratedDerivative:(unsigned long long)arg1 ;
-(BOOL)allowsToOnlyUploadNewResources;
-(BOOL)isMasterChange;
-(NSDate *)recordModificationDate;
-(id)cplFullDescription;
-(id)storedClassNameForCPLArchiver:(id)arg1 ;
-(id)relatedScopedIdentifier;
-(id)secondaryScopedIdentifier;
-(id)initWithCPLArchiver:(id)arg1 ;
-(id)proposedCloudScopedIdentifierWithError:(id*)arg1 ;
-(id)scopedIdentifiersForMapping;
-(id)translateToCloudChangeUsingIDMapping:(id)arg1 error:(id*)arg2 ;
-(id)translateToClientChangeUsingIDMapping:(id)arg1 error:(id*)arg2 ;
-(void)setScopeIndex:(long long)arg1 ;
-(id)compactedChangeWithRelatedChanges:(id)arg1 isOnlyChange:(BOOL)arg2 fullRecord:(id)arg3 usingStorageView:(id)arg4 ;
-(id)relatedIdentifier;
-(void)setRelatedIdentifier:(id)arg1 ;
-(void)setSecondaryIdentifier:(id)arg1 ;
-(BOOL)validateFullRecord;
-(void)setScopedIdentifier:(CPLScopedIdentifier *)arg1 ;
-(id)_uploadIdentifier;
-(BOOL)_shouldNotTrustCloudCache;
-(id)_unscopedIdentifier;
-(id)realScopedIdentifier;
-(BOOL)isInScopeWithIdentifier:(id)arg1 ;
-(BOOL)hasChangeType:(unsigned long long)arg1 ;
-(BOOL)isFullRecord;
-(unsigned long long)totalResourceSize;
-(unsigned long long)effectiveResourceSizeToUploadUsingStorage:(id)arg1 ;
-(unsigned long long)realResourceSize;
-(unsigned long long)originalResourceSize;
-(BOOL)applyChange:(id)arg1 copyPropertiesToFinalChange:(id)arg2 forChangeType:(unsigned long long)arg3 direction:(unsigned long long)arg4 diffTracker:(id)arg5 ;
-(id)realRecordChangeFromRecordChange:(id)arg1 direction:(unsigned long long)arg2 newRecord:(id*)arg3 changeType:(unsigned long long)arg4 diffTracker:(id)arg5 ;
-(id)realRecordChangeFromRecordChange:(id)arg1 direction:(unsigned long long)arg2 newRecord:(id*)arg3 diffTracker:(id)arg4 ;
-(id)realRecordChangeFromRecordChange:(id)arg1 direction:(unsigned long long)arg2 newRecord:(id*)arg3 ;
-(void)attachDiffTracker:(id)arg1 ;
-(id)attachedDiffTracker;
-(BOOL)resourceChangeWillOnlyChangeDerivatives:(id)arg1 ;
-(id)mergeRecordChangeWithNewRecordChange:(id)arg1 direction:(unsigned long long)arg2 ;
-(id)proposedLocalScopedIdentifier;
-(id)allRelatedScopedIdentifiers;
-(void)prepareForStorage;
-(void)awakeFromStorage;
-(id)resourcesDescription;
-(BOOL)shouldApplyPropertiesWithSelector:(SEL)arg1 ;
-(void)setShouldFilterDefaultValuesForNewProperties:(BOOL)arg1 ;
-(BOOL)shouldFilterDefaultValuesForNewProperties;
-(BOOL)isSparseFullChange;
-(void)markAsSparseFullChange;
-(void)markToOnlyUploadNewResources;
-(BOOL)shouldOnlyUploadNewResources;
-(BOOL)changeIsOnlyAddingResourcesToRecord:(id)arg1 addedResources:(id*)arg2 ;
-(id)onlyAddedResources;
-(BOOL)validateChangeWithError:(id*)arg1 ;
-(unsigned long long)estimatedRecordSize;
-(void)_setUploadIdentifier:(id)arg1 ;
-(void)_setShouldNotTrustCloudCache:(BOOL)arg1 ;
-(BOOL)_canLowerQuota;
-(unsigned long long)fullChangeTypeForFullRecord;
-(BOOL)allResourcesAreAvailable;
-(id)resourcePerType;
-(unsigned long long)baseDerivativeResourceType;
-(unsigned long long)baseVideoComplemenentResourceType;
-(void)copyDerivatives:(unsigned long long*)arg1 count:(int)arg2 avoidResourceType:(unsigned long long)arg3 fromRecord:(id)arg4 inResourcePerType:(id)arg5 ;
-(void)enumerateChangeTypesForChangeType:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(id)copyChangeType:(unsigned long long)arg1 ;
-(void)applyChange:(id)arg1 ;
-(void)applyChangeType:(unsigned long long)arg1 fromChange:(id)arg2 ;
-(BOOL)isAssetChange;
-(void)setRecordModificationDate:(NSDate *)arg1 ;
-(NSDate *)dateDeleted;
-(void)setDateDeleted:(NSDate *)arg1 ;
-(CPLScopedIdentifier *)resourceCopyFromScopedIdentifier;
-(void)setResourceCopyFromScopedIdentifier:(CPLScopedIdentifier *)arg1 ;
-(BOOL)inTrash;
-(void)setInTrash:(BOOL)arg1 ;
-(BOOL)inExpunged;
-(void)setInExpunged:(BOOL)arg1 ;
-(NSString *)realIdentifier;
-(void)setRealIdentifier:(NSString *)arg1 ;
-(NSData *)recordChangeData;
-(void)setRecordChangeData:(NSData *)arg1 ;
-(BOOL)serverRecordIsCorrupted;
-(void)setServerRecordIsCorrupted:(BOOL)arg1 ;
-(id)asRecordView;
-(BOOL)validateRecordForTracker:(id)arg1 ;
@end

