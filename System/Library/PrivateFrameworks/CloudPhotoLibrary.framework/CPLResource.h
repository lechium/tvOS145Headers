/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CPLResourceIdentity, CPLScopedIdentifier, NSString;

@interface CPLResource : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long _backgroundDownloadTaskIdentifier;
	BOOL _canGenerateDerivative;
	CPLResourceIdentity* _identity;
	CPLScopedIdentifier* _itemScopedIdentifier;
	unsigned long long _resourceType;
	unsigned long long _sourceResourceType;

}

@property (nonatomic,retain) CPLResourceIdentity * identity;                        //@synthesize identity=_identity - In the implementation block
@property (nonatomic,copy) CPLScopedIdentifier * itemScopedIdentifier;              //@synthesize itemScopedIdentifier=_itemScopedIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long resourceType;                       //@synthesize resourceType=_resourceType - In the implementation block
@property (assign,nonatomic) unsigned long long sourceResourceType;                 //@synthesize sourceResourceType=_sourceResourceType - In the implementation block
@property (assign,nonatomic) BOOL canGenerateDerivative;                            //@synthesize canGenerateDerivative=_canGenerateDerivative - In the implementation block
@property (nonatomic,copy) NSString * itemIdentifier; 
+(BOOL)supportsSecureCoding;
+(id)shortDescriptionForResourceType:(unsigned long long)arg1 ;
+(BOOL)cplShouldIgnorePropertyForCoding:(id)arg1 ;
+(BOOL)cplShouldIgnorePropertyForEquality:(id)arg1 ;
+(id)normalizedResourcesFromResources:(id)arg1 resourcePerResourceType:(id*)arg2 ;
+(unsigned long long)resourceTypeFromShortDecription:(id)arg1 ;
+(id)descriptionForResourceType:(unsigned long long)arg1 ;
+(BOOL)shouldIgnoreResourceTypeOnUpload:(unsigned long long)arg1 ;
+(BOOL)hasPriorityBoostForResourceType:(unsigned long long)arg1 ;
+(unsigned long long)maxPixelSizeForResourceType:(unsigned long long)arg1 ;
+(float)derivativeGenerationThreshold;
+(BOOL)cplShouldGenerateDerivatives;
+(BOOL)resourceTypeTrackedForUpload:(unsigned long long)arg1 ;
+(BOOL)resourceTypeSupportsResourceExpunge:(unsigned long long)arg1 ;
+(void)enumerateResourceTypesWithBlock:(/*^block*/id)arg1 ;
+(BOOL)isDerivativeResourceType:(unsigned long long)arg1 ;
+(BOOL)isNonDerivativeResourceType:(unsigned long long)arg1 ;
+(void)getAllResourceTypesToDownload:(const unsigned long long*)arg1 ;
+(void)getAllResourceTypesToDownloadPrioritizeNonDerivatives:(const unsigned long long*)arg1 ;
+(unsigned long long)countOfResourceTypes;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)redactedDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CPLResourceIdentity *)identity;
-(NSString *)itemIdentifier;
-(void)setIdentity:(CPLResourceIdentity *)arg1 ;
-(unsigned long long)resourceType;
-(void)setResourceType:(unsigned long long)arg1 ;
-(void)setItemIdentifier:(NSString *)arg1 ;
-(id)initWithCPLArchiver:(id)arg1 ;
-(unsigned long long)_backgroundDownloadTaskIdentifier;
-(id)initWithResourceIdentity:(id)arg1 itemScopedIdentifier:(id)arg2 resourceType:(unsigned long long)arg3 ;
-(id)initWithResourceIdentity:(id)arg1 itemIdentifier:(id)arg2 ;
-(id)initWithResourceIdentity:(id)arg1 itemIdentifier:(id)arg2 resourceType:(unsigned long long)arg3 ;
-(void)setItemScopedIdentifier:(CPLScopedIdentifier *)arg1 ;
-(id)bestFileNameForResource;
-(BOOL)isTrackedForUpload;
-(unsigned long long)estimatedResourceSize;
-(void)_setBackgroundDownloadTaskIdentifier:(unsigned long long)arg1 ;
-(CPLScopedIdentifier *)itemScopedIdentifier;
-(unsigned long long)sourceResourceType;
-(void)setSourceResourceType:(unsigned long long)arg1 ;
-(BOOL)canGenerateDerivative;
-(void)setCanGenerateDerivative:(BOOL)arg1 ;
@end

