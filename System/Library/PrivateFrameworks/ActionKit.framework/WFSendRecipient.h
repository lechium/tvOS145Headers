/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:46 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface WFSendRecipient : NSObject <NSSecureCoding> {

	NSString* _name;
	NSString* _address;

}

@property (nonatomic,copy) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * address;                     //@synthesize address=_address - In the implementation block
@property (nonatomic,readonly) long long contactType; 
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)address;
-(void)setAddress:(NSString *)arg1 ;
-(long long)contactType;
-(id)initWithName:(id)arg1 address:(id)arg2 ;
-(id)recipientContentItem;
@end

