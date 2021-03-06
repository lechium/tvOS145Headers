/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class SSVMediaContentTasteItem, NSDate, NSString;

@interface SSVMediaContentTasteItemUpdate : NSObject <SSXPCCoding, NSSecureCoding> {

	SSVMediaContentTasteItem* _item;
	NSDate* _updateDate;

}

@property (nonatomic,copy) SSVMediaContentTasteItem * item;              //@synthesize item=_item - In the implementation block
@property (nonatomic,copy) NSDate * updateDate;                          //@synthesize updateDate=_updateDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setItem:(SSVMediaContentTasteItem *)arg1 ;
-(SSVMediaContentTasteItem *)item;
-(NSDate *)updateDate;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)setUpdateDate:(NSDate *)arg1 ;
@end

