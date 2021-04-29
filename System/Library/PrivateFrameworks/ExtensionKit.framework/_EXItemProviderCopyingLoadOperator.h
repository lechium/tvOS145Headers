/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ExtensionKit.framework/ExtensionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ExtensionKit/ExtensionKit-Structs.h>
#import <libobjc.A.dylib/_EXItemProviderLoading.h>

@class NSItemProvider, NSDictionary, NSString;

@interface _EXItemProviderCopyingLoadOperator : NSObject <_EXItemProviderLoading> {

	NSItemProvider* _itemProvider;
	NSDictionary* _loadedItems;
	SCD_Struct_EX1 _destinationProcessAuditToken;

}

@property (assign,nonatomic) NSItemProvider * itemProvider;                            //@synthesize itemProvider=_itemProvider - In the implementation block
@property (nonatomic,retain) NSDictionary * loadedItems;                               //@synthesize loadedItems=_loadedItems - In the implementation block
@property (assign,nonatomic) SCD_Struct_EX1 destinationProcessAuditToken;              //@synthesize destinationProcessAuditToken=_destinationProcessAuditToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSItemProvider *)itemProvider;
-(void)loadItemForTypeIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 expectedValueClass:(Class)arg3 options:(id)arg4 ;
-(void)loadPreviewImageWithCompletionHandler:(/*^block*/id)arg1 expectedValueClass:(Class)arg2 options:(id)arg3 ;
-(NSDictionary *)loadedItems;
-(void)setLoadedItems:(NSDictionary *)arg1 ;
-(id)initWithItemProvider:(id)arg1 destinationProcessAuditToken:(SCD_Struct_EX1)arg2 ;
-(void)setItemProvider:(NSItemProvider *)arg1 ;
-(void)setDestinationProcessAuditToken:(SCD_Struct_EX1)arg1 ;
-(id)_loadItemsForTypeIdentifiers:(id)arg1 auditToken:(SCD_Struct_EX1)arg2 itemProvider:(id)arg3 ;
-(id)_sandboxedResourceForItemIfNeeded:(id)arg1 auditToken:(SCD_Struct_EX1)arg2 error:(id*)arg3 ;
-(SCD_Struct_EX1)destinationProcessAuditToken;
@end

