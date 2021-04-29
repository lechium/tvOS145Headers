/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:49 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_PFAncillaryModelFactory.h>

@class NSString;

@interface PFCloudKitMetadataModel : NSObject <_PFAncillaryModelFactory>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)ancillaryModelNamespace;
+(id)_newMetadataModelV1;
+(id)_newMetadataModelV2;
+(id)_newMetadataModelV3;
+(id)_newMetadataModelV4;
+(id)_newMetadataModelV5;
+(id)_newMetadataModelV6;
+(id)_newMetadataModelV7;
+(id)_newMetadataModelV8;
+(id)_newMetadataModelV9;
+(id)_newMetadataModelV10;
+(id)newMetadataModelForFrameworkVersion:(id)arg1 ;
+(id)allMetadataModels;
+(BOOL)doesMetadataModel:(id)arg1 matchConnection:(id)arg2 hasOldMetadataTables:(BOOL*)arg3 ;
+(unsigned long long)ancillaryEntityOffset;
+(void)_invalidateStaticCaches;
+(BOOL)checkAndRepairSchemaOfStore:(id)arg1 withManagedObjectContext:(id)arg2 error:(id*)arg3 ;
+(BOOL)currentMetadataVersionHashesMatchCachedMetadataVersionHashes:(id)arg1 ;
+(id)identifyModelForStore:(id)arg1 withConnection:(id)arg2 hasOldMetadataTables:(BOOL*)arg3 ;
+(unsigned long long)ancillaryEntityCount;
@end
