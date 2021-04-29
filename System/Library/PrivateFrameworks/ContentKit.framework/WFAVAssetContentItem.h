/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:20 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContentKit/WFGenericFileContentItem.h>
#import <libobjc.A.dylib/WFContentItemClass.h>

@class AVAsset;

@interface WFAVAssetContentItem : WFGenericFileContentItem <WFContentItemClass>

@property (nonatomic,readonly) AVAsset * asset; 
+(id)typeDescription;
+(id)propertyBuilders;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)contentCategories;
+(id)outputTypes;
+(BOOL)supportedTypeMustBeDeterminedByInstance:(id)arg1 ;
-(id)duration;
-(id)supportedTypes;
-(AVAsset *)asset;
-(id)frameRate;
-(id)preferredFileType;
-(id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)generateFileRepresentation:(/*^block*/id)arg1 options:(id)arg2 forType:(id)arg3 ;
-(void)getPreferredFileSize:(/*^block*/id)arg1 ;
-(BOOL)canGenerateRepresentationForType:(id)arg1 ;
-(BOOL)getListSubtitle:(/*^block*/id)arg1 ;
-(BOOL)getListAltText:(/*^block*/id)arg1 ;
-(void)generateFileRepresentation:(/*^block*/id)arg1 forType:(id)arg2 metadata:(id)arg3 options:(id)arg4 ;
-(id)generateExportSessionForType:(id)arg1 ;
-(id)metadataItemForCommonKey:(id)arg1 ;
@end
