/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:21 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVServices/TVServices-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <TVServices/TVTopShelfContentPrivate.h>
#import <TVServices/TVTopShelfContent.h>

@class NSArray, NSString;

@interface TVTopShelfInsetContent : NSObject <BSDescriptionProviding, NSSecureCoding, TVTopShelfContentPrivate, TVTopShelfContent> {

	NSArray* _items;

}

@property (nonatomic,copy) NSArray * items;                              //@synthesize items=_items - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL _hasDisplayableContent; 
+(id)new;
+(BOOL)supportsSecureCoding;
+(CGSize)imageSize;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(id)initWithItems:(id)arg1 ;
-(id)_deepCopy;
-(id)initWithItems:(id)arg1 removeDuplicateItems:(BOOL)arg2 ;
-(void)_removeItemsWithIdentifiers:(id)arg1 ;
-(void)_updateItemsWithItemUpdates:(id)arg1 ;
-(BOOL)_hasDisplayableContent;
@end

