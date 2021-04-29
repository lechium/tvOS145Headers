/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, PKPeerPaymentRecipient;

@interface PKCacheRecipientItem : NSObject <NSSecureCoding> {

	NSDate* _insertDate;
	PKPeerPaymentRecipient* _item;

}

@property (nonatomic,readonly) PKPeerPaymentRecipient * item;              //@synthesize item=_item - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(PKPeerPaymentRecipient *)item;
-(BOOL)hasExpired;
-(id)initWithItem:(id)arg1 ;
-(BOOL)isNewerThan:(id)arg1 ;
@end

