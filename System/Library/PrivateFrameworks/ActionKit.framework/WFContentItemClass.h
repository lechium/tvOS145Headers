/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:43 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol WFContentItemClass
@optional
+(id)propertyBuilders;
+(id)ownedPasteboardTypes;
+(id)itemWithSerializedItem:(id)arg1 forType:(id)arg2 named:(id)arg3 attributionSet:(id)arg4;
+(BOOL)supportedTypeMustBeDeterminedByInstance:(id)arg1;
+(id)filterRepresentationsForAllowedContent:(id)arg1;
-(id)preferredFileType;
-(id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3;
-(id)generateFileRepresentationsForType:(id)arg1 options:(id)arg2 error:(id*)arg3;
-(id)generateObjectRepresentationsForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3;
-(id)generateFileRepresentationForType:(id)arg1 options:(id)arg2 error:(id*)arg3;
-(void)generateObjectRepresentation:(/*^block*/id)arg1 options:(id)arg2 forClass:(Class)arg3;
-(void)generateObjectRepresentations:(/*^block*/id)arg1 options:(id)arg2 forClass:(Class)arg3;
-(void)generateFileRepresentation:(/*^block*/id)arg1 options:(id)arg2 forType:(id)arg3;
-(void)generateFileRepresentations:(/*^block*/id)arg1 options:(id)arg2 forType:(id)arg3;
-(void)getPreferredFileExtension:(/*^block*/id)arg1;
-(void)getPreferredFileSize:(/*^block*/id)arg1;
-(id)additionalRepresentationsForSerialization;
-(void)getFileRepresentationsForSerialization:(/*^block*/id)arg1;
-(BOOL)includesFileRepresentationInSerializedItem;
-(id)preferredObjectType;
-(BOOL)canGenerateRepresentationForType:(id)arg1;
-(BOOL)cachesSupportedTypes;
-(void)copyStateToItem:(id)arg1;

@required
+(id)typeDescription;
+(id)localizedTypeDescription;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)countDescription;
+(id)contentCategories;
+(id)outputTypes;
+(id)localizedPluralTypeDescription;
+(id)filterDescription;
+(id)localizedFilterDescription;
+(id)pluralFilterDescription;
+(id)localizedPluralFilterDescription;
+(id)defaultSourceForRepresentation:(id)arg1;

@end

