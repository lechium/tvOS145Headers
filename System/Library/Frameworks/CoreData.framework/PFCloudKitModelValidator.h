/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:49 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSManagedObjectModel, NSString;

@interface PFCloudKitModelValidator : NSObject {

	NSManagedObjectModel* _model;
	NSString* _configurationName;
	BOOL _skipValueTransformerValidation;
	BOOL _validateLegacyMetadataAttributes;

}

@property (assign,nonatomic) BOOL skipValueTransformerValidation;                //@synthesize skipValueTransformerValidation=_skipValueTransformerValidation - In the implementation block
@property (assign,nonatomic) BOOL validateLegacyMetadataAttributes;              //@synthesize validateLegacyMetadataAttributes=_validateLegacyMetadataAttributes - In the implementation block
+(id)stringFromDeleteRule:(unsigned long long)arg1 ;
+(BOOL)enforceUniqueConstraintChecks;
-(id)init;
-(void)dealloc;
-(BOOL)_validateManagedObjectModel:(id)arg1 error:(id*)arg2 ;
-(BOOL)validateEntities:(id)arg1 error:(id*)arg2 ;
-(id)initWithManagedObjectModel:(id)arg1 configuration:(id)arg2 ;
-(BOOL)validate:(id*)arg1 ;
-(BOOL)validateEntity:(id)arg1 hasAttributeNamed:(id)arg2 ofType:(unsigned long long)arg3 andReturnFailureReason:(id*)arg4 ;
-(BOOL)skipValueTransformerValidation;
-(void)setSkipValueTransformerValidation:(BOOL)arg1 ;
-(BOOL)validateLegacyMetadataAttributes;
-(void)setValidateLegacyMetadataAttributes:(BOOL)arg1 ;
@end

