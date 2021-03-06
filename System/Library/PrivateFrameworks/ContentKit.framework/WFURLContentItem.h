/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:20 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContentKit/WFContentItem.h>
#import <libobjc.A.dylib/WFContentItemClass.h>

@class NSURL;

@interface WFURLContentItem : WFContentItem <WFContentItemClass>

@property (nonatomic,readonly) NSURL * URL; 
+(id)allURLCoercionsInWorkflowKit;
+(id)typeDescription;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)countDescription;
+(id)contentCategories;
+(id)outputTypes;
+(id)attributionSetContentOfURL:(id)arg1 ;
+(id)ownedPasteboardTypes;
+(id)itemWithSerializedItem:(id)arg1 forType:(id)arg2 named:(id)arg3 attributionSet:(id)arg4 ;
+(BOOL)supportedTypeMustBeDeterminedByInstance:(id)arg1 ;
+(id)filterRepresentationsForAllowedContent:(id)arg1 ;
+(void)rediscoverURLCoercionClassesIfNeeded;
+(id)URLCoercions;
+(id)mutableURLCoercions;
+(void)registerURLCoercion:(Class)arg1 ;
-(id)description;
-(NSURL *)URL;
-(id)outputTypes;
-(void)getContentsWithRequest:(id)arg1 expectedByteCountHandler:(/*^block*/id)arg2 writtenByteCountHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)getTitle:(/*^block*/id)arg1 ;
-(void)generateObjectRepresentations:(/*^block*/id)arg1 options:(id)arg2 forClass:(Class)arg3 ;
-(void)generateFileRepresentation:(/*^block*/id)arg1 options:(id)arg2 forType:(id)arg3 ;
-(void)getPreferredFileExtension:(/*^block*/id)arg1 ;
-(void)getPreferredFileSize:(/*^block*/id)arg1 ;
-(id)additionalRepresentationsForSerialization;
-(BOOL)includesFileRepresentationInSerializedItem;
-(BOOL)canGenerateRepresentationForType:(id)arg1 ;
-(void)getHeadersWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)intermediaryTypesForCoercionToItemClass:(Class)arg1 ;
-(void)getContentsOfURLWithHandler:(/*^block*/id)arg1 ;
-(void)getContentsWithRequest:(id)arg1 cacheResult:(BOOL)arg2 expectedByteCountHandler:(/*^block*/id)arg3 writtenByteCountHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)generateObjectRepresentationForPrintHandler:(/*^block*/id)arg1 ;
@end

