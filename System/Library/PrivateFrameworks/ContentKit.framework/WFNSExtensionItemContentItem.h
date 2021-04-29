/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:21 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContentKit/WFContentItem.h>
#import <libobjc.A.dylib/WFContentItemClass.h>

@class NSArray, NSExtensionItem;

@interface WFNSExtensionItemContentItem : WFContentItem <WFContentItemClass> {

	NSArray* _extensionSubItems;

}

@property (nonatomic,retain) NSArray * extensionSubItems;                    //@synthesize extensionSubItems=_extensionSubItems - In the implementation block
@property (nonatomic,readonly) NSExtensionItem * extensionItem; 
+(id)typeDescription;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)countDescription;
+(id)contentCategories;
+(id)outputTypes;
+(BOOL)supportedTypeMustBeDeterminedByInstance:(id)arg1 ;
+(id)itemWithObject:(id)arg1 sourceAppBundleIdentifier:(id)arg2 ;
-(id)name;
-(id)itemProviders;
-(id)generateObjectRepresentationsForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3 ;
-(BOOL)canGenerateRepresentationForType:(id)arg1 ;
-(BOOL)cachesSupportedTypes;
-(NSExtensionItem *)extensionItem;
-(void)coerceToItemClasses:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)preloadImportantItemsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)itemProviderItems;
-(id)extensionItemName;
-(BOOL)itemProvidersSupportType:(id)arg1 ;
-(NSArray *)extensionSubItems;
-(void)setExtensionSubItems:(NSArray *)arg1 ;
@end

